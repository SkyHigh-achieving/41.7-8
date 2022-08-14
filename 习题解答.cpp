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
////初始化链表
//bool InitList(Linklist& L) {
//	//分配一个头结点
//	L = (LNode*)malloc(sizeof(LNode));
//	//内存不足，分配失败
//	if (L == NULL) {
//		return false;
//	}
//	//头结点暂时没有结点
//	L->next = NULL;
//	return true;
//}
////判断链表是否为空
//bool Isempty(Linklist L) {
//	return ((L->next) == NULL);
//}
//
////使用尾插法建立单链表
//Linklist CreatList(vector<int>data) {
//	if (data.size() < 1) {
//		return NULL;
//	}
//	//头节点
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
////输出链表
//void PrintList(Linklist L) {
//	//L = L->next;
//	while (L != NULL) {
//		printf("%d ", L->data);
//		L = L->next;//往后挪一个
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
////设在一个带表头结点的单链表中所有元素结点的数据值无序,试编写一个函数,删除表
////中所有介于给定的两个值(作为函数参数给出)之间的元素的元素(若存在)
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
////给定两个单链表,编写算法找出两个链表的公共结点
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
//			return longlist;//之后全部是两者的公共结点，所以直接输出就行
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
//	//vector<int>data{3,5,6,8,1,3,9,3};//不需要增加=号
//	//Linklist L;
//	//InitList(L);
//	//L=CreatList(data);//要把这个数据存到L中
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
//给定一个带表头结点的单链表, 设head为头指针, 结点结构为(data, next), data
//为整型元素, next为指针, 试写出算法:按递增次序输出单链表中各结点的数据元素,
//并释放结点所占的存储空间(要求 : 不允许使用数组作为辅助空间)

#include <iostream>
#include <vector>
using namespace std;

//P41.8
//给定两个单链表,编写算法找出两个链表的公共结点
#define ElemType int
#define _for(i,a,b) for(int i=(a);i<(b);i++)
#define INF 0x3f3f3f3f

#pragma region 建立带头结点的链表

typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

//初始化链表
bool InitList(LinkList& L) {
	//分配一个头结点
	L = (LNode*)malloc(sizeof(LNode));
	//内存不足，分配失败
	if (L == NULL) {
		return false;
	}
	//头结点之后暂时还没有节点
	L->next = NULL;
	return true;
}


//判断是否为空
bool IsEmpty(LinkList L) {
	return ((L->next) == NULL);
}

//使用尾插法建表
LinkList CreatList(vector<int> data) {
	if (data.size() < 1) {
		return NULL;
	}
	//头结点
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
//输出链表
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
//公共节点后全是公共的，“Y”型
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