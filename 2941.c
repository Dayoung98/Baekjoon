#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int sum = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '=' || str[i + 1] == '-')
            {
                i = i + 1;
            }
        }
        else if (str[i] == 'd')
        {
            if (str[i + 1] == '-')
            {
                i += 1;
            }
            else if (str[i + 1] == 'z' && str[i + 2] == '=')
            {
                i += 2;
            }
        }
        else if (str[i] == 'l' || str[i] == 'n')
        {
            if (str[i + 1] == 'j')
            {
                i += 1;
            }
        }
        else if (str[i] == 's' || str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                i += 1;
            }
        }
        sum++;
    }
    printf("%d\n", sum);
    return 0;
}