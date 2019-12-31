#include <stdio.h>
#include <string.h>

int main()
{
    char str[16];
    int time = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] <= 'C')
        {
            time += 3;
        }
        else if (str[i] <= 'F')
        {
            time += 4;
        }
        else if (str[i] <= 'I')
        {
            time += 5;
        }
        else if (str[i] <= 'L')
        {
            time += 6;
        }
        else if (str[i] <= 'O')
        {
            time += 7;
        }
        else if (str[i] <= 'S')
        {
            time += 8;
        }
        else if (str[i] <= 'V')
        {
            time += 9;
        }
        else
        {
            time += 10;
        }
    }
    printf("%d\n", time);
    return 0;
}