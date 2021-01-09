#include <stdio.h>

main()
{
	printf("celsius  fahrenheit\n");
	float fahr, celsius;                                   /*or by using for loop we can eliminate the rest variables only using fahr
	                                                         for( fahr = 0; fahr <=300; fahr = fahr + 20)*/
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
