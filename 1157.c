#include <stdio.h>

int main()
{
    char str[1000001];
    int arr[26] = {0};
    scanf("%s", str);
    int max = 0, i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 'Z')
        {
            arr[(int)(str[i] - 65)]++;
            if (arr[max] < arr[(int)(str[i] - 65)])
            {
                max = (int)(str[i] - 65);
            }
        }
        else
        {
            arr[(int)(str[i] - 97)]++;
            if (arr[max] < arr[(int)(str[i] - 97)])
            {
                max = (int)(str[i] - 97);
            }
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (arr[max] == arr[i] && max != i)
        {
            printf("?\n");
            break;
        }
    }
    if (i == 26)
    {
        printf("%c", max + 65);
    }

    return 0;
}