//定义一个链表，初始化链表，向链表中添加元素；

#include<stdlib.h>
#include<stdio.h>
typedef int Status;
#define OK 1
#define ERROR 0

typedef struct LNode{
    int data;
    struct LNode* next;
}*LinkList,LNode;

//初始化链表，开辟一个头节点的空间，将头节点的next置空；
Status InitList_L(LinkList* L)         //双重指针传递参数；
{
    *L=(LinkList)malloc(sizeof(LNode));     //L即为head头指针，开辟的空间是头结点所在的空间。
    if(!(*L)) return ERROR;                  //通过malloc函数将开辟的空间地址赋给指针变量，并希望将他传递出去。
    (*L)->next=NULL;
    return OK;
}

//向链表中加入新的元素，头插法；
Status ListInsert_L(LinkList L,int data)
{
    LinkList p=(LinkList)malloc(sizeof(LNode));
    p->next=L->next;
    L->next=p;
    p->data=data;
    return OK;
}

//打印链表
void PrintList_L(LinkList L)
{
    LinkList p=L->next;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    LinkList L;
    int InitList_return_num=InitList_L(&L);    //双重指针传递参数；因为函数内部改变了指针的值，并想要将他传递出来。
    printf("init status:%d\n",InitList_return_num);
    printf("insert elem(negetive num to stop):");
    int input;
    while(1)
    {
        scanf("%d",&input);
        if(input<0)
            break;
        else
            ListInsert_L(L,input);
    }
    PrintList_L(L);
}





