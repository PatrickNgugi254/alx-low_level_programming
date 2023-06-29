#include<stdio.h>

/**
 *main - main entry point
 *
 *return : always 0 (sucess)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of an long float: %lu byte(s)", sizeof(float));
	return (0);
}