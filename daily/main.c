#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct _node {
	int value;
	struct _node * next;
}Node , * NodePoint , * List;

List Creat(int length) {
	NodePoint ListHead = NULL;
	NodePoint * Local=&ListHead;
	while (length--) {
		*Local = (NodePoint)malloc(sizeof(Node));
		scanf("%d" , &(*Local)->value);
		Local = &(*Local)->next;
	}
	*Local = NULL;
	return ListHead;
}

void Reverse(List * list) {
	NodePoint Iter_list = (*list)->next;
	NodePoint New_Head = *list;
	while (Iter_list != NULL) {
		NodePoint temp = Iter_list->next;
		(*list)->next = Iter_list->next;
		Iter_list->next = New_Head;
		New_Head = Iter_list;
		Iter_list = temp;
	}
	*list = New_Head;
}




void PrintList(List list) {
	while (list != NULL) {
		printf("%d " , list->value);
		list = list->next;
	}
	printf("\n");
}


void Merge(List * list1 , List * list2) {
	//先逆置链表1
	Reverse(list1);

	/*
	依次遍历链表2,插入到相应位置
	(简单思维,因为如果已知链表2是递增的,逆置链表2后可以不重置Iter_list1的值,减少循环次数)
	*/
	NodePoint Iter_list2 = *list2;
	while (Iter_list2 != NULL) {
		NodePoint Iter_list1 = *list1;
		NodePoint Last = NULL;
		while (Iter_list1 != NULL) {
			if (Iter_list2->value < Iter_list1->value) {
				Last = Iter_list1;
				Iter_list1 = Iter_list1->next;
			}
			else {
				NodePoint temp = Iter_list2->next;
				if (Last == NULL) {
					Iter_list2->next = Iter_list1;
					(*list1) = Iter_list2;
				}
				else {
					Iter_list2->next = Iter_list1;
					Last->next = Iter_list2;
				}
				Iter_list2 = temp;
				break;
			}
		}
	}
	*list2 = NULL;

}
int main() {
	freopen("in.txt" , "r" , stdin);
	//freopen("out.txt" , "w" , stdout);
	List t1 , t2;
	t1 = Creat(4);
	PrintList(t1);
	t2 = Creat(4);
	PrintList(t2);
	Merge(&t1 , &t2);
	PrintList(t1);
	return 0;
}
