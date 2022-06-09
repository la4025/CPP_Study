#include <iostream>
using namespace std;

// 함수 ( 프로시저, 메소드, 루틴)

/*
input 으로 무엇을 받고, output으로 무엇을 뱉을지 정해준다.

반환타입 함수이름([인자타입 매개변수])
{
	함수내용

	return ***;
}
*/

// Hello World를 콘솔에 출력하는 함수를 만들어 보자!
// input : 없음 / output : 없음
// 타입 : int float double char ~~
// 반환 혹은 입력받을 타입이 없을땐 void

void PrintHelloWorld()
{
	cout << "Hello World" << endl;

	return;
}

// 정수를 입력(함수) 받아서, 콘솔에 출력하는 함수를 만들어 보자!
// input : int / output : 없음

void PrintNumber(int number)
{
	cout << "넘겨주신 숫자는 " << number << " 입니다." << endl;
}

// 2를 곱하고 결과물을 뱉는 함수를 만들어 보자!
// input : int / output : int

int MultiplyBy2(int a)
{
	int b = a * 2;
	return b;
}

// 두 숫자를 곱해서 결과물을 뱉는 함수를 만들어 보자!
// input : int, int / output : int

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}



// 함수 내부에서 선언해준 매개변수는 함수 자체 내에서만 적용된다.


int main()
{
	int result = MultiplyBy2(3);
	
	int a = 3;
	int b = 5;
	int result2 = MultiplyBy(b, a);

	PrintHelloWorld();
	PrintNumber(2);
	PrintNumber(result);
	PrintNumber(result2);
}