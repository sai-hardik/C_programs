//must demo
///All enum constants must be unique in their scope. 
For example, the following program fails in compilation.
// this code results in Error: 
//Redeclaration of enumerator 'def'
#include<stdio.h>
enum example1  {def, cdt};
enum example2 {abc, def};
 
int main()  
{ 
	enum example1 e;
	return 0;
	
}