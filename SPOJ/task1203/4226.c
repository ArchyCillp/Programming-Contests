//#include <stdio.h>
//#include <stdlib.h>
//#define ElementType int
//
//
//typedef struct ListNode
//{
//	ElementType value1;
//	ElementType value2;
//	struct ListNode* next;
//}ListNode;
//
//
//void destroy(ListNode ** head)
//{
//	if (NULL == *head || NULL == head) return;
//	ListNode * p;
//	while ((p = (*head)->next))
//	{
//		free(*head);
//		*head = p;
//	}
//	free(*head);
//	*head = NULL;
//}
//
//
//int judge(int n, int m, ListNode * p)
//{
//	if ((n - p->value1) > 0 && (m - p->value2) < 0)
//		return 1;
//	if ((n - p->value1) < 0 && (m - p->value2) > 0)
//		return 1;
//	return 0;
//}
//
//
//int main(int argc, char const *argv[])
//{
//	int T, N, M, K, n, m, result;
//	ListNode * head = (ListNode *)malloc(sizeof(ListNode));
//	head->value1 = 0;
//	head->value2 = 0;
//	head->next = NULL;
//	ListNode * p, * temp, * end;
//	scanf("%d", &T);
//	for (int _ = 1; _ <= T; _++)
//	{
//		result = 0;
//		end = head;
//		scanf("%d %d %d", &N, &M, &K);
//		for (int i = 0; i < K; i++)
//		{
//			scanf("%d %d", &n, &m);
//			p = head;
//			while (NULL != (p = p->next))
//				if (judge(n, m, p))
//					result++;
//			temp = (ListNode *)malloc(sizeof(ListNode));
//			temp->value1 = n;
//			temp->value2 = m;
//			temp->next = NULL;
//			end->next = temp;
//			end = temp;
//		}
//		printf("Test case %d: %d\n", _, result);
//	}
//	return 0;
//}
