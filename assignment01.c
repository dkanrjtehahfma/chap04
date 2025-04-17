/*
파일명 : 실습c.
chap 04 - 01 문제 - 질량과 속력을 입력받아 운동에너지 출력하는 프로그램
작성자 : 채명식
날짜 : 4/9
버전 : v0.1
*/

#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);

int main(void)
{
    int r= assignment0401();
    return r;

}
/*
 함수명 : assignmnet0401()
 기능(책임) : 질량 출력을 입력받음. 운동에너지를 계산하도록 함수호출. 그 결과를 콘솔에 출력


*/

int assignment0401(void)

{
    // 1 질량 속도입력 받아 저장
    double w = 0.0;  // 질량 kg
    double v = 0.0; // 속력 m/s
    printf("질량 속도를 입력해주세요");
    scanf("%lf %lf",&w, &v);
    

    // 2 운동에너지 계산
    double result = getMotionEnergy(w, v);

    // 3 계산된 운동에너지 출력
    printf(" 질량=%.2f kg 속력%.2f m/s 의 운동에너지는 %.2f 입니다", w, v, result);
    
    
    return 0;
    
}
/*
 함수면 getMotionEnergy()
 기능(책임): 질량, 솔력을 입력받아 운동에너지를 계산하여 변환
 입력 : 질량(kg). 속력(m/s)
 번환 : 운동에너지
 */
double getMotionEnergy(double weight, double velocity)
{
    double energy = 0.0;
    
    energy = 1.0 / 2.0 * weight * velocity * velocity;


    return energy;
}

