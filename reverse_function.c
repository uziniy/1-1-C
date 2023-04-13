//
//  main.c
//  리버스함수
//
//  Created by 최우진 on 2023/04/13.
//

#include <stdio.h>
int reverse(int i){
    int j;
    printf("reverse값 : ");
    while(i!=0){
        j = i%10;
        printf("%d",j);
        i /= 10;
    }
    printf("\n");
    return i;
}


int main(int argc, const char * argv[]) {
    int k, result;
    
    printf("양의 정수를 입력하세요 : ");
    scanf("%d",&k);
    
    result = reverse(k);
    
    return 0;
}
