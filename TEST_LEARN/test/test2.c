#include <unistd.h>
#include <stdio.h>

void bigger(int *a, int *b)
{
	if(*a > *b)
	{
		printf("%d", *a);
	}else
	printf("%d", *b);
}
int main()
{
	int x = 5;
	int y = 6;
	
	bigger(&x, &y);
	
	return 0;
}
