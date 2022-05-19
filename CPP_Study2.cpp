#include <iostream>
using namespace std;

// ���ڿ� ���ڿ�
// bool�� �׳� ��������, ��/������ ��Ÿ���� ���� ����Ѵ�.
// ��� char�� ��������, �׳� �������� '����' �ǹ̸� ��Ÿ���� ���� ���

// char : ���ĺ� / ���� ���ڸ� ��Ÿ����.
// wchar_t : �����ڵ� ���ڸ� ��Ÿ����.

// ASCII (American Standard Code for Information Interchange)

// '����'�� �ǹ̷� ���� ����ǥ ('') ���
char ch = 'a';
char ch2 = '1';
char ch3 = 'a' + 1;

// ����ȭ �ô뿡�� ������� ���� �� �� ����
// �� ���� ��� ���ڿ� ���� ���� �ڵ带 �ο��� ���� �����ڵ� (unicode)
// ����) �����ڵ忡�� ���� ���� ��ȣ�� �����ϴ°� �ѱ���/�߱���

// �����ڵ�� ǥ�� ����� ���������� �ִµ� ��ǥ������ UTF-8, UTF-16 �� �ִ�.
// UTF-8
// ���ĺ�, ���� 1����Ʈ (ASCII�ڵ� �� ������ ��ȣ)
// ���� ������ ���ڴ� 2����Ʈ
// �ѱ�, ���� �� ���ƽþ� ��� 3����Ʈ

// UTF-16
// ���ĺ�, ����, �ѱ�, ���� �� ���� ��κ� ���� 2����Ʈ
// �������� ���빮�ڸ� 4����Ʈ (��ǻ� �����ص� ��)

wchar_t wch = 0xc548; // L'��';

// Escape Sequence
// ǥ���ϱ� �ָ��� �ֵ��� ǥ��
// \0 = ASCII 0�� = NULL
// \t = ASCII 9�� = Tab
// \n = ASCII 10�� = LineFeed (���� �Ʒ���)
// \r = ASCII 13�� = CarriageReturn (Ŀ���� �� ó������ �̵�)
// ���͸� �Է��ϴ� ���� ��ǻ� \n\r �� ����.


// ���ڿ�
// ���ڵ��� ���� ��� �� �ִ� �� (���� �迭 ���� ����)
// ���� = 1~8����Ʈ�� �������̷� �����͸� ����
// ���ڿ��� NULL��(\0)�� �� ������ ������ �����Ѵ�.

// data ������ ó���� 0���� �ʱ�ȭ�� �Ǿ��ֱ� ������ '\0'(NULL)���� �־����� �ʾƵ� ���ϴ� ���ڿ��� ���� �� �ִ�.
// char str[] = { 'h', 'e', 'l', 'l', 'o' };
char str2[] = "Hello World";

int main()
{
	cout << ch << endl;
	cout << ch2 << endl;
	cout << ch3 << endl;

	//cout�� char ����

	wcout.imbue(locale("kor"));
	wcout << wch << endl;

	// stack ���������� ���� '\0'(NULL)���� �־�������� ������ �����̵ȴ�.
	// �׷��� ���� ��� ���ϴ� ���ڿ� �ܿ� �����Ⱚ�� �� �޴´�.
	char str[] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	cout << str << endl;
	cout << str2 << endl;
}