#include <stdio.h>

int main(){
    int A,B;

    while(scanf("%d%d",&A,&B) != EOF){
        printf("%d\n",A+B);
    }
}

/*입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

입력의 마지막에는 EOF*/