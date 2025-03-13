#include <iostream>
#include <cstdio>
#include <cstdlib>

struct Node{
    int data;
    struct Node*next;
};

// ��������
struct Node*createList(){
    struct Node*headNode=(struct Node*)malloc(sizeof(struct Node));
    headNode->next=NULL;
    return headNode;
}

// �����ڵ�
struct Node*createNode(int data){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

// ��ӡ����
void printList(struct Node*headNode){
    struct Node*pMove = headNode->next;
    while (pMove)
    {
        printf("%d ",pMove->data);
        pMove = pMove->next;
    }
    printf("\n");
}

// ��ͷ������ڵ�
void insertNodeByHead(struct Node*headNode,int data){
    struct Node*newNode=createNode(data);
    newNode->next=headNode->next;
    headNode->next=newNode;
}
// ������β������ڵ�
void insertNodeByTail(struct Node*headNode, int data) {
    struct Node*newNode = createNode(data);
    struct Node*pMove = headNode;
    while (pMove->next != NULL) {
        pMove = pMove->next;
    }
    pMove->next = newNode;
}

// ɾ����һ��Ԫ��
void deleteFirstNode(struct Node*headNode){
    if (headNode->next != NULL) {
        struct Node*temp = headNode->next;
        headNode->next = temp->next;
        free(temp);
    }
}

// ��ȡ������
int getListLength(struct Node*headNode){
    int length = 0;
    struct Node*pMove = headNode->next;
    while (pMove) {
        length++;
        pMove = pMove->next;
    }
    return length;
}

// ��ָ��λ�ò���ڵ�
void insertNodeAtPosition(struct Node*headNode, int position, int data) {
    if (position < 1) return;
    struct Node*pMove = headNode;
    for (int i = 1; i < position; ++i) {
        if (pMove->next == NULL) return;
        pMove = pMove->next;
    }
    struct Node*newNode = createNode(data);
    newNode->next = pMove->next;
    pMove->next = newNode;
}

// ����Ԫ��λ��
int findElementPosition(struct Node*headNode, int element) {
    int position = 1;
    struct Node*pMove = headNode->next;
    while (pMove) {
        if (pMove->data == element) {
            return position;
        }
        position++;
        pMove = pMove->next;
    }
    return -1;
}

int main(){
    struct Node*list=createList();
    int num;
    while (scanf("%d", &num) != EOF) {
        insertNodeByTail(list, num);
    }
    // ��һ�����
    printList(list);
    // ɾ����һ��Ԫ�ز��ڶ������
    deleteFirstNode(list);
    printList(list);
    // ���������
    printf("%d\n", getListLength(list));
    // �ڵڶ�Ԫ�ش�����100
    insertNodeAtPosition(list, 2, 100);
    // ����������������������Ŀû��ȷҪ�󣬵����Լ��ϱ��ڼ�飩
    printList(list);
    // ���������
    printf("%d\n", findElementPosition(list, 100));

    // �ͷ������ڴ�
    struct Node*pMove = list;
    struct Node*temp;
    while (pMove != NULL) {
        temp = pMove;
        pMove = pMove->next;
        free(temp);
    }

    return 0;
}
