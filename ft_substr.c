#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    unsigned int i;

    if(start > (unsigned int)ft_strlen(s))
        return NULL;
    
    if(len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    
    substr = ft_calloc(len + 1, sizeof(char));
    if(!substr)
        return (NULL);
    i = 0;

    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}