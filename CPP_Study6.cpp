#include <iostream>
using namespace std;

// �ݺ���
// �����͸� �޸𸮿� �Ҵ��ϰ� �����ϰ� ����� ���� �˾ƺ�
// ������ �����͸� �̿��ؼ� �����ΰ��� �ϰ� �ʹٸ�?


int main()
{
	// while��
	// �� ���� �����ϴ°� �ƴ϶�, Ư�� ���Ǳ��� ��� �ݺ��ؾ� �ϴ� ��Ȳ
	// ex) ������ �������� ��� ������ �����϶�
	// ex) �������� �����Ҷ����� ��� �̵��϶�


	// while (���ǽ�)
	// {
	// 	��ɹ�
	// }

	int count = 0;

	while (count < 5)
	{
		cout << "Hello World" << endl;
		count++;
	}

	// do - while��
	// do ���� ��ɹ��� ������ �� while���� ������ Ȯ���Ѵ�.
	// �߾������� ������ �̷��� �ִٴ� �͸� �˾Ƶ���.

	do
	{
		cout << "Hello World" << endl;
	} while (false);


	// for��
	// ��ǻ� ���� ���� ���� �ݺ����̴�.

	for (int count = 0; count < 5; count++)
	{
		cout << "Hello World" << endl;
	}


	// �ݺ��� ���� break, continue

	// break
	// �ش� �ݺ����� ������.

	int round = 1;
	int hp = 100;
	int damage = 10;

	//���� ���� : ���� ����
	while (true)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0; // ���� ü���� 0���� ����

		// �ý��� �޽���
		cout << "Round " << round << " ���� ü�� " << hp << endl;

		if (hp == 0)
		{
			cout << "���� óġ!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "���� ���� ����" << endl;
			break;
		}

		round++;
	}

	// continue
	// ������ �ʴ� ��ɹ��� ��ŵ�Ѵ�.

	// 1~10 ������ Ȧ���� ���
	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count & 2) == 0);

		if (isEven)
			continue;

		cout << count << endl;

	}

}