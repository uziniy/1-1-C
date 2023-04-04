//
//  main.c
//  addnew
//
//  Created by 최우진 on 2023/04/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //1번
//    for (int i = 1; i <= 10; i++) {
//        if (i % 2 != 0) {
//            printf("%d\n", i);
//        }
//    }
    
    //2번
//    for (int i = 1; i <= 100; i++) {
//            if (i % 3 == 0 && i % 5 == 0) {
//                printf("FizzBuzz\n");
//            } else if (i % 3 == 0) {
//                printf("Fizz\n");
//            } else if (i % 5 == 0) {
//                printf("Buzz\n");
//            } else {
//                printf("%d\n", i);
//            }
//        }
    
    //3번
//    int num;
//    int is_prime = 1;
//
//    printf("숫자를 입력하세요: ");
//    scanf("%d", &num);
//
//    for (int i = 2; i < num; i++) {
//        if (num % i == 0) {
//            is_prime = 0;
//            break;
//        }
//    }
//
//    if (is_prime == 1) {
//        printf("%d는 소수입니다.\n", num);
//    } else {
//        printf("%d는 소수가 아닙니다.\n", num);
//    }
    
    //4번
//    for (int i = 1; i <= 100; i++) {
//            if (i % 3 == 0 && i % 5 != 0) {
//                printf("%d\n", i);
//            }
//        }
    
    //5번
//    int num, min, max;
//        printf("5개의 숫자를 입력하세요: ");
//        scanf("%d", &num);
//        min = num;
//        max = num;
//
//        for (int i = 1; i < 5; i++) {
//            scanf("%d", &num);
//            if (num < min) {
//                min = num;
//            }
//            if (num > max) {
//                max = num;
//            }
//        }
//
//        printf("최소값: %d\n", min);
//        printf("최대값: %d\n", max);
    
    //6번
//        for (int i = 1; i <= 9; i++) {
//            for (int j = 1; j <= 9; j++) {
//                printf("%d x %d = %d\n", i, j, i*j);
//            }
//            printf("\n");
//        }
    
    //7번
//    int num;
//        printf("숫자를 입력하세요: ");
//        scanf("%d", &num);
//
//        switch (num % 2) {
//            case 0:
//                printf("짝수입니다.\n");
//                break;
//            case 1:
//                printf("홀수입니다.\n");
//                break;
//        }
    
    //8번
//    int num;
//    printf("숫자를 입력하세요: ");
//    scanf("%d", &num);
//
//    switch (num) {
//        case 1:
//            printf("입력하신 숫자는 1입니다.\n");
//            break;
//        case 2:
//            printf("입력하신 숫자는 2입니다.\n");
//            break;
//        case 3:
//            printf("입력하신 숫자는 3입니다.\n");
//            break;
//        default:
//            printf("입력하신 숫자는 1, 2, 3 중 하나가 아닙니다.\n");
//            break;
//    }
    
    //9번
//    int i = 1;
//    while (i <= 10) {
//        printf("%d ", i);
//        i++;
//    }
    
    //10번
//    int i = 1, sum = 0;
//        while (i <= 100) {
//            if (i % 3 == 0 || i % 4 == 0) {
//                sum += i;
//            }
//            i++;
//        }
//
//        printf("1부터 100까지의 정수 중 3의 배수이거나 4의 배수인 수들의 합 : %d\n", sum);
    
    //11번
    int num;
        printf("정수를 입력하세요 : ");
        scanf("%d", &num);

        do {
            printf("%d ", num);
            num--;
        } while (num > 0);
    printf("\n");
    
    return 0;
}
