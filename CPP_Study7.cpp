#include <iostream>
using namespace std;

// const int를 사용할 때, 컴파일러가 최적화를 할 수 있다면, 메모리에 올리지않고 지정한 값으로 대체가 가능하지만,
// 스택이나 다른곳에 두고 주소값을 참조하는 경우에는 변수가 메모리에 올라간다.(메모리 공간을 낭비한다.)
const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

// 숫자를 지정하지 않으면, 첫 값은 0부터 시작한다.
// 그 다음 값들은 이전값 + 1 이 된다.
// 가독성을 높이기위해서 제일 많이 사용한다.
enum ENUM_SRP
{
	ENUM_SCISSORS = 1,
	ENUM_ROCK,
	ENUM_PAPER
};
// #이 붙는다 -> 전처리 지시문
// #include <iostream> <- iostream 이라는 파일을 찾아서 해당 내용을 복붙해라.
// 빌드 단계
// 1) 전처리 2) 컴파일 3) 링크
// 대부분 사용을 지양한다.

#define DEFINE_SCISSORS 1
#define DEFINE_TEST cout << "Hello World" << endl;

int main()
{
	// 실습
	// 별찍기1
	
	/*int input;
	int i, j;

	cout << "숫자를 입력 해주세요." << endl;
	cin >> input;
		
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 별찍기2
	
	/*int input;

	cout << "숫자를 입력 해주세요." << endl;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 별찍기3

	/*int input;

	cout << "숫자를 입력 해주세요." << endl;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < (input - i); j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 구구단
	// 2~9단 전체 출력

	/*for (int a = 2; a < 10; a++)
	{
		for (int b = 1; b < 10; b++)
		{
			cout << a << "*" << b << "=" << a * b << endl;
		}
	}*/

	// 가위바위보
	// 컴퓨터는 랜덤한 값을 낸다.

	// 컴퓨터는 랜덤을 모른다. rand()를 여러번 반복해서 보면 처음은 항상 같은 값이다.
	// srand(time(0)) 과 같이 시드를 설정하여 다른값이 나오도록 유도한다.

	DEFINE_TEST;

	srand(time(0)); // 랜덤 시드 설정

	int input, com;

	int win = 0;
	int total = 0;


	while (true)
	{
		com = (rand() % 3) + 1;


		


		if (total == 0)
		{
			cout << "승률 : 없음" << endl;
		}
		else
		{
			// 정수와 정수의 나눗셈에서는 소수는 생겨날 수 없으므로 소수점 아랫값은 소거된다.
			// 이러한 경우 원하는 소수점값 자리수n 만큼 10^n 을 곱해서 정수의 계산으로 바꿔주거나, 정수 중 하나를 실수로 바꿔준다.
			cout << "승률 : " << ((win * 100) / total) << "%" << endl;
		}

		cin >> input;

		if (input == SCISSORS) // = ENUM_SCISSORS, = DEFINE_SCISSORS
		{
			switch (com)
			{
			case SCISSORS:
				cout << "가위(유저) vs 가위(컴퓨터) 비겼습니다!" << endl;
				break;
			case ROCK:
				cout << "가위(유저) vs 바위(컴퓨터) 졌습니다..." << endl;
				total++;
				break;
			case PAPER:
				cout << "가위(유저) vs 보(컴퓨터) 이겼습니다!!" << endl;
				win++;
				total++;
				break;
			}
		}
		else if (input == ROCK)
		{
			switch (com)
			{
			case SCISSORS:
				cout << "바위(유저) vs 가위(컴퓨터) 이겼습니다!!" << endl;
				win++;
				total++;
				break;
			case ROCK:
				cout << "바위(유저) vs 바위(컴퓨터) 비겼습니다!" << endl;
				break;
			case PAPER:
				cout << "바위(유저) vs 보(컴퓨터) 졌습니다..." << endl;
				total++;
				break;
			}
		}
		else if (input == PAPER)
		{
			switch (com)
			{
			case SCISSORS:
				cout << "보(유저) vs 가위(컴퓨터) 졌습니다..." << endl;
				total++;
				break;
			case ROCK:
				cout << "보(유저) vs 바위(컴퓨터) 이겼습니다!!" << endl;
				win++;
				total++;
				break;
			case PAPER:
				cout << "보(유저) vs 보(컴퓨터) 비겼습니다!" << endl;
				break;
			}
		}
		else
		{
			break;
		}

	}

}