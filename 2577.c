#include <stdio.h>

int main(){
    int A,B,C;
    int arr[10]={0};
    int result = 0;
    scanf("%d %d %d",&A,&B,&C);
    A = A*B*C;
    B = 10;
    C = 1;
    while(1){
        result = A;
        if(result % B == A){
            result = result % B/C;
            arr[result] ++;
            break;
        }
        result = result % B/C;
        arr[result] ++;
        B = B*10;
        C = C*10;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
/*세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 

A × B × C = 150 × 266 × 427 = 17037300 이 되고, 

계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.*/