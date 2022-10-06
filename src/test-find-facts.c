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

  assert(find_facts(facts,1) == true);
  assert(find_facts(facts,2) == true);
  assert(find_facts(facts,3) == false);
  assert(find_facts(facts,4) == false);

  add_output(facts,4);

  assert(find_facts(facts,1) == true);
  assert(find_facts(facts,2) == true);
  assert(find_facts(facts,3) == false);
  assert(find_facts(facts,4) == true);

  destroy_tab(facts);

  return EXIT_SUCCESS;
}