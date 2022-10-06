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

  unsigned int *size = size_tab_file("../../data/example.facts.txt");

  Tab *tab= (Tab*) malloc(sizeof(*tab));

  assert(sizeof(facts) == sizeof(tab));
  assert(sizeof(facts->size) == sizeof(unsigned int));
  assert(sizeof(facts->tab) == sizeof( sizeof(unsigned int) * size[1]));

  destroy_tab(facts);
  free(tab);
  free(size);

  return EXIT_SUCCESS;
}