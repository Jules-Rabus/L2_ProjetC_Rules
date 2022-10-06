/**
 * \file test_add_output.c
 *
 * \author     Groupe_F
 * \date       2021
 */

#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "./rules.h"
#include "./tab.inc"
#include "./tab-tab.inc"

int main(void) {


  Tab_tab *rules = initialize_rules("../../data/example.rules.txt");
  fill_rules(rules,"../../data/example.rules.txt");

  Tab *facts = initialize_facts("../../data/example.facts.txt");
  fill_facts(facts,"../../data/example.facts.txt");

  Tab *output = initialize_output(facts);
  fill_output(rules,output);

  assert(output_fwrite(output,"../../data/example.output.txt"));

  FILE* reading = NULL;
  reading = fopen("../../data/example.output.txt", "r");

  unsigned int test;

  if (reading != NULL){
    for( unsigned int i = 0 ; i < output->size ; i++ ){
      fscanf(reading,"%u",&test);
      assert(test == output->tab[i]);
    }
    fclose(reading);
  }

  destroy_tab_tab(rules);
  destroy_tab(facts);
  destroy_tab(output);
}