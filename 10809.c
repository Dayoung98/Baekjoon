#include <stdio.h>
#include <string.h>

int main(){
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i] = -1;
    }
       
    int num = 0;
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        num = (int)(str[i]-97);
        if(arr[num] ==-1){
            arr[num]=i;
        }
    }
    for(int i=0;i<26;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
/*알파벳 소문자로만 이루어진 단어 S가 주어진다. 
각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.*/