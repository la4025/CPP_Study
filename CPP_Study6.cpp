#include <iostream>
using namespace std;

// 반복문
// 데이터를 메모리에 할당하고 가공하고 방법에 대해 알아봄
// 가공한 데이터를 이용해서 무엇인가를 하고 싶다면?


int main()
{
	// while문
	// 한 번만 실행하는게 아니라, 특정 조건까지 계속 반복해야 하는 상황
	// ex) 게임을 끌때까지 계속 게임을 실행하라
	// ex) 목적지에 도달할때까지 계속 이동하라


	// while (조건식)
	// {
	// 	명령문
	// }

	int count = 0;

	while (count < 5)
	{
		cout << "Hello World" << endl;
		count++;
	}

	// do - while문
	// do 안의 명령문을 실행한 뒤 while문의 조건을 확인한다.
	// 잘쓰이지는 않으니 이런게 있다는 것만 알아두자.

	do
	{
		cout << "Hello World" << endl;
	} while (false);


	// for문
	// 사실상 제일 많이 쓰는 반복문이다.

	for (int count = 0; count < 5; count++)
	{
		cout << "Hello World" << endl;
	}


	// 반복문 제어 break, continue

	// break
	// 해당 반복문을 끝낸다.

	int round = 1;
	int hp = 100;
	int damage = 10;

	//무한 루프 : 전투 시작
	while (true)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0; // 음수 체력을 0으로 보정

		// 시스템 메시지
		cout << "Round " << round << " 몬스터 체력 " << hp << endl;

		if (hp == 0)
		{
			cout << "몬스터 처치!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}

		round++;
	}

	// continue
	// 원하지 않는 명령문을 스킵한다.

	// 1~10 사이의 홀수만 출력
	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count & 2) == 0);

		if (isEven)
			continue;

		cout << count << endl;

	}

}