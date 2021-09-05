//optional
//Enumerated Types are Not Strings : 
//Do not use strcmp with enumerated types.
//Two enum symbols/names can have same value. 
//For example, in the following C program both ‘Failed’ and ‘Freezed’ have same value 0.

#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};
 
int main()
{
   printf("%d, %d, %d", Working, Failed, Freezed);	
   // associated values are printed
   return 0;
}

