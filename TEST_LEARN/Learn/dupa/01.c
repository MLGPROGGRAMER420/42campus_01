#include <unistd.h>

void only_z(char a)
{
    write(1, &a, 1);
}
int main(void)
{
    char x = 'z';
    only_z(x);
    return 0;
}