#include <stdio.h>

int main(){
    int N,num;
    int max =-1000000, min = 1000000;
    scanf("%d",&N);
    while(N>0){
        scanf("%d",&num);
        if(max<num){
            max = num;
        }
        if(min>num){
            min = num;
        }
        N--;
    }
    printf("%d %d",min,max);
}
//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.