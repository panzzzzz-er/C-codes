/*
Appeared in Accenture Off Campus hiring test, 9-5-2024.

Take a string input, count the number of uppercase and lowercase letters in the string.
If number of uppercase letters > lowercase letter, print the entire string in uppercase and vice versa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *fix_case(const char str[])
{
    int u = 0, l = 0, i = 0;

    while (str[i] != '\0')
    {
        if (isupper(str[i]))
        {
            u++;
        }
        else if (islower(str[i]))
        {
            l++;
        }
        i++;
    }

    char *modified_str = (char *)malloc((i + 1) * sizeof(char));

    if (u > l)
    {
        i = 0;
        while (str[i] != '\0')
        {
            modified_str[i] = toupper(str[i]);
            i++;
        }
    }
    else if (l > u)
    {
        i = 0;
        while (str[i] != '\0')
        {
            modified_str[i] = tolower(str[i]);
            i++;
        }
    }
    else
    {
        i = 0;
        while (str[i] != '\0')
        {
            modified_str[i] = str[i];
            i++;
        }
    }

    return modified_str;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *modified_str = fix_case(str);
    printf("%s\n", modified_str);
    return 0;
}
