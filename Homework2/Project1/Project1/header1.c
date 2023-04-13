#include <stdio.h>
void asd1(void) {                     // 파라미터 없는 void함수 생성 (최대공약수 구하는 함수)
	int num1, num2;                   // 숫자1,2를 정수로 받음
	printf("최대공약수 구하기\n");
	printf("숫자 1을 입력하세요.:");
	scanf_s("%d", &num1);
	printf("숫자 2를 입력하세요.:");
	scanf_s(" %d", &num2);         // 안내문과 scanf로 값을 받고, 두 번째 경우에는 엔터 때문에 값이 10이 인식될 수 있으므로 띄어쓰기
	int result = 1;   // 루프 줄이기 위해서 result = 1 부터 시작
	for (int i = 2; i <= (num1 < num2 ? num1 : num2); i++) {           // i값을 2부터 돌려가며 두 수를 i로 나눠주며 값마다 if문을 통과하면 result에 저장되게 함
		if (num1 % i == 0 && num2 % i == 0) {              // 어차피 result 값은 가장 마지막 수로 저장될 것이기 때문에 상관없음
			result = i;
		}
	}
	printf("%d와 %d의 최대공약수는 %d입니다.\n", num1, num2, result);     // 결과 반환
}
void asd2(void) {                     // 파라미터 없는 void함수 생성 (최소공배수 구하는 함수)
	int num1, num2;                   // 숫자1,2를 정수로 받음
	printf("최소공배수 구하기\n");
	printf("숫자 1을 입력하세요.:");
	scanf_s("%d", &num1);
	printf("숫자 2를 입력하세요.:");
	scanf_s(" %d", &num2);            // 안내문과 scanf로 값을 받고, 두 번째 경우에는 엔터 때문에 값이 10이 인식될 수 있으므로 띄어쓰기
	int result = 0;        
	for (int i = num1 * num2; i > 1; i--) {           // 최소공배수는 아무리 커도 두 수의 곱이니까 두 수의 곱부터 1씩 내려가며 최소공배수 찾기 
		if (i % num1 == 0 && i % num2 == 0) {      // 어차피 result 값은 가장 마지막 수로 저장될 것이기 때문에 상관없음
			result = i;
		}
	}
	printf("%d와 %d의 최소공배수는 %d입니다.\n", num1, num2, result);     // 결과 반환
}
void asd3(void) {                     // 파라미터 없는 void함수 생성 (소수 판별 함수)
	int num;                   // 숫자를 정수로 받음
	printf("소수 판별 함수\n");
	printf("판별하고자 하는 숫자를 입력하세요.:");
	scanf_s("%d", &num);            // 안내문과 scanf로 값을 받음
	int result = 0;
	if (num > 1) {
		for (int i = num; i > 1; i--) {           // 자기 자신으로부터 1씩 내려가며 나눔 (2까지, 1은 모든 수로 나눌 수 있으니까)
			if (num % i == 0) {      // 어차피 result 값은 가장 마지막 수로 저장될 것이기 때문에 상관없음
				result = i;
			}
		}
		if (result == num) printf("%d은(는) 소수입니다.\n", num);  // result가 num과 일치하면 1과 자기 자신으로밖에 나눠지지 않기 때문에 소수
		else if (result != num) printf("%d은(는) 소수가 아닙니다.\n", num); //결과 반환
	}
	else printf("입력하신 수(%d)는 음수거나, 1은 소수가 아닙니다.\n",num);  // 1이나 음수를 입력했을 때 안내창
}
int asd4(int a, int b) {
	int result = 1;                         // 정수형 자료형을 파라미터로 하는 최대공약수 구하는 함수
	for (int i = 2; i <= (a < b ? a : b); i++) {        // asd1 함수와 거의 비슷하고 파라미터가 있는지 없는지 정도 차이가 있음 (설명 생략)
		if (a % i == 0 && b % i == 0) {
			result = i;
		}
	}
	return result;       // 최대공약수 결과값으로 리턴해줌		
}
int asd5(int a, int b) {
	int result = 0;                         // 정수형 자료형을 파라미터로 하는 최소공배수 구하는 함수
	for (int i = a * b; i > 1; i--) {        // asd2 함수와 거의 비슷하고 파라미터가 있는지 없는지 정도 차이가 있음 (설명 생략)
		if (i % a == 0 && i % b == 0) {
			result = i;
		}
	}
	return result;       // 최소공배수 결과값으로 리턴해줌
}
int asd6(int a) {
	int result = 0;
	int point = 0;
	if (a > 1) {
		for (int i = a; i > 1; i--) {           // 자기 자신으로부터 1씩 내려가며 나눔 (2까지, 1은 모든 수로 나눌 수 있으니까)
			if (a % i == 0) {      // 어차피 result 값은 가장 마지막 수로 저장될 것이기 때문에 상관없음
				result = i;
			}
		}
	}
	point = (result == a ? 1 : 2);    // 소수면 1 반환, 아니면 2 반환, 음수나 1이면 0 반환
	return point;
}
