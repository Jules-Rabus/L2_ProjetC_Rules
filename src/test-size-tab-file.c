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

  unsigned int *size= size_tab_file("../../data/example.facts.txt");

  assert(size[0] == 1);
  assert(size[1] == 2);

  free(size);

  size = size_tab_file("../../data/example.rules.txt");

  assert(size[0] == 8);
  assert(size[1] == 2);

  free(size);
  
  return EXIT_SUCCESS;
}