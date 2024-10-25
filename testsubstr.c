#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *substr;
    size_t  i;
    size_t  len_str;

    i = 0;
    len_str = ft_strlen(s);
    if(!s)
        return (NULL);
    if(start >= len_str)
        return ("");
    if (len > len_str - start)
        len = len_str - start;
    substr = malloc(len + 1);
    if(!substr)
        return (NULL);
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);

    
}
#include <stdio.h>
int main() {
    char *str = "marouanebrouk";
    printf("Original string: %s\n", str);
    
    // Normal case
    printf("Substring: %s\n", ft_substr(str, 8, 5)); // Output: "brouk"

    // Out-of-bounds start index
    printf("Out-of-bounds start: %s\n", ft_substr(str, 50, 5)); // Output: ""
    
    // Large len beyond string length
    printf("Large len: %s\n", ft_substr(str, 5, 20)); // Output: "anebrouk"

    // Zero length
    printf("Zero len: %s\n", ft_substr(str, 5, 0)); // Output: ""
    
    return 0;
}