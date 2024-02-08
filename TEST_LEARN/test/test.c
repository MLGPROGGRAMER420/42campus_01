#include <unistd.h>
#include <stdio.h>

void pointer(int *a, int *b)
{
	int sum = *a + *b;
	printf("%d",sum);
}
int main()
{
	int x = 5;
	int y = 6;
	
	pointer(&x, &y);
	
	return 0;
} 
