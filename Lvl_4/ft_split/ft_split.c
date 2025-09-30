#include <stdlib.h>
#include <stdio.h>

char ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;

    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int start = 0;
    int end = 0;
    int wc = 0;
    char **out;

    if (!str)
        return NULL;
    
    while (str[i])
    {
        while (str[i] == " " || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
            wc++;
        while (str[i] != " " && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    out = (char **)malloc(sizeof(char *) * (wc + 1));

    while (str[i])
    {
        while (str[i] == " " || str[i] == '\t' || str[i] == '\n')
            i++;
        start = i;
        while (str[i] != " " && str[i] != '\t' && str[i] != '\n')
            i++;
        end = i;
        int len = end - start;
        if (end > start)
        {
            out[j] = (char *)malloc(sizeof(char) * (len + 1));
            ft_strncpy(out[j], &str[start], len);
            j++;
        }
    }
    out[j] = NULL;
    return(out);
}