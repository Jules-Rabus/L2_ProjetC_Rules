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

  assert(file_exist("../../data/example.facts.txt") == 1);
  assert(file_exist("../../data/example.rules.txt") == 1);
  assert(file_exist("../../data/nothing.facts.txt") == 0);

  return EXIT_SUCCESS;
}