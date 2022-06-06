#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - Prints a random number and states it is positive, *        negative, or zero.
 *    
 *    Return: Always 0.
 */
int main()
{ 
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 10;
	if (n>0)
		printf("n is a positive number \n",n);
	else if (n<0)
	       printf("n is a negative number \n"n);
        else 
	printd("n is zero \n"n);
return (0);
}
