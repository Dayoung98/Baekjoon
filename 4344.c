#include <stdio.h>

int main(){
    int test_case,student;
    int ratio = 0;
    double avg = 0;

    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++){
        scanf("%d",&student);
        int score[student];
        for(int j=0;j<student;j++){
            scanf("%d",&score[j]);
            avg += score[j];
        }
        avg = (double)avg/student;
        for(int j=0;j<student;j++){
            if(score[j]>avg){
                ratio ++;
            }
        }
        printf("%.3f%%\n",(double)ratio/student*100);

        avg = 0;
        ratio = 0.0;
    }
}
/*첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고,
 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.*/