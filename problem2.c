/* 
	Project Ecular #2
	"Even Fibonacci numbers"
	Calculates the sum of all even Fibonacci numbers
	less than 4 million.
*/

#include <stdio.h>
int main() {
    int x=1,y=2,sum,limit;     //Here value of first 2 terms have been initialized as 1 and 2
    int evensum=2;             //Since in calculation, we omit 2 which is an even number
    printf("\nEnter Limit: ");   //Enter limit as 4000000 (4million) to get desired result
    scanf("%d",&limit);
    while( (x+y)<limit ) {
        sum=x+y;
        x=y;
        y=sum;
        if (sum%2==0)
            evensum+=sum;
    }
    printf("The sum of the even-valued terms is %d\n",evensum);
    return 0;
}