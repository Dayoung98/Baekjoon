#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
}

//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.