#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
  char *sh = "Holberton";

  while (*sh)
    {
      putchar(*sh);
      sh++;
    }
  _putchar('\n');

  return (0);
}
