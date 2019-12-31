#include <stdio.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    int i, j;
    char str[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int alp[26] = {0};
        scanf("%s", str);
        alp[(int)(str[0] - 97)]++;

        for (j = 1; j < strlen(str); j++)
        {
            if (str[j] != str[j - 1])
            {
                alp[(int)(str[j] - 97)]++;
            }
            if (alp[(int)(str[j] - 97)] > 1)
            {
                break;
            }
        }
        if (j == strlen(str))
        {
            sum++;
        }
    }
    printf("%d\n", sum);
    return 0;
}
/*그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, 
aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.*/