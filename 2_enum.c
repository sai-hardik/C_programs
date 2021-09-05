//We can assign values to some symbol names in any order. 
//All unassigned names get value as value of previous name plus one.
#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};
 
int main()
{
	printf("enter the value for monday\n");
	//scanf("%d",&monday);		// error: not legal
	// Memory not allocated for constants in enum. 
	//So ampersand(&) can't be used with those. 
	//Also value already assigned to monday that cant be changed
	
    printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);
    return 0;
}