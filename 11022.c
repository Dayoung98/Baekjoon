#include <stdio.h>

int main(){
    int T,A,B;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d%d",&A,&B);
        printf("Case #%d: %d + %d = %d\n",i+1,A,B,A+B);
    }
    return 0;
}
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.