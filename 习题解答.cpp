//#include<iostream >
//#include<vector>
//using namespace std;
//
//#define ElemType int
//#define _for(i,a,b) for(int i=(a);i<(b);i++)
//#define INF 0x3F3F3F3F
//
//#pragma region
//
//typedef struct LNode {
//	ElemType data;
//	struct LNode *next;
//}LNode,*Linklist;
//
////��ʼ������
//bool InitList(Linklist& L) {
//	//����һ��ͷ���
//	L = (LNode*)malloc(sizeof(LNode));
//	//�ڴ治�㣬����ʧ��
//	if (L == NULL) {
//		return false;
//	}
//	//ͷ�����ʱû�н��
//	L->next = NULL;
//	return true;
//}
////�ж������Ƿ�Ϊ��
//bool Isempty(Linklist L) {
//	return ((L->next) == NULL);
//}
//
////ʹ��β�巨����������
//Linklist CreatList(vector<int>data) {
//	if (data.size() < 1) {
//		return NULL;
//	}
//	//ͷ�ڵ�
//	LNode* head = (Linklist)malloc(sizeof(LNode));
//	head->data = NULL;
//	head->next = NULL;
//	Linklist p = head;
//	_for(i, 0, data.size()) {
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = data[i];
//		s->next = NULL;
//		p->next = s;
//		p = s;
//	}
//	return head;
//}
////�������
//void PrintList(Linklist L) {
//	//L = L->next;
//	while (L != NULL) {
//		printf("%d ", L->data);
//		L = L->next;//����Ųһ��
//	}
//	printf("\n");
//}
//
////int  GetLenth(Linklist L) {
////	int len = 0;
////	LNode* p = L;
////	while (p->next != NULL) {
////		p = p->next;
////		len++;
////	}
////	return len;
////}
//int GetLenth(Linklist L) {
//	int len = 0;
//	Linklist p = L->next;
//	while (p != NULL) {
//		p = p->next;
//		len++;
//	}
//	return len;
//}
//#pragma endregion
//
////40.7 P40.7
////����һ������ͷ���ĵ�����������Ԫ�ؽ�������ֵ����,�Ա�дһ������,ɾ����
////�����н��ڸ���������ֵ(��Ϊ������������)֮���Ԫ�ص�Ԫ��(������)
////void DelBetween(Linklist& L, int A, int B) {
////	if (A > B) {
////		return;
////	}
////	Linklist pre = L;
////	Linklist p = pre->next;
////	while (p != NULL) {
////		if (pre->next->data >= A && pre->next->data <= B) {
////			LNode* del = p;
////			pre->next = p->next;
////			p = p->next;
////			delete del;
////		}
////		else {
////			pre = p;
////			p = p->next;
////		}
////	}
////}
//// 
//#define a8 41.8
////41.8 //P41.8
////��������������,��д�㷨�ҳ���������Ĺ������
//Linklist FindCommonList(Linklist A, Linklist B) {
//	int lenA = GetLenth(A);
//	int lenB = GetLenth(B);
//	int diff = abs(lenA-lenB);
//	Linklist longlist, shortlist;
//	if (lenA > lenB) {
//		longlist = A->next;
//		shortlist = B->next;
//	}
//	else{
//		longlist = B->next;
//		shortlist = A->next;
//	}
//	while (diff--) {
//		longlist = longlist->next;
//	}
//	while(longlist!=NULL){
//		if (longlist == shortlist) {
//			return longlist;//֮��ȫ�������ߵĹ�����㣬����ֱ���������
//		}
//		else {
//			longlist = longlist->next;
//			shortlist = shortlist->next;
//		}
//	}
//}
////Linklist FindCommonList(Linklist A, Linklist B) {
////	int LenA = GetLenth(A), LenB = GetLenth(B), DiffLen = abs(LenA - LenB);
////	Linklist LongList, ShortList;
////	if (LenA > LenB) {
////		LongList = A->next;
////		ShortList = B->next;
////	}
////	else {
////		LongList = B->next;
////		ShortList = A->next;
////	}
////	while (DiffLen--) {
////		LongList = LongList->next;
////	}
////	while (LongList != NULL) {
////		if (LongList == ShortList) {
////			return LongList;
////		}
////		else {
////			LongList = LongList->next;
////			ShortList = ShortList->next;
////		}
////
////	}
////}
//
//int main() {
//	//40.7
//	//vector<int>data{3,5,6,8,1,3,9,3};//����Ҫ����=��
//	//Linklist L;
//	//InitList(L);
//	//L=CreatList(data);//Ҫ��������ݴ浽L��
//	//PrintList(L);
//	//////40.7
//	////DelBetween(L, 3, 7);
//	vector<int>data1{ 3,5,6,8,1,4,9,77 };
//	vector<int>data2{ 2,5,7,88,31 };
//	Linklist head1;
//	Linklist head2;
//	InitList(head1);
//	InitList(head2);
//	head1 = CreatList(data1);
//	head2 = CreatList(data2);
//	Linklist com = head1->next;
//	Linklist p = head2;
//	for (; com != NULL && com->data!= 8; com++);
//	for (; p->next != NULL; p++);
//	p->next = com;
//	PrintList(head1->next);
//	PrintList(head2->next);
//	Linklist ComList = FindCommonList(head1, head2);
//	PrintList(ComList);
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

//P41.9
//����һ������ͷ���ĵ�����, ��headΪͷָ��, ���ṹΪ(data, next), data
//Ϊ����Ԫ��, nextΪָ��, ��д���㷨:��������������������и���������Ԫ��,
//���ͷŽ����ռ�Ĵ洢�ռ�(Ҫ�� : ������ʹ��������Ϊ�����ռ�)

#include <iostream>
#include <vector>
using namespace std;

//P41.8
//��������������,��д�㷨�ҳ���������Ĺ������
#define ElemType int
#define _for(i,a,b) for(int i=(a);i<(b);i++)
#define INF 0x3f3f3f3f

#pragma region ������ͷ��������

typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

//��ʼ������
bool InitList(LinkList& L) {
	//����һ��ͷ���
	L = (LNode*)malloc(sizeof(LNode));
	//�ڴ治�㣬����ʧ��
	if (L == NULL) {
		return false;
	}
	//ͷ���֮����ʱ��û�нڵ�
	L->next = NULL;
	return true;
}


//�ж��Ƿ�Ϊ��
bool IsEmpty(LinkList L) {
	return ((L->next) == NULL);
}

//ʹ��β�巨����
LinkList CreatList(vector<int> data) {
	if (data.size() < 1) {
		return NULL;
	}
	//ͷ���
	LNode* head = (LinkList)malloc(sizeof(LNode));
	head->data = NULL;
	head->next = NULL;
	LinkList p = head;
	_for(i, 0, data.size()) {
		LNode* s = (LinkList)malloc(sizeof(LNode));
		s->data = data[i];
		s->next = NULL;
		p->next = s;
		p = s;
	}
	return head;
}
//�������
void PrintList(LinkList list) {
	while (list != NULL) {
		printf("%d ", list->data);
		list = list->next;
	}
	printf("\n");
}

int GetLenth(LinkList L) {
	int len = 0;
	LinkList p = L->next;
	while (p != NULL) {
		p = p->next;
		len++;
	}
	return len;
}

#pragma endregion


//P41.8
//�����ڵ��ȫ�ǹ����ģ���Y����
LinkList FindCommonList(LinkList A, LinkList B) {
	int LenA = GetLenth(A), LenB = GetLenth(B), DiffLen = abs(LenA - LenB);
	LinkList LongList, ShortList;
	if (LenA > LenB) {
		LongList = A->next;
		ShortList = B->next;
	}
	else {
		LongList = B->next;
		ShortList = A->next;
	}
	while (DiffLen--) {
		LongList = LongList->next;
	}
	while (LongList != NULL) {
		if (LongList == ShortList) {
			return LongList;
		}
		else {
			LongList = LongList->next;
			ShortList = ShortList->next;
		}

	}
}

int main()
{
	vector<int> data1{ 3,5,6,8,1,4,9,77 };
	vector<int> data2{ 2,5,7,88,31 };
	LinkList head1;
	LinkList head2;
	InitList(head1);
	InitList(head2);
	head1 = CreatList(data1);
	head2 = CreatList(data2);
	LinkList com = head1->next;
	LinkList P = head2;
	for (; com != NULL && com->data != 8; com = com->next);
	for (; P->next != NULL; P = P->next);
	P->next = com;
	PrintList(head1->next);
	PrintList(head2->next);
	LinkList CommList = FindCommonList(head1, head2);
	PrintList(CommList);
	return 0;
}