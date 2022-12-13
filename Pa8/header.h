#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct occurrences

{

    int num_occurrences;

    double frequency;

} Occurrences;

void my_str_n_cat(int n, char* source, char* destination);
int binary_search(int list[], int target);
void bubble_sort(char* arr[], int n);
void remove_spaces(char* s);
int is_palindrome_recursion(char* string, int start, int end);
int is_palindrome(char* string, int length);
int count_primes(int n);
int is_prime(int n);
void max_consecutive_integers(int arr[][5], int rows, int cols, int** start, int* count);
int count_primes(int n);
