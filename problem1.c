/* 
	Project Eculer #1
 	Calculate the sum of all multiples of 3 or 5 below 1000
 */
#include <stdio.h>
int main ()

{
	int sum = 0;
	int i;

	for(i=0; i < 1000; i++)
	{
		if( i % 3 == 0 || i % 5 == 0)
			sum += i;

	}
		printf("The Sum of the numbers is\n%i\n", sum);

		return 0;


}
