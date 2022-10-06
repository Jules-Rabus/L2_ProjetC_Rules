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

  
  Tab *facts = initialize_facts("../../data/example.facts.txt");
  fill_facts(facts,"../../data/example.facts.txt");

  Tab *output = initialize_output(facts);

  assert(facts->size == output->size);
  assert(facts->tab[0] == output->tab[0]);
  assert(facts->tab[1] == output->tab[1]);

  destroy_tab(facts);
  destroy_tab(output);

  return EXIT_SUCCESS;
}