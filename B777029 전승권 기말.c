#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
	int x, y;
};

typedef struct rectangle {
	struct point p1; // ���� ����� ��
	struct point p2; // ������ �ϴ��� ��
} RECT;

typedef struct node {
	int data;
	struct node* link;
} NODE;

void reverse_order(char X[]); // ���� 1
int area(RECT rect); // ���� 2
int array_sum(int* array_p, int size); // ���� 3
void aout_list(NODE* plist); // ���� 4 . void insert_node(NODE* plist, int data); // ���� 4

int main()
{ // ���� 1
	char X[20] = "Hongik University";
	printf("\n ����1 ���ڿ� = %s", X);
	reverse_order(X);
	printf("\n ����1 ������ ���ڿ� = %s\n", X);
	// ���� 2
	RECT rect;
	struct point p;
	// �ʱ�ȭ
	rect.p1.x = 1;
	rect.p1.y = 1;
	rect.p2.x = 3;
	rect.p2.y = 4;

	int r = area(rect);
	printf("\n ����2 �簢���� ���� = %d \n", r);
	// ���� 3
	int M[3][3] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int sum = 0;
	sum = array_sum(M, 9);

	//
	//
	printf("\n ����3 �迭�� �� = %d\n", sum);
		/*// ���� 4
		printf("\n ���� 4");
		NODE* plist, * plist1, * plist2;
		plist = (struct node*)malloc(1 * sizeof(struct node));
		plist->data = 10;
		//
		//
		//
		//
		//
		aout_list(plist); // ����Ʈ ���� Ȯ��
		printf("\n<node�� data �� 25�� ��� ���� Ȯ��>");
		insert_node(plist, 25);
		aout_list(plist); // ����Ʈ���� ��� ���� Ȯ��*/
}

void reverse_order(char X[]) // ���� 1
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
int area(RECT rect) // ���� 2
{
	return  (rect.p2.x - rect.p1.x) * (rect.p2.y - rect.p1.y);
}
int array_sum(int* p, int size) // ���� 3
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *p++;
	return sum;
}
/*
void aout_list(NODE* plist) // ���� 4 .
{
}
void insert_node(NODE* plist, int data) // ���� 4
{
}
*/
