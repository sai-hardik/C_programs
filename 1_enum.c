#include<stdio.h>
#include<string.h>
//FOR DAYS OF THE WEEK
enum days
{
	mon=10,tue,wed,thu='r',fri,sat,sun
	//mon=10.5,tue="tuesday",wed,thu=10,fri,sat,sun//only intergral constants
	//start=1,stop=0,pause=0
	//symbol mon gets the val 0
	//next symbol gets the value of prev+1
	//no memory allocated for these constants
	//available in this file to use directly
	//enum can have the same value
};//mandatory semicolon

int main()
{
	int n;
	enum days d;	//memory allocated for enum
	printf("Size of d: %lu\n",sizeof(d));
	n = thu;
	//mon = 1;//no memory allocated
	//scanf("%d",&tue);//no memory: cannot use (&) sign
	printf("Value of thu: %d\n",n);
	printf("Value of fri: %d\n",fri);
	//printf("Value of fri and thu: %d\n",strcmp(fri,thu));
	return 0;
}
