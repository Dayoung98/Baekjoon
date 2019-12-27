#include <stdio.h>
#include <string.h>

int main(){
    int N,sum = 0;
    scanf("%d",&N);
    char str[N];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        sum +=(int)(str[i]-48);
    }
    printf("%d\n",sum);
}
/*N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.*/