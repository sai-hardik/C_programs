//add 2 complex numbers
#include<stdio.h>
struct complex{
	float real;
	float imag;
};
struct complex sum(const struct complex *c1,const struct complex *c2)
{
	struct complex temp;
	temp.real = c1->real + c2->real;
	temp.imag = c1->imag + c2->imag;
	return temp;
}
int main()
{
	struct complex c1 = {2.2 , 3};
	struct complex c2 = {4.2 , 3.1};
	struct complex result = sum(&c1,&c2);
	printf("The sum is: %.2f + i%.2f \n",result.real,result.imag);
	return 0;
}