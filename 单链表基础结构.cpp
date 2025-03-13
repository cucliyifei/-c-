#include <iostream>
#include <cstdio>
#include <cstdlib>

struct Node{
    int data;
    struct Node*next;
};

// 创建链表
struct Node*createList(){
    struct Node*headNode=(struct Node*)malloc(sizeof(struct Node));
    headNode->next=NULL;
    return headNode;
}

// 创建节点
struct Node*createNode(int data){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

// 打印链表
void printList(struct Node*headNode){
    struct Node*pMove = headNode->next;
    while (pMove)
    {
        printf("%d ",pMove->data);
        pMove = pMove->next;
    }
    printf("\n");
}

// 在头部插入节点
void insertNodeByHead(struct Node*headNode,int data){
    struct Node*newNode=createNode(data);
    newNode->next=headNode->next;
    headNode->next=newNode;
}
// 在链表尾部插入节点
void insertNodeByTail(struct Node*headNode, int data) {
    struct Node*newNode = createNode(data);
    struct Node*pMove = headNode;
    while (pMove->next != NULL) {
        pMove = pMove->next;
    }
    pMove->next = newNode;
}

// 删除第一个元素
void deleteFirstNode(struct Node*headNode){
    if (headNode->next != NULL) {
        struct Node*temp = headNode->next;
        headNode->next = temp->next;
        free(temp);
    }
}

// 获取链表长度
int getListLength(struct Node*headNode){
    int length = 0;
    struct Node*pMove = headNode->next;
    while (pMove) {
        length++;
        pMove = pMove->next;
    }
    return length;
}

// 在指定位置插入节点
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

// 查找元素位置
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
    // 第一行输出
    printList(list);
    // 删除第一个元素并第二行输出
    deleteFirstNode(list);
    printList(list);
    // 第三行输出
    printf("%d\n", getListLength(list));
    // 在第二元素处插入100
    insertNodeAtPosition(list, 2, 100);
    // 第四行输出（插入后链表，题目没明确要求，但可以加上便于检查）
    printList(list);
    // 第五行输出
    printf("%d\n", findElementPosition(list, 100));

    // 释放链表内存
    struct Node*pMove = list;
    struct Node*temp;
    while (pMove != NULL) {
        temp = pMove;
        pMove = pMove->next;
        free(temp);
    }

    return 0;
}
