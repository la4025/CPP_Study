#include <iostream>
using namespace std;

// �Լ� ( ���ν���, �޼ҵ�, ��ƾ)

/*
input ���� ������ �ް�, output���� ������ ������ �����ش�.

��ȯŸ�� �Լ��̸�([����Ÿ�� �Ű�����])
{
	�Լ�����

	return ***;
}
*/

// Hello World�� �ֿܼ� ����ϴ� �Լ��� ����� ����!
// input : ���� / output : ����
// Ÿ�� : int float double char ~~
// ��ȯ Ȥ�� �Է¹��� Ÿ���� ������ void

void PrintHelloWorld()
{
	cout << "Hello World" << endl;

	return;
}

// ������ �Է�(�Լ�) �޾Ƽ�, �ֿܼ� ����ϴ� �Լ��� ����� ����!
// input : int / output : ����

void PrintNumber(int number)
{
	cout << "�Ѱ��ֽ� ���ڴ� " << number << " �Դϴ�." << endl;
}

// 2�� ���ϰ� ������� ��� �Լ��� ����� ����!
// input : int / output : int

int MultiplyBy2(int a)
{
	int b = a * 2;
	return b;
}

// �� ���ڸ� ���ؼ� ������� ��� �Լ��� ����� ����!
// input : int, int / output : int

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}



// �Լ� ���ο��� �������� �Ű������� �Լ� ��ü �������� ����ȴ�.


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

	return 0;
}