#include "header.h"

void my_str_n_cat(int n, char* source, char* destination)
{
	while (*destination != '\0') {
		destination++;
	}
	*destination = '\0';
	destination--;
	for (int i = 0; i < n; i++)
	{
		*destination = *source;
		source++;
		destination--;
	}
}

int binary_search(int list[], int target)
{
	// Variables
	int left = 1, found = 0, right = 10, targetindex = -1, mid = 0;

	while ((found == 0) && (left <= right)) // Either found or ran through all integers
	{
		mid = (left + right) / 2;
		if (target = mid) // Found at midpoint
		{
			found = 1;
			targetindex = mid;
		}
		else if (target < mid) // Shorten boundary lower
		{
			right = mid - 1;
		}
		else if (target > mid) // Shorten boundary higher
		{
			left = mid + 1;
		}
	}
	return targetindex;
}

void bubble_sort(char* arr[], int n) {
	char* temp;
	for (int U = n; U > 0; U--)
	{
		for (int C = 1; C < U; C++)
		{
			if (strcmp(arr[C], arr[C - 1]) < 0) {
				temp = arr[C];
				arr[C] = arr[C - 1];
				arr[C - 1] = temp;
			}
		}
	}
}

void remove_spaces(char* s)
{
	char* d = s;
	do {
		while (*d == ' ') {
			++d;
		}
	} while (*s++ = *d++);
}

int is_palindrome_recursion(char* string, int start, int end)
{
	//length of string = 1
	if (start == end)
	{
		return 1;
	}

	if (*(string + start) != *(string + end))
	{
		return 0;
	}

	if (start < end + 1)
	{
		return is_palindrome(string, start + 1, end - 1);
	}

	return 1;
}

int is_palindrome(char* string, int length)
{
	if (length < 2)
		return 1;

	return is_palindrome_recursion(string, 0, length - 1);
}

int count_primes(int n)
{
	if (n <= 1) return 0;

	if (is_prime(n))
	{
		return n + count_primes(n - 1);
	}

	return count_primes(n - 1);

}

int is_prime(int n)
{
	int div = 2;

	for (div; div < (int)sqrt(n) + 2; div++)
	{
		if (n % div == 0 && n != div)
		{
			return 0;
		}
	}

	return 1;
}

void maximum_occurrences(char* str, Occurrences arr[], int* count, char* most) {
	*count = 0;
	*most = *str;
	double letterCount = 0.0;
	while (*str) {
		if (*str == ' ') {
			str++;
		}
		arr[tolower(*str) - 'a'].num_occurrences++;
		str++;
		letterCount++;
	}
	for (int i = 0; i < 26; i++) {
		arr[i].frequency = arr[i].num_occurrences / letterCount;
		if (*count < arr[i].num_occurrences) {
			*count = arr[i].num_occurrences;
			*most = (char)('a' + i);
		}
	}
}

void max_consecutive_integers(int arr[][5], int rows, int cols, int** start, int* count) {
	int curr = arr[0][0];
	int tempCount = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (curr != arr[i][j]) {
				if (tempCount > *count) {
					*count = tempCount;
					*start = &arr[i - (tempCount % rows)][j - (tempCount % cols)];
				}
				curr = arr[i][j];
				tempCount = 1;
			}
			else {
				tempCount++;
			}
		}
	}
}

