
int mystrlen(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}