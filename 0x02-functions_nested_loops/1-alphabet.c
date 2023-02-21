#include "main.h"
#include <unistd.h>
#include <stdio.h>


	/**
 	* print_alphabet - Prints the lowercase alphabet using putchar
 	*
 	* Return: None
 	*/


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}


