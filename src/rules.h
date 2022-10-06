/**
 * \file rules.h
 * \author Groupe_F
 * \date 2021
 *
 */

/*--    IF NOT DEFINED --*/
#ifndef RULES_H_
#define RULES_H_

/*--    INCLUDES    --*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--    STRUCTURES  --*/

/**
 * \struct _Tab_tab Tab_tab
 * \brief a structure with an array of array of unsigned integers with the size of the array
 *
 * _Tab_tab Tab_tab is a structure with an array of array of unsigned integers with the size of the array
 */
typedef struct _Tab_tab Tab_tab ;

/**
 * \struct _Tab Tab
 * \brief a structure with an array of unsigned integers with the size of the array.
 *
 * _Tab Tab is a structure with an array of unsigned integers with the size of the array.
 */
typedef struct _Tab Tab;

/*--    EXTERNS FUNCTIONS   --*/
/**
 * \brief function prototype unsigned int *size_tab_file
 */
extern unsigned int *size_tab_file(const char* file);

/**
 * \brief function prototype Tab_tab *initialize_rules
 */
extern Tab_tab *initialize_rules(const char* file);

/**
 * \brief function prototype Tab *initialize_facts
 */
extern Tab *initialize_facts(const char* file);

/**
 * \brief function prototype Tab *initialize_output
 */
extern Tab *initialize_output(Tab *facts);

/**
 * \brief function prototype void fill_rules
 */
extern void fill_rules(Tab_tab *rules, const char* file);

/**
 * \brief function prototype void fill_facts
 */
extern void fill_facts(Tab *facts,const char *file);

/**
 * \brief function prototype void add_output
 */
extern void add_output( Tab *output, unsigned int value);

/**
 * \brief function prototype bool find_facts
 */
extern bool find_facts(Tab *facts, unsigned int value);

/**
 * \brief function prototype void print_tab_int
 */
extern void destroy_tab(Tab *tab);

/**
 * \brief function prototype void destroy_tab_tab
 */
void destroy_tab_tab(Tab_tab *tab);

/**
 * \brief function prototype void destroy_tab
 */
extern void print_tab_int(Tab *tab);

/**
 * \brief function prototype void print_tab_tab_int
 */
extern void print_tab_tab_int(Tab_tab *tab);

/**
 * \brief function prototype void fill_output
 */
extern void fill_output(Tab_tab *rules, Tab *output);

/**
 * \brief function prototype bool output_fwrite
 */
extern bool output_fwrite(const Tab *output,const char *file);

/**
 * \brief function prototype bool file_exist
 */
extern bool file_exist(const char *file);

/**
 * \brief function prototype void process_argument
 */
extern void process_argument(int argc, char **argv, char **filename_rules, char **filename_facts, char **filename_output);

/*--    ENDIF   --*/
#endif  // RULES_H_