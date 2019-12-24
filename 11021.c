#include <stdio.h>

int main(){
    int T,A,B;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d%d",&A,&B);
        printf("Case #%d: %d\n",i+1,A+B);
    }
    return 0;
}
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.