#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
static int ft_len_int(long nb)
{
    int count;
    
    count = 0;
    if(nb <= 0)
        count++;
    while(nb != 0)
    {
        count++;
        nb = nb / 10;
    }
    return count;
}


char *ft_itoa(int n)
{
    char *s;
    int i;
    long num;
    int len_int;

    num = (long)n;
    len_int = ft_len_int(num);
    s = malloc(len_int + 1);
    i = 0;
    if(!s)
        return (NULL);
    if(num < 0)
    {
        s[i++] = '-';
        num = -num;
    }
    if(num == 0)
        s[i++] = '0';
    s[len_int] = '\0';
    while(num)
    {
        s[--len_int] = num % 10 + '0';
        num = num / 10;
    }
    return s;
}

// int main()
// {
//     printf("%s\n",ft_itoa(12345));
// }