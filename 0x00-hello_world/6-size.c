#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 on successful execution
 */
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long: %lu byte(s)\n", sizeof(long));
printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}