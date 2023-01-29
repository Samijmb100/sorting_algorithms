#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void sort_deck(deck_node_t **deck);
void quick_sort_hoare(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);

#endif

