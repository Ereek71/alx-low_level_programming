#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
<<<<<<< HEAD
 * main - Prints a random number and states whether it is
 *        positive, negative, or zero.
 *
 *  Return: Always 0.
=======
 * main - Prints a random number and states it is positive, *        negative, or zero.
 *    
 *    Return: Always 0.
>>>>>>> d6eb425340f0a18979c43f894b6d461158008c96
 */
int main(voidl)
{ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 10;
	
	if (n>0)
<<<<<<< HEAD
		printf("n is a positive number \n", n);
	else if (n<0)
	        printf("n is a negative number \n", n);
        else 
	        printd("n is zero \n", n);
	return (0);
=======
		printf("%d is a positive number \n", n);
	else if (n<0)
	       printf("%d is a negative number \n", n);
        else 
	printf("%d is zero \n", n);
return (0);
>>>>>>> d6eb425340f0a18979c43f894b6d461158008c96
}
