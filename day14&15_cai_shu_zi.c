#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

//电脑生成一个随机数1~100
//猜大了
//猜小了
//猜对了，结束
int game()   //game游戏
{
    int ret = rand() % 100 + 1;  //生成一个随机数；
    //printf("%d\n",ret);
    printf("已生成一个随机数字，请猜一猜？\n");
    int i;
    for(i=1;i<=10;i++) {
        int num = 0;
        scanf("%d", &num);
        if (num > ret) {
            printf("猜大了，请继续\n");
        } else if (num < ret) {
            printf("猜小了，请继续\n");
        }
        else if(num==ret)
        {
            printf("猜对了，恭喜你\n");
            i--;
            break;
        }
    }
    if(i<11)
    {
        return 0;
    }
    else
    {
        printf("游戏失败\n");
        printf("还要继续吗？1 or 0 ?\n");
        int m=0;
        scanf("%d",&m);
        if(m==1)
        {
            return 1;
        }
        else if(m==0)
        {
            return 0;
        }
    }
}

void menu()   //给出选择菜单
{
    printf("-------1,开始游戏--------\n");
    printf("-------0,结束游戏--------\n");
}
int main()
{
    srand((unsigned int)time(NULL));   //为rand函数播种一个随机起始数；
    //int a=0;     int *p=NULL;
    int input=0;
    do
    {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("开始游戏\n");
                input = game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，重新选择\n");
                break;
        }
    }while(input);
        return 0;
}