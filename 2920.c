#include <stdio.h>

int main(){
    int arr[8];
    int result=0;
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    int N = 0;
    while(N<7){
        if(arr[N]+1 == arr[N+1]){
            result = 0;
        }
        else if(arr[N]-1 == arr[N+1]){
            result = 1;
        }
        else{
            result = 3;
            break;
        }
        N++;
    }

    if(result == 0){
        printf("ascending");
    }
    else if(result == 1){
        printf("descending");
    }
    else{
        printf("mixed");
    }
    return 0;
}
/*다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. 
c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.*/