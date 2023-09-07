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
printf("Size of Char: %lu byte(s)\n", sizeof(char));
printf("Size of Int: %lu byte(s)\n", sizeof(int));
printf("Size of Long: %lu byte(s)\n", sizeof(long));
printf("Size of Long Long: %lu byte(s)\n", sizeof(long long));
printf("Size of Float: %lu byte(s)\n", sizeof(float));
return (0);
}
