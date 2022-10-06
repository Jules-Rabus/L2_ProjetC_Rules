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

    add_output(output,3);

    assert(output->tab[2] == 3);
    assert(output->size == 3);

    add_output(output,7);

    assert(output->tab[2] == 3);
    assert(output->tab[3] == 7);
    assert(output->size == 4);

    destroy_tab(facts);
    destroy_tab(output);

    return EXIT_SUCCESS;
}