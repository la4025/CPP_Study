#include <iostream>
using namespace std;

int main()
{
	// �ǽ�
	// �����1
	
	/*int input;
	int i, j;

	cout << "���ڸ� �Է� ���ּ���." << endl;
	cin >> input;

	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// �����2
	
	/*int input;

	cout << "���ڸ� �Է� ���ּ���." << endl;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// �����3

	/*int input;

	cout << "���ڸ� �Է� ���ּ���." << endl;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < (input - i); j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// ������
	// 2~9�� ��ü ���

	/*for (int a = 2; a < 10; a++)
	{
		for (int b = 1; b < 10; b++)
		{
			cout << a << "*" << b << "=" << a * b << endl;
		}
	}*/

	// ����������
	// ��ǻ�ʹ� ������ ���� ����.

	// ��ǻ�ʹ� ������ �𸥴�. rand()�� ������ �ݺ��ؼ� ���� ó���� �׻� ���� ���̴�.
	// srand(time(0)) �� ���� �õ带 �����Ͽ� �ٸ����� �������� �����Ѵ�.

	srand(time(0)); // ���� �õ� ����

	int input, com;

	int win = 0;
	int total = 0;


	while (true)
	{
		com = (rand() % 3) + 1;

		const int SCISSORS = 1;
		const int ROCK = 2;
		const int PAPER = 3;



		if (total == 0)
		{
			cout << "�·� : ����" << endl;
		}
		else
		{
			// ������ ������ ������������ �Ҽ��� ���ܳ� �� �����Ƿ� �Ҽ��� �Ʒ����� �Ұŵȴ�.
			// �̷��� ��� ���ϴ� �Ҽ����� �ڸ���n ��ŭ 10^n �� ���ؼ� ������ ������� �ٲ��ְų�, ���� �� �ϳ��� �Ǽ��� �ٲ��ش�.
			cout << "�·� : " << ((win * 100) / total) << "%" << endl;
		}

		cin >> input;

		if (input == SCISSORS)
		{
			switch (com)
			{
			case SCISSORS:
				cout << "����(����) vs ����(��ǻ��) �����ϴ�!" << endl;
				break;
			case ROCK:
				cout << "����(����) vs ����(��ǻ��) �����ϴ�..." << endl;
				total++;
				break;
			case PAPER:
				cout << "����(����) vs ��(��ǻ��) �̰���ϴ�!!" << endl;
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
				cout << "����(����) vs ����(��ǻ��) �̰���ϴ�!!" << endl;
				win++;
				total++;
				break;
			case ROCK:
				cout << "����(����) vs ����(��ǻ��) �����ϴ�!" << endl;
				break;
			case PAPER:
				cout << "����(����) vs ��(��ǻ��) �����ϴ�..." << endl;
				total++;
				break;
			}
		}
		else if (input == PAPER)
		{
			switch (com)
			{
			case SCISSORS:
				cout << "��(����) vs ����(��ǻ��) �����ϴ�..." << endl;
				total++;
				break;
			case ROCK:
				cout << "��(����) vs ����(��ǻ��) �̰���ϴ�!!" << endl;
				win++;
				total++;
				break;
			case PAPER:
				cout << "��(����) vs ��(��ǻ��) �����ϴ�!" << endl;
				break;
			}
		}
		else
		{
			break;
		}

	}

}