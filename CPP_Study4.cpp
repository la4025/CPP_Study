#include <iostream>
using namespace std;

// 데이터 연산 유의사항

// 1) 변수의 유효범위

// 전역변수
int hp = 100;

// 스택 내부의 변수
// { } 중괄호의 범위가 생존 범위이다.
// 같은 이름을 두번 사용할 때 문제가 발생한다.

// 전역변수와 지역변수가 같은 이름일 경우 지역변수가 우선수위에 있다.


int main()
{
	int hp = 20;
	cout << hp << endl;

}