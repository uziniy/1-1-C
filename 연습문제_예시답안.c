//
//  main.c
//  while_practice
//
//  Created by 최우진 on 2023/04/03.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //1번
    /*int a, b;
    
    printf("a : ");
    scanf("%d",&a);
    
    printf("b : ");
    scanf("%d",&b);
    
    if(a>b){
        printf("%d",a);
    }
    else if(a<b){
    printf ("%d" ,b) ;
    }
    else{
        printf("a와 b가 같습니다. ");
    }*/
    
    //2번
    /*int score;
    
    printf("당신의 점수를 입력하세요 : ");
    scanf("%d",&score);
    
    if(score>=90){
        printf("A학점 입니다.");
    }
    else if (score>=80){
        printf("B학점 입니다.");
    }
    else if (score>=70){
        printf("C학점 입니다.");
    }
    else if (score>=60){
        printf("D학점 입니다.");
    }
    else{
        printf("F학점 입니다. ");
    }*/
        
    //3번
    
    //sol 1)
    /*int month;
        
        printf("1~12월 중 마지막 날이 궁금한 월을 선택하세요 : ");
        scanf("%d",&month);
        
        switch(month){
            case 1:
                printf("1월의 마지막 달은 31일 입니다.");
                break;
            case 2:
                printf("2월의 마지막 달은 28일 입니다.");
                break;
            case 3:
                printf("3월의 마지막 달은 31일 입니다.");
                break;
            case 4:
                printf("4월의 마지막 달은 30일 입니다.");
                break;
            case 5:
                printf("5월의 마지막 달은 31일 입니다.");
                break;
            case 6:
                printf("6월의 마지막 달은 30일 입니다.");
                break;
            case 7:
                printf("7월의 마지막 달은 31일 입니다.");
                break;
            case 8:
                printf("8월의 마지막 달은 31일 입니다.");
                break;
            case 9:
                printf("9월의 마지막 달은 30일 입니다.");
                break;
            case 10:
                printf("10월의 마지막 달은 31일 입니다.");
                break;
            case 11:
                printf("11월의 마지막 달은 30일 입니다.");
                break;
            default:
                printf("12월의 마지막 달은 31일 입니다.");
        }*/
    
    //sol 2)
    /*int mon,day;
    
    printf("1~12월 중 마지막 날이 궁금한 월을 선택하세요 : ");
    scanf("%d",&mon);
    
    switch(mon){
        case 2:
            day = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        default:
            day = 31;
            break;
    }
    printf("%d월의 마지막 날은 %d일 입니다.", mon, day);*/
    
    //4번
    /*int sub1,sub2,sub3,avg;
        
        printf("첫 번째 과목의 성적을 입력하세요 : ");
        scanf("%d",&sub1);
        
        printf("두 번째 과목의 성적을 입력하세요 : ");
        scanf("%d",&sub2);
        
        printf("세 번째 과목의 성적을 입력하세요 : ");
        scanf("%d",&sub3);
        
        avg = (sub1+sub2+sub3)/3;
        
        switch(avg/10){
            case 10:
            case 9:
                printf("성적의 평균은 %d이고 A학점입니다.\n",avg);
                break;
            case 8:
                printf("성적의 평균은 %d이고 B학점입니다.\n",avg);
                break;
            case 7:
                printf("성적의 평균은 %d이고 C학점입니다.\n",avg);
                break;
            case 6:
                printf("성적의 평균은 %d이고 D학점입니다.\n",avg);
                break;
            default:
                printf("성적의 평균은 %d이고 F학점입니다.\n",avg);
        }
        if(avg>=60)
            if(sub1>=40 && sub2>=40 && sub3>=40)
                printf("Pass입니다.\n");
            else
                printf("Fail입니다.\n");
        else
            printf("Fail입니다.\n");*/
    
    //5번
    /*int num,i,fac=1;
        
        printf("어떤 수의 factorial값을 구하시겠습니까?");
        scanf("%d",&num);
        
        for(i=1;i<=num;i++){
            fac *= i;
            
        }
        printf("%d! 값은 %d입니다.",num,fac);*/
    
    //6번
    /*int i,num,sum=0;
        
        printf("수를 입력하세요 : ");
        scanf("%d",&num);
        
        for(i=1;i<=num;i++){
            if(i%2==0){
                sum += i;
            }
        }
        printf("1~%d중 짝수들의 합은 %d입니다.",num,sum);*/
    
    //7번
    /*int i=0, num, sum=0;
    printf("수를 입력하세요 : ");
    scanf ("%d",&num);
    while (i<=num) {
      sum += i;
        i++;
    }
    printf("1~%d까지의 합은 %d입니다. ", num, sum);*/
    
    //8번
    /*int i=1,num,aster=1;
        
        printf("1~9 사이에 숫자를 입력하세요 : ");
        scanf("%d",&num);
        
        while (i<=9) {
            aster = i*num;
            printf("%d*%d=%d\n",num,i,aster);
            i++;
        }*/
    
    //9번
    /*int chose;
    do{
        printf("1.하와이\n2.파리\n3.두바이\n4.뉴욕");
        printf("가고 싶은 여행지를 선택하세요 : ");
        scanf("%d",&chose);
    }while(chose<1||chose>4);
    
    switch(chose){
        case 1:
            printf("하와이를 선택하셨습니다.");
        case 2:
            printf("파리를 선택하셨습니다.");
        case 3:
            printf("두바이를 선택하셨습니다.");
        default:
            printf("뉴욕를 선택하셨습니다.");
    }*/
}

//그냥 내가 푼거니깐 정답이 아니고 이렇게도 풀 수 있다~ 이런거니깐 코드가 달라도 구현이 되고 결과가 똑같이 나왔다면 맞는 코드인거임. 나보다 깔끔하고 이쁘게 짰을 수도 있으니깐 너무 나랑 똑같이 짜려고 안해도됨.

