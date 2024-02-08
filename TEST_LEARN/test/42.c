#include <unistd.h>
#include <unistd.h>

void number()
{
	int liczba1 = 0;

	while( liczba1 <= 10)
	{
		int liczba = liczba1;
		while(liczba / 2)
			{
				write(1, &liczba ,1);
			}
		}
	}
int	main()
{	
	number();
	return 0;
}




int main(void){
	write(1, "error", 5);
	return 0;
}
