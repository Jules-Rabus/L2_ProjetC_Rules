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

  unsigned int *size = size_tab_file("../../data/example.rules.txt");

  Tab_tab *tab = (Tab_tab*) malloc(sizeof(*tab));

  tab->row = size[0];
  tab->column = size[1];

  assert(sizeof(rules) == sizeof(tab));
  assert(rules->row == tab->row);
  assert(rules->column == tab->column);

  tab->tab = (unsigned int**) malloc (size[0] * sizeof(unsigned int*));

  assert(sizeof(rules->tab) == sizeof(tab->tab));

  for( unsigned int i = 0; i < rules->row; i++){
    tab->tab[i] = (unsigned int*) calloc(size[1], sizeof(unsigned int));
    assert(sizeof(tab->tab[i]) == sizeof(rules->tab[i]));
  }

  destroy_tab_tab(tab);
  destroy_tab_tab(rules);
  free(size);  

  return EXIT_SUCCESS;
}