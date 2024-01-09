#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
int reverse(int x) {

}
int main() {
	system("chcp 65001");
	hanoi(4, 7, 8, 9);
	return 0;
}
	//int a = 4, b = 2, c = 3;
	//for (a = 5; a > 2; a--)
	//{
	//	printf("%d ", a);
	//	if (a == 3)
	//		continue;
	//}
	//printf("%d ", find( 63,98));
	//printf("%d\n", a = b = c);
	//printf("%d\n", a = b == c);
	//printf("%d\n", a == (b = c));
////最大公约数之辗转相除法
//int my_min(int a, int b);
//int find(int a, int b);
//int my_min(int a, int b)
//{
//	return a > b ? b : a;
//}
//int find(int a, int b)
//{
//	if (b % a == 0)
//		return a;
//	else
//		return find(b % a, a);
//}
	//printf("%d\n", a == (b == c));
////汉诺塔
//void move(int n, int a, int b)
//{
//	printf("%d from %d -> %d\n", n, a, b);
//}
//void hanoi(int n, int a, int b, int c)
//{
//	if (n == 1)
//		{move(1, a, c);
//		return;}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(n, a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
