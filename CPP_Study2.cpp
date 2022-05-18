#include <iostream>
using namespace std;

// 문자와 문자열
// bool은 그냥 정수지만, 참/거짓을 나타내기 위해 사용한다.
// 사실 char도 마찬가지, 그냥 정수지만 '문자' 의미를 나타내기 위해 사용

// char : 알파벳 / 숫자 문자를 나타낸다.
// wchar_t : 유니코드 문자를 나타낸다.

// ASCII (American Standard Code for Information Interchange)

// '문자'의 의미로 작은 따옴표 ('') 사용
char ch = 'a';
char ch2 = '1';
char ch3 = 'a' + 1;

// 국제화 시대에는 영어만으로 서비스 할 수 있음
// 전 세계 모든 문자에 대해 유일 코드를 부여한 것이 유니코드 (unicode)
// 참고) 유니코드에서 가장 많은 번호를 차지하는게 한국어/중국어

// 유니코드는 표기 방식이 여러가지가 있는데 대표적으로 UTF-8, UTF-16 이 있다.
// UTF-8
// 알파벳, 숫자 1바이트 (ASCII코드 와 동일한 번호)
// 유럽 지역의 문자는 2바이트
// 한글, 한자 등 동아시안 언어 3바이트

// UTF-16
// 알파벳, 숫자, 한글, 한자 등 거의 대부분 문자 2바이트
// 예외적인 고대문자만 4바이트 (사실상 무시해도 됨)

wchar_t wch = 0xc548; // L'안';

// Escape Sequence
// 표기하기 애매한 애들을 표현
// \0 = ASCII 0번 = NULL
// \t = ASCII 9번 = Tab
// \n = ASCII 10번 = LineFeed (한줄 아래로)
// \r = ASCII 13번 = CarriageReturn (커서를 맨 처음으로 이동)
// 엔터를 입력하는 것은 사실상 \n\r 과 같다.


// 문자열
// 문자들이 열을 지어서 모여 있는 것 (문자 배열 같은 느낌)
// 정수 = 1~8바이트의 고정길이로 데이터를 저장
// 문자열은 NULL값(\0)이 들어가 있으면 끝으로 판정한다.

// data 영역은 처음에 0으로 초기화가 되어있기 때문에 '\0'(NULL)값을 넣어주지 않아도 원하는 문자열을 받을 수 있다.
// char str[] = { 'h', 'e', 'l', 'l', 'o' };
char str2[] = "Hello World";

int main()
{
	cout << ch << endl;
	cout << ch2 << endl;
	cout << ch3 << endl;

	//cout은 char 전용

	wcout.imbue(locale("kor"));
	wcout << wch << endl;

	// stack 영역에서는 끝에 '\0'(NULL)값을 넣어줘야지만 끝으로 지정이된다.
	// 그렇지 않을 경우 원하는 문자열 외에 쓰레기값을 더 받는다.
	char str[] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	cout << str << endl;
	cout << str2 << endl;
}