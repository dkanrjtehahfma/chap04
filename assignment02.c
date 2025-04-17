//
//  main.c
//  chap04
//
//  Created by 채명식 on 4/9/25.
//
/*
 파일명 : chap04-02
  * 내용 : 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오. 화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.
  * 작성자 : 채명식
  * 날짜 : 4/9
  * 버전 : v1.0
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment(void)
{
    double a;
    printf("화씨온도 ?");
    scanf("%lf", &a);
    printf("56.00 F=%.2f C\n", (a-32) * 5/9);
    
}
int main(void)
{
    
    assignment();
    return 0;
}
