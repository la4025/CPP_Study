#include <iostream>
using namespace std;

// 데이터 연산
// 데이터를 가공하는 방법에 대해

unsigned char flag; // 부호를 없애야 >> 를 하더라도 부호비트가 딸려오지 않음

// a[1]
// a 라는 이름의 바구니를 할당하고 안에 1을 넣는다.
int a = 1;

// b[2]
// b 라는 이름의 바구니를 할당하고 안에 2를 넣는다.
int b = 2;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

bool test;

int hp = 100;
bool isInvincible = true;

// #pragma region 구역을 만들고 최소화 시킬 수 있다.
// #pragma endregion 으로 닫는다.

int main()
{
#pragma region 산술 연산
	// 산술 연산자


	// 대입연산
	// a에 b를 대입하고 b를 반환하라
	// -> b라는 바구니 안에 있는 값을, a라는 바구니 안에 복사한다.
	a = b;

	// 사칙연산
	// 언제 필요한가?
	// ex) 데미지 계산
	// ex) 체력을 깎을때
	// ex) 루프문에서 카운터를 1 증가 시킬때
	a = b + 3; // 덧셈 = (a += 3);
	a = b - 3; // 뺄셈 = (a -= 3);
	a = b * 3; // 곱셈 = (a *= 3);
	a = b / 3; // 나눗셈(값) = (a /= 3);
	a = b % 3; // 나눗셈(나머지) = (a %= 3);

	// 증감 연산자
	a = a + 1; // add eax, 1 -> inc eax
	a++;
	++a;
	a--;
	--a;

	b = a++; // b = a -> a를 1증가
	b = ++a; // a를 1증가 -> b = a

#pragma endregion

#pragma region 비교 연산
	
	// 언제 필요한가?
	// ex) 체력이 0이 되면 사망
	// ex) 체력이 30% 이하면 궁극기 발동 (100 * hp / maxHp)
	// ex) 경험치가 100이상이면 레벨업

	// a == b : a와 b의 값이 같은가?
	// 같으면 1, 다르면 0
	isSame = (a == b);

	// a != b : a와 b의 값이 다른가?
	// 다르면 1, 같으면 0
	isDifferent = (a != b);

	// a > b : a가 b보다 큰가?
	// a >= b : a가 b보다 크거나 같은가?
	// 맞으면 1, 아니면 0
	isGreater = (a > b);
	isGreater = (a >= b);

	// a < b : a가 b보다 작은가?
	// a <= b : a가 b보다 작거나 같은가?
	// 맞으면 1, 아니면 0
	isSmaller = (a < b);
	isSmaller = (a <= b);

#pragma endregion

#pragma region 논리 연산

	// 언제 필요한가?
	// 조건에 대한 논리적 사고가 필요할 때
	// ex) 로그인할때 아이디도 같고, 비밀번호도 같아야 한다.
	// ex) 길드 마스터이거나, 운영자 계정이면 길드 해산 가능하다.

	// !(not)
	// 0 이면 1, 1 이면 0
	test = !isSame; // 사실상 different의 의미

	// &&(and)
	// a && b -> 둘다 1 이면 1, 그 외는 0
	test = (hp <= 0 && isInvincible == false);

	// ||(or)
	// a || b -> 둘 중 하나라도 1 이면 1, 둘다 0 이면 0
	test = (hp > 0 || isInvincible == true);
	!(hp <= 0 && isInvincible == false);

#pragma endregion

#pragma region 비트 연산

	// 언제 필요한가?
	// 비트 단위의 조작이 필요할 때
	// 대표적으로 Bitflag

	// ~ (bitwise not)
	// 단일 숫자의 모든 비트를 대상으로, not을 한다.

	// & (bitwise and)
	// 두 숫자의 모든 비트 쌍을 대상으로, and를 한다.

	// | (bitwise or)
	// 두 숫자의 모든 비트 쌍을 대상으로, or를 한다.

	// ^ (bitwise xor)
	// 두 숫자의 모든 비트 쌍을 대상으로, xor를 한다.

	// << 비트 좌측 이동
	// 비트열을 n만큼 왼쪽으로 이동
	// 왼쪽의 넘치는 n개의 비트는 버림. 오른쪽에 새로 생성되는 n개의 비트는 0으로 채워진다.
	// *2 를 할때 자주 보이는 패턴

	// >> 비트 우측 이동
	// 비트열을 n만큼 오른쪽으로 이동
	// 오른쪽의 넘치는 n개의 비트는 버림. 왼쪽에 새로 생성되는 n개의 비트는 부호 비트의 유무에 따라 다름
	// - 부호 비트가 존재할 경우, 부호 비트를 따라간다. (부호있는 정수라면 이 부분을 유의)
	// - 분호 비트가 존재하지 않을 경우, 0으로 채워진다.

	// 실습
	// 0b0000 [무적][변이][스턴][공중부양]

	// 무적 상태로 만든다.
	flag = (1 << 3);

	// 변이 상태를 추가한다. (무적 + 변이)
	flag |= (1 << 2);

	// 무적인지 확인하고 싶다? (다른 상태는 관심x)
	// bitmask
	// 필요없는 정보를 날려 확인하고싶은 정보만 가져온다.
	bool invincible = ((flag & (1 << 3)) != 0);

	// 무적이나 스턴 상태인지 확인하고 싶다?

	bool stunOrinvincible = ((flag & 0b1010) != 0);
	// 또는
	bool mask = (1 << 3) | (1 << 1);
	bool stunOrinvincible = ((flag & mask) != 0);

#pragma endregion
}