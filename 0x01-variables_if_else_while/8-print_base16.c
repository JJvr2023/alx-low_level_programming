#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Main entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; low++)
	putchar(d);

	for (d = 'a'; d <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
