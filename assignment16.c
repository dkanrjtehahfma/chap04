//
//  main.c
//  chap0......4
//
//  Created by 채명식 on 4/15/25.
//


/*파일명 : chap4-16
 * 내용 : 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue에 8비트씩을 사용해서 색상을 표현하므로 24비트
 트루컬러라고 한다. 컴퓨터 시스템에서는 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 샐상 정보를 저장하고
 최상위 바이트는 사용하지 않고 0으로 채운다. 0~255 사이의 값을 red, green, blue의 순서로 색상 정보를 저장하고 최상위 바이트는
 사용하지 않고 0으로 채운다. 0~255 사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을
 작성하시오. RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
 * 작성자 : 채명식
 * 날짜 : 4/10
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment16(void)
{
    int assignment = 0;
    int r, g, b;
    
    printf("red?");
    scanf("%d", &r);
    r %= 255;
    
    
    printf("green?");
    scanf("%d", &g);
    g %= 255;
    
    
    printf("blue?");
    scanf("%d", &b);
    b %= 255;
    
    assignment += r * 255 * 255;
    assignment += g * 255;
    assignment += b;
    
    printf("RGB 트루컬러: %06X", assignment);
    return;
    
}
int main(void)
{
    assignment16();
    return 0;
}
