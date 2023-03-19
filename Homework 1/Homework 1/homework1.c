#include <stdio.h>
int main(void) {
	char name1[15]; // 이름을 scanf로 받기 위해 변수 생성(최대 4글자 고려하면 15면 적당)
	int name2; // 학번을 받기 위해 변수 생성  문자는 char, 정수는 int
	int name3; // 생년월일을 받기 위해 변수 생성
	char name4[50]; // 학과명을 받기 위해 변수 생성(학과명이 얼마나 길지 모르니 넉넉하게)
	printf("이름을 입력하세요 : "); // 이름을 입력받기 위해 printf 사용
	scanf_s("%s", name1, sizeof(name1));  // 문자로 받으니 %s, %s는 char name1에 대응
	printf("학번을 입력하세요 : "); // 학번을 받기 위해 printf 사용
	scanf_s("%d", &name2); // 정수로 받을 것이니 %d, 숫자 받을 땐 &붙여줌
	printf("생년월일을 입력하세요 : "); // 생년원일을 받기 위해 printf 사용
	scanf_s("%d", &name3); // 정수로 받을 것이니 %d, 숫자 받을 땐 &붙여줌
	printf("학과명을 입력하세요 : "); // 학과명을 받기 위해 printf 사용
	scanf_s("%s", name4, sizeof(name4)); // 문자로 받으니 %s, %s는 char name4에 대응
	printf("- 이름 : %s\n", name1); // 입력받은 이름 출력, %s는 문자열 받고, 대응하는 name1, \n은 줄바꾸기
	printf("- 학번 : %d\n", name2); // 입력받은 학번 출력, %d는 정수를 받고, 대응하는 name2, \n은 줄바꾸기
	printf("- 생년월일 : %d\n", name3); // 입력받은 생년월일 출력, \n은 줄바꾸기
	printf("- 학과명 : %s\n", name4); // 입력받은 학과명 출력, \n은 줄바꾸기
}