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

  assert(rules->tab[0][0] == 1);
  assert(rules->tab[0][1] == 2);

  assert(rules->tab[1][0] == 3);
  assert(rules->tab[1][1] == 0);

  assert(rules->tab[2][0] == 4);
  assert(rules->tab[2][1] == 5);

  assert(rules->tab[3][0] == 6);
  assert(rules->tab[3][1] == 0);

  assert(rules->tab[4][0] == 3);
  assert(rules->tab[4][1] == 0);

  assert(rules->tab[5][0] == 7);
  assert(rules->tab[5][1] == 0);

  assert(rules->tab[6][0] == 6);
  assert(rules->tab[6][1] == 0);

  assert(rules->tab[7][0] == 8);
  assert(rules->tab[7][1] == 0);

  destroy_tab_tab(rules);

}