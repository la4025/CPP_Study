#include <iostream>
using namespace std;

// ������ ����
// �����͸� �����ϴ� ����� ����

// a[1]
// a ��� �̸��� �ٱ��ϸ� �Ҵ��ϰ� �ȿ� 1�� �ִ´�.
int a = 1;

// b[2]
// b ��� �̸��� �ٱ��ϸ� �Ҵ��ϰ� �ȿ� 2�� �ִ´�.
int b = 2;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

bool test;

int hp = 100;
bool isInvincible = true;

// #pragma region ������ ����� �ּ�ȭ ��ų�� �ִ�.
// #pragma endregion ���� �ݴ´�.

int main()
{
#pragma region ��� ����
	// ��� ������


	// ���Կ���
	// a�� b�� �����ϰ� b�� ��ȯ�϶�
	// -> b��� �ٱ��� �ȿ� �ִ� ����, a��� �ٱ��� �ȿ� �����Ѵ�.
	a = b;

	// ��Ģ����
	// ���� �ʿ��Ѱ�?
	// ex) ������ ���
	// ex) ü���� ������
	// ex) ���������� ī���͸� 1 ���� ��ų��
	a = b + 3; // ���� = (a += 3);
	a = b - 3; // ���� = (a -= 3);
	a = b * 3; // ���� = (a *= 3);
	a = b / 3; // ������(��) = (a /= 3);
	a = b % 3; // ������(������) = (a %= 3);

	// ���� ������
	a = a + 1; // add eax, 1 -> inc eax
	a++;
	++a;
	a--;
	--a;

	b = a++; // b = a -> a�� 1����
	b = ++a; // a�� 1���� -> b = a

#pragma endregion

#pragma region �� ����
	
	// ���� �ʿ��Ѱ�?
	// ex) ü���� 0�� �Ǹ� ���
	// ex) ü���� 30% ���ϸ� �ñر� �ߵ� (100 * hp / maxHp)
	// ex) ����ġ�� 100�̻��̸� ������

	// a == b : a�� b�� ���� ������?
	// ������ 1, �ٸ��� 0
	isSame = (a == b);

	// a != b : a�� b�� ���� �ٸ���?
	// �ٸ��� 1, ������ 0
	isDifferent = (a != b);

	// a > b : a�� b���� ū��?
	// a >= b : a�� b���� ũ�ų� ������?
	// ������ 1, �ƴϸ� 0
	isGreater = (a > b);
	isGreater = (a >= b);

	// a < b : a�� b���� ������?
	// a <= b : a�� b���� �۰ų� ������?
	// ������ 1, �ƴϸ� 0
	isSmaller = (a < b);
	isSmaller = (a <= b);

#pragma endregion

#pragma region �� ����

	// ���� �ʿ��Ѱ�?
	// ���ǿ� ���� ���� ��� �ʿ��� ��
	// ex) �α����Ҷ� ���̵� ����, ��й�ȣ�� ���ƾ� �Ѵ�.
	// ex) ��� �������̰ų�, ��� �����̸� ��� �ػ� �����ϴ�.

	// !(not)
	// 0 �̸� 1, 1 �̸� 0
	test = !isSame; // ��ǻ� different�� �ǹ�

	// &&(and)
	// a && b -> �Ѵ� 1 �̸� 1, �� �ܴ� 0
	test = (hp <= 0 && isInvincible == false);

	// ||(or)
	// a || b -> �� �� �ϳ��� 1 �̸� 1, �Ѵ� 0 �̸� 0
	test = (hp > 0 || isInvincible == true);
	!(hp <= 0 && isInvincible == false);

#pragma endregion
}