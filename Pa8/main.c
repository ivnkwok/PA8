// Main

#include "Header.h" // Contain header library

int main(void)
{
	// 1. my_str_n_cat

	// Variables
	int n = 5;
	char source[] = "123456789";
	char destination[] = "0000000000";

	my_str_n_cat(n, &source, &destination);		// Call function my_str_n_cat
	printf("my_str_n_cat:\n");
	printf("Source String: pointer, Destination String: %s\n\n", destination);

	// 2. Recall Binary Search

	//Variables
	int target = 5, targetindex = 0;
	int list[10];

	targetindex = binary_search(list, target);	// Call function binary_search (also set variable equal to the return value)
	printf("Binary Search:\n");					// Print Results (expected)
	printf("Target Num: 5, Size: 1-10\n");
	printf("Target Index: %d\n\n", targetindex);

	// 3. bubble_sort

	// Variables
	int num_strings = 3;
	char* point_strings[] = { "taco", "burrito", "nacho" };


	bubble_sort(point_strings, num_strings); // Call function bubble_sort

	printf("String Order: ");
	for (int i = 0; i < num_strings; i++) // Print results
	{
		printf("%s ", point_strings[i]);
	}
	printf("\n\n");

	// 4. is_palindrome

	// Variables
	char* string[] = { "taco cat" };
	int length = strlen(*string);
	int start = 0, end = length;
	int palindrome = 0;

	remove_spaces(string);
	palindrome = is_palindrome(string, start, end, length); // Call function is_palindrome
	if (palindrome == 1)
	{
		printf("String is '%s'\n", *string);
		printf("String is a palindrome\n\n");
	}
	else if (palindrome == -1)
	{
		printf("String is NOT a palindrome\n\n");
	}

	// 5. 


	// 6. maximum_occurrences

	int count;
	char most;
	char* str = "a test string";
	Occurrences arr[26] = { 0 };
	maximum_occurrences(str, arr, &count, &most);
	printf("%d %c", count, most);

	// 7. max_consecutive_integers

	int rows = 4;
	int cols = 5;
	int* start = 0;
	int count = 0;
	int arr[4][5] = { {-5, 6, 0, 2, 2},
					{2, 2, 2, 9, 3},
					{3, 3, 2, 1, -8},
					{7, -2, 6, 0, 4} };
	max_consecutive_integers(arr, rows, cols, &start, &count);

	return 0; // run successfully
}