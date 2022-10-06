/**
 * \file rules.c
 *
 * \author Groupe F
 * \date 2021-12
 */

/*--       INCLUDES       --*/

#include "./rules.h"

#include "./tab.inc"
#include "./tab-tab.inc"

/*--        FUNCTIONS      --*/

//Calculate the size of a file
/**
 * \fn unsigned int *size_tab_file(const char* file)
 * \brief Calculate the size of a file
 *
 * \param file The path to the file
 * \return a tab with the size
 */

unsigned int *size_tab_file(const char* file){

    FILE* reading = NULL;
    reading = fopen(file, "r");

    if (reading != NULL){

        unsigned int *size = NULL;

        size = (unsigned int*) calloc( 2 , sizeof(unsigned int));

        if( size == NULL){
            printf("Memory allocation error.");
            exit(EXIT_FAILURE);
        }

        size[0]++;
        unsigned int row_size = 1;
        bool empty = true;
        char currentCharacter;

        while( (currentCharacter = fgetc(reading)) != EOF){

            if (currentCharacter != ' ' && currentCharacter != '\n'){
                empty = false;
            }

            if(currentCharacter == ' ' && !empty){
                row_size++;

                if ( row_size > size[1]){
                    size[1] = row_size;
                }

            }

            if(currentCharacter == '\n'){
                if(!empty){
                    size[0]++;
                    row_size = 0;
                }
                empty = true;
            }

        }

        fclose(reading);
        return size;
    }
    else{
        printf("The file : %s is non-existent.",file);
        exit(-1);
    }
}

/* - - - - - - - - - - - - - - - - - - - - - - - */


/**
 * \fn Tab_tab *initialize_rules(const char* file)
 * \brief RECOVER RULES.TXT IN ORDER TO ALLOCATE A STRUCT TAB_TAB OF THE RIGHT SIZE
 *
 * \param file The path to the file
 * \return a struct Tab_tab with the right size
 */
Tab_tab *initialize_rules(const char* file){

    unsigned int *size = size_tab_file(file);

    Tab_tab *rules = (Tab_tab*) malloc(sizeof(*rules));

    if(rules == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    rules->row = size[0];
    rules->column = size[1];
    free(size);

    rules->tab = (unsigned int**) malloc (rules->row * sizeof(unsigned int*));//MEMORY ALLOCATION

    if( rules->tab == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    for( unsigned int i = 0; i < rules->row; i++){
        rules->tab[i] = (unsigned int*) calloc(rules->column, sizeof(unsigned int));

        if( rules->tab[i] == NULL){
            printf("Memory allocation error.");
            exit(EXIT_FAILURE);
        }
    }

    return rules;

}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn Tab *initialize_facts(const char* file)
 * \brief RECOVER FACTS.TXT IN ORDER TO ALLOCATE A STRUCT TAB OF THE RIGHT SIZE
 *
 * \param file The path to the file
 * \return a struct Tab with the right size
 */

Tab *initialize_facts(const char* file){

    unsigned int *size = size_tab_file(file);

    if(size[0] > 1){
        printf("The facts file : %s, doesn't have the required format.\n The facts must be written on one line",file);
        exit(EXIT_FAILURE);
    }

    Tab *facts= (Tab*) malloc(sizeof(*facts));

    if(facts == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    facts->size = size[1];
    free(size);

    facts->tab = (unsigned int*) calloc(facts->size, sizeof(unsigned int));

    if(facts->tab == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    return facts;

}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn Tab *initialize_output(Tab *facts)
 * \brief COPY FACTS IN A STRUCT TAB
 *
 * \param facts the facts that have been read
 * \return a copy of the struct facts
 */

Tab *initialize_output(Tab *facts){

    Tab *output= (Tab*) malloc(sizeof(*output));

    if(output == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    output->size = facts->size;
    output->tab = (unsigned int*) calloc( facts->size, sizeof(unsigned int));

    if(output->tab == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    memcpy(output->tab, facts->tab, facts->size * sizeof(unsigned int));

    if(output->tab == NULL){
        printf("Memory allocation error.");
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    return output;
}

/* - - - - - - - - - - - - - - - - - - - - - - - */


/**
 * \fn void *fill_rules(Tab_tab *rules, const char* file)
 * \brief RECOVER THE RULES.TXT FILE IN ORDER TO FILL THE STRUCT RULES
 *
 * \param rules The struct rules
 * \param file The path to the file
 */

void fill_rules(Tab_tab *rules, const char* file){

    FILE* reading = NULL;
    reading = fopen(file, "r");

    if (reading != NULL){

        char buffer;
        unsigned int column = 0;

        for ( unsigned int row = 0 ; row < rules->row ; row++){

            do{
                fscanf(reading,"%u%c",&rules->tab[row][column],&buffer);
                column++;
            }while(buffer != '\n' );

            column = 0;

        }

        fclose(reading);
    }
    else{
        printf("The file : %s is non-existent",file);
        exit(EXIT_FAILURE);
    }

}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn void *fill_facts(Tab *facts,const char *file)
 * \brief RECOVER THE FACTS.TXT FILE IN ORDER TO FILL THE STRUCT FACTS
 *
 * \param facts The struct facts
 * \param file The path to the file
 */

void fill_facts(Tab *facts,const char *file){

    FILE* reading = NULL;
    reading = fopen(file, "r");

    if (reading != NULL){

        for( unsigned int i = 0; i < facts->size ; i++){
            fscanf(reading,"%u",&facts->tab[i]);
        }

        fclose(reading);

    }
    else{
        printf("The file : %s is non-existent",file);
        exit(EXIT_FAILURE);
    }

}

/**
 * \fn void *add_output(Tab *output, unsigned int value)
 * \brief  Adds an unsigned integer to the struct output 
 *
 * \param output The struct output
 * \param value The unsigned integer to add
 */

void add_output(Tab *output, unsigned int value){

    output->tab = realloc(output->tab, ++output->size * sizeof(unsigned int));

    if(output->tab == NULL){
        printf("Memory allocation error.");
        exit(EXIT_FAILURE);
    }

    output->tab[output->size -1] = value;


}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn bool find_facts(Tab *facts, unsigned int value)
 * \brief FIND IF THE VALUE EXISTS IN THE FACT TABLE
 *
 * \param facts The struct facts
 * \param value The unsigned integer to find
 * \return a bool, true if find, false if not find
 */

bool find_facts(Tab *facts, unsigned int value){

    for( unsigned int i = 0 ; i < facts->size; i++){
        if(facts->tab[i] == value){
            return true;
        }
    }
    return false;
}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn destroy_tab(Tab *tab)
 * \brief Free the memory of the struct Tab
 * \param tab A struct Tab
 */

void destroy_tab(Tab *tab){

    free(tab->tab);
    free(tab);
}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn destroy_tab_tab(Tab_tab *tab)
 * \brief Free the memory of the struct Tab
 * \param tab A struct Tab_tab
 */

void destroy_tab_tab(Tab_tab *tab){
    
    for(unsigned int i = 0 ; i < tab->row ; i++){
        free(tab->tab[i]);
    }

    free(tab->tab);
    free(tab);
}

/* - - - - - - - - - - - - - - - - - - - - - - - */

//FULLY DISPLAYS A TABLE

/**
 * \fn void print_tab_int(Tab *tab)
 * \brief FULLY DISPLAYS A STRUCT TAB
 * \param tab A struct Tab
 */
void print_tab_int(Tab *tab){

    for( unsigned int i = 0 ; i < tab->size ; i++){
        printf("%d",tab->tab[i]);
    }

}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn void print_tab_tab_int(Tab_tab *tab)
 * \brief FULLY DISPLAYS A STRUCT TAB_TAB
 * \param tab A struct Tab_Tab
 */

void print_tab_tab_int(Tab_tab *tab){

    for( unsigned int i = 0 ; i < tab->row; i++){
        for( unsigned int j = 0 ; j < tab->column; j++){
            printf("%d ",tab->tab[i][j]);
        }
        printf("  ");
    }

}

/* - - - - - - - - - - - - - - - - - - - - - - - */


/**
 * \fn void *fill_output(Tab_tab *rules, Tab *output)
 * \brief Completed the output following the defined rules
 * \param rules The struct rules
 * \param output The struct output
 */

void fill_output(Tab_tab *rules, Tab *output){

    bool add;
    unsigned int beginning = 0;

    do{

        if(beginning >= rules->row){
            break;
        }

        for(unsigned int j = beginning; j < rules->row; j+=2){

            add = true;

            for(unsigned int i = 0; i < rules->column ; i++){

                if(rules->tab[j][i] == 0){
                    break;
                }

                if( !find_facts(output,rules->tab[j][i]) || find_facts(output,rules->tab[j+1][0]) ){
                    add = false;
                    break;
                }
            }

            if (add){
                add_output(output,rules->tab[j+1][0]);
                beginning += 2;
                break;
            }

        }

    }while(add);

}

/**
 * \fn bool output_fwrite(const Tab *output,const char *file)
 * \brief Writes the output of the program to the specified file
 * \param output The struct output
 * \param file The path to the file
 * \return a bool, return true if the file has been written correctly, else false
 */

bool output_fwrite(const Tab *output,const char *file){

    FILE* writing = NULL;
    writing = fopen(file, "w+");

    if (writing){

        for( unsigned int i = 0 ; i < output->size ; i++){

            if (fprintf(writing,"%u ",output->tab[i]) == 0){
                fclose(writing);
                return false;
            }
        }
        fclose(writing);
        return true;
    }
    else{
        printf("Write file problem.");
        exit(EXIT_FAILURE);
    }

}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn int file_exist(const char *file)
 * \brief Check if the file exists  
 * \param file
 * \return a bool, return true if the file exists, else false
 */

bool file_exist(const char *file){

    FILE *reading = NULL;
    reading = fopen(file, "r");

    if (reading){
        fclose(reading);
        return true;
    }
    else{
        return false;
    }
}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/**
 * \fn void process_argument(int argc, char **argv, char **filename_rules, char **filename_facts, char **filename_output)
 * \brief  Checks if the entered arguments are correct
 * \param argc  The number of entered arguments
 * \param argv  The entered arguments
 * \param filename_rules    The file name pointer for the rules
 * \param filename_facts    The file name pointer for the facts
 * \param filename_output   The file name pointer for the output
 */

void process_argument(int argc, char **argv, char **filename_rules, char **filename_facts, char **filename_output){

    if(argc < 7){
        printf("Error entering arguments. \nExample : --rules example.rules.txt --facts example.facts.txt --output example.output.txt\n");
        printf("Error : Not enough arguments have been entered.\n");
        exit(EXIT_FAILURE);
    }

    for( unsigned i = 1 ; i < 6 ; i += 2 ){

        if(!strcmp("--rules", argv[i])){

            if(*filename_rules == NULL){

                if(file_exist(argv[i+1])){
                    *filename_rules = (char*) malloc( strlen(argv[i+1]) +1 * sizeof(char) );
                    strcpy(*filename_rules,argv[i+1]);
                }
                else{
                    printf("The file : %s is non-existent",argv[i+1]);
                    exit(EXIT_FAILURE);
                }
            }
            else{
                printf("--rules argument has been redefined.\n");
                exit(EXIT_FAILURE);
            }
        }

        if (!strcmp("--facts",argv[i])){
            if(*filename_facts == NULL){

                if(file_exist(argv[i+1])){
                    *filename_facts = (char*) malloc( strlen(argv[i+1]) +1 * sizeof(char) );
                    strcpy(*filename_facts,argv[i+1]);
                }
                else{
                    printf("The file : %s is non-existent",argv[i+1]);
                    exit(EXIT_FAILURE);
                }
            }
            else{
                printf("--facts argument has been redefined.\n");
                exit(EXIT_FAILURE);
            }
        }

        if(!strcmp("--output",argv[i])){
            if(*filename_output == NULL){
                *filename_output = (char*) malloc( strlen(argv[i+1]) +1 * sizeof(char) );
                strcpy(*filename_output,argv[i+1]);
            }
            else{
                printf("--output argument has been redefined.\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    if(!(*filename_rules && *filename_facts && *filename_output)){
        printf("Error entering arguments. \nExample : --rules example.rules.txt --facts example.facts.txt --output example.output.txt\n");
        if(!(*filename_rules)){
            printf("The rules argument is missing.\n");
        }
        if(!(*filename_facts)){
            printf("The facts argument is missing.\n");
        }
        if(!(*filename_output)){
            printf("The output argument is missing.\n");
        }

        exit(EXIT_FAILURE);

    }

}

/* - - - - - - - - - - - - - - - - - - - - - - - */

/*--        MAIN        --*/


/**
 * \fn int main(int argc, char *argv[])
 * \brief   The main function of the program
 * \param argc  The number of entered arguments
 * \param argv The entered arguments
 * \return returns 1 if the program was executed correctly
 */
int main(int argc, char *argv[]){

    char *filename_rules = NULL;
    char *filename_facts = NULL;
    char *filename_output = NULL;

    process_argument(argc,argv,&filename_rules,&filename_facts,&filename_output);

    Tab_tab *rules = initialize_rules(filename_rules);
    fill_rules(rules,filename_rules);
    printf("\nRules : file : %s : ",filename_rules);
    print_tab_tab_int(rules);

    Tab *facts = initialize_facts(filename_facts);
    fill_facts(facts,filename_facts);
    printf("\nFacts : file : %s : ",filename_facts);
    print_tab_int(facts);

    Tab *output = initialize_output(facts);
    fill_output(rules,output);
    printf("\nOutput : file : %s : ",filename_output);
    print_tab_int(output);

    if(output_fwrite(output,filename_output)){
        printf("\nThe output file has been saved.\n");
    }

    destroy_tab_tab(rules);
    destroy_tab(facts);
    destroy_tab(output);

    free(filename_rules);
    free(filename_facts);
    free(filename_output);

    printf("\n");

    return (EXIT_SUCCESS);
}