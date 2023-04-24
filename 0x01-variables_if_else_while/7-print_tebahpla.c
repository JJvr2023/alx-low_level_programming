#include<stdio.h>
#include<stdlib.h>
/**
*main - Main entry point.
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
