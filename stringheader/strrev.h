#include <string.h>

void my_strrev(char str[])
{
    int i = 0, j, l = strlen(str);
    j = l = (l - 1);
    char temp;
    while (l > (j / 2))
    {
        temp = str[i];
        str[i] = str[l];
        str[l] = temp;
        i++;
        l--;
    }
}