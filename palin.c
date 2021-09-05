int isPalin(int n)//definition or implementation
{
	int r = 0;
	int temp = n;
	while(n)//n>0
	{
		r = (r*10)+(n%10);
		n /= 10;
	}
	/*
	if(rev==temp) return 1;
	else return 0;
	*/
	return r == temp;//good programming practice
}