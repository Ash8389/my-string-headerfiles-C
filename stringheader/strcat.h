#include "strlen.h"

void mystrcat(char str1[], char str2[])
{
    int i = 0, l;
    l = mystrlen(str1);
    while (str2[i] != '\0')
    {
        str1[l] = str2[i];
        i++;
        l++;
    }
    str1[l] = '\0';
}