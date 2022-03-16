#include <unistd.h>
#include "main.h"                                                                                                       /**                                                                                                                     *_putchar - writes the character c
* @c: The character to print
*Return: 0														
*/
int main(void)
{
	_putchar("_putchar");
}
int _putchar(char c)
{
	return (write(c));
}
