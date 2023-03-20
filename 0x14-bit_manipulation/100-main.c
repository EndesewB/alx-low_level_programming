#include <stdio.h>
int get_endianness(void)
{
    int x;
    char *y;

    x = 1;
    y = (char *)&x;
    return (*y);
}

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
