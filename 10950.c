#include <stdio.h>

int main(){
    int n,A,B;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&A,&B);
        printf("%d\n",A+B);
    }
}
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.