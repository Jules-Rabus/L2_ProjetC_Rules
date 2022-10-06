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

  assert(facts->tab[0] == 1);
  assert(facts->tab[1] == 2);

  destroy_tab(facts);

  return EXIT_SUCCESS;
}