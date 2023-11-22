
////类C语言,
//typedef struct{
//    int* elem;
//    int length;
//}SqList;
//SqList L;
//Status InitList_Sq(SqList &L)
//{
//    L.elem=new int [MAXSIZE];
//    if(!L.elem)  exit(OVERFLOW);
//    L.length=0;
//    rerurn OK;
//}


//转换成C语言，用于定义一个顺序表，和一个初始化函数；
#include<stdlib.h>
#include<stdio.h>

#define MAXSIZE 100
#define OK 1
#define OVERFLOW -1
#define ERROR 0
typedef int Status;

//定义一个顺序表结构体；     //这里定义的是一整个顺序表，而非一个结点；
typedef struct{
    int* elem;
    int length;
}SqList;


//初始化顺序表，手工动态开辟一块空间，异常情况返回，初始化长度为0；
Status InitList_Sq(SqList *L){
    //L->elem=(int*)malloc(sizeof(int)*MAXSIZE);
    L->elem=(int*)calloc(MAXSIZE,sizeof(int));
    if(!L->elem)  exit(OVERFLOW);
    L->length=0;
    return OK;
}

//销毁顺序表，释放内存；
Status DestroyList(SqList* L)
{
    if(L->elem){
        free(L->elem);
        L->elem=NULL;
        L->length=0;
        return OK;
    }
}

//顺序表的插入，插入元素到顺序表末尾。用length来定位插入位置；
Status InsertList_Sq(SqList* L,int input)
{
    if(L->length==MAXSIZE)
        return ERROR;
    else{
        L->elem[L->length]=input;
        L->length++;
        return OK;
    }
}

int main()
{
    SqList L;
    //初始化顺序表； 就是在内存中开辟一段空间，以后这段空间就是结构体定义的顺序表；
    int init_return_num=InitList_Sq(&L);
    printf("init_status:%d\n",init_return_num);    //输出1，则创建顺序表成功；
//    for(int i=0;i<MAXSIZE;i++)
//    {
//        printf("%d\n",L.elem[i]);           //指针加索引的形式，计算机会把指向的后面的数据当作数组
//    }
//  //销毁顺序表；
//    int destroy_return_num=DestroyList(&L);
//    printf("destroy status:%d",destroy_return_num);
//向顺序表中添加元素，依次按照序号添加元素；
    printf("begin to insert(negative number to stop):");
    int input;
    while(1)
    {
        scanf("%d",&input);
        if(input<0)  break;
        if(InsertList_Sq(&L,input)==ERROR){
            printf("List is full\n");
            break;
        }
    }
    //打印所有元素
    printf("List elements:\n");
    for(int i=0;i<L.length;i++)
    {
        printf("%d ",L.elem[i]);
    }

    free(L.elem);

    return 0;
}










































































































