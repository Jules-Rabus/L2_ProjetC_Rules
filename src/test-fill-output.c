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

  assert(output->size == 4);
  assert(output->tab[0] == 1);
  assert(output->tab[1] == 2);
  assert(output->tab[2] == 3);
  assert(output->tab[3] == 7);

  destroy_tab_tab(rules);
  destroy_tab(facts);
  destroy_tab(output);

  return EXIT_SUCCESS;
}