#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
	int x, y;
};

typedef struct rectangle {
	struct point p1; // 왼쪽 상단의 점
	struct point p2; // 오른쪽 하단의 점
} RECT;

typedef struct node {
	int data;
	struct node* link;
} NODE;

void reverse_order(char X[]); // 문제 1
int area(RECT rect); // 문제 2
int array_sum(int* array_p, int size); // 문제 3
void aout_list(NODE* plist); // 문제 4 . void insert_node(NODE* plist, int data); // 문제 4

int main()
{ // 문제 1
	char X[20] = "Hongik University";
	printf("\n 문제1 문자열 = %s", X);
	reverse_order(X);
	printf("\n 문제1 역순의 문자열 = %s\n", X);
	// 문제 2
	RECT rect;
	struct point p;
	// 초기화
	rect.p1.x = 1;
	rect.p1.y = 1;
	rect.p2.x = 3;
	rect.p2.y = 4;

	int r = area(rect);
	printf("\n 문제2 사각형의 면적 = %d \n", r);
	// 문제 3
	int M[3][3] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int sum = 0;
	sum = array_sum(M, 9);

	//
	//
	printf("\n 문제3 배열의 합 = %d\n", sum);
		/*// 문제 4
		printf("\n 문제 4");
		NODE* plist, * plist1, * plist2;
		plist = (struct node*)malloc(1 * sizeof(struct node));
		plist->data = 10;
		//
		//
		//
		//
		//
		aout_list(plist); // 리스트 생성 확인
		printf("\n<node의 data 가 25인 노드 삽입 확인>");
		insert_node(plist, 25);
		aout_list(plist); // 리스트에서 노드 삽입 확인*/
}

void reverse_order(char X[]) // 문제 1
{
	int j = 0;
	int count = 0;
	while (X[j] != NULL)
	{
		count++;
		j++;
	}
	char temp[64];
	for (int i = 0; i < j; i++)
	{
		temp[i] = X[j - (i + 1)];
	}
	for (int i = 0; i < j; i++)
		X[i] = temp[i];
}
int area(RECT rect) // 문제 2
{
	return  (rect.p2.x - rect.p1.x) * (rect.p2.y - rect.p1.y);
}
int array_sum(int* p, int size) // 문제 3
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *p++;
	return sum;
}
/*
void aout_list(NODE* plist) // 문제 4 .
{
}
void insert_node(NODE* plist, int data) // 문제 4
{
}
*/
