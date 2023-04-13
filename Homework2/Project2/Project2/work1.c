#include <stdio.h>

// 재귀함수를 정의하였음
void change(int num, int num2) {    // num은 받을 수, num2는 변환할 진법
    char c;  //나머지를 저장할 변수
    if (num == 0) {      // num이 0이면 종료함
        return;
    }
    else { // 0이 아니면 아래 실행
        change(num / num2, num2);   // 자신을 호출하며 num을 num2로 나눈 몫을 인자로 전달해줌
        int remain = num % num2;    // 나머지
        if (remain < 10) {          // 나머지가 10 미만이면 '0'부터 나머지 더한 값이 해당 숫자로 문자표현됨
            c = remain + '0';
        }
        else {                     // 10 이상이면 'A'부터 A,B,C,D...차례대로 해당 숫자가 문자로 표현
            c = remain - 10 + 'A';
        }
        printf("%c", c);  // 문자를 출력
    }
}

int main() {  // 메인함수 불러옴
    int num, num2;  // 위 함수랑 같은 형태로 값 받아줌
    printf("변환할 10진수 입력 : ");
    scanf_s("%d", &num);
    printf("변환할 진법 입력 (2~16): ");
    scanf_s(" %d", &num2);          // 띄어쓰고 %ㅇ 엔터가 10으로 들어가는 거 방지
    printf("%d의 %d진수 변환 값: ", num, num2);
    change(num, num2);  //함수값이 값으로 출력
    printf("\n");
    return 0;
}