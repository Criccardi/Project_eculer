#include <stdio.h>
int main()

{
	int first = 1;
	int second = 2;
	// holds numbers
	int hold = 0 ;
	int total = 0;

	while (second < 4000000) {
		if (second %2 == 0){
			total += second;
		}
		hold = second;
		second += first;
		first = hold;
	}
	printf("%d", total);
	return 0;
}
