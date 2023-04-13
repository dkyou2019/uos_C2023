#include <stdio.h>
#include "header1.h"  // header1 헤더파일 불러오기
int main(void) {      // main 함수 실행해주기
	asd1();           // 아래로 세 줄은 최대공약수,최소공배수,소수 구하는 함수
	asd2();
	asd3();
	int num1 = 3, num2 = 5;     // 숫자 두 개 임의로 해주고 매개변수가 int로 설정됐기 때문에 인자도 int로 설정
	int result1 = asd4(num1, num2);  // result도 함수에서 int기 때문에 통일 , 아래 최소공배수도 동일
	printf("%d와 %d의 최대공약수는 %d입니다.\n", num1, num2, result1);
	int num3 = 5, num4 = 10;
	int result2 = asd5(num3, num4);
	printf("%d와 %d의 최소공배수는 %d입니다.\n", num3, num4, result2);
	int num5 = 8;             // 판별 원하는 소수 하나 입력 받고
	int result3 = asd6(num5);
	if (result3 == 1) printf("%d은(는) 소수입니다.\n", num5);       // 함수에서 return값이 1이면 소수 메세지, 0이면 소수 아님 메세지
	else if (result3 == 0) printf("%d은(는) 소수가 아닙니다.\n", num5);
	else if (result3 == 2) printf("입력하신 수(%d)는 음수거나, 1은 소수가 아닙니다.\n", num5);  // 1이나 음수를 입력했을 때 안내창
}