#include<stdio.h>

//scanf输入函数，输入空格在格式化字符前面；？
int main()
{
    char x=0;
    char arr[]={'a','e','i','o','u'};

    while(scanf(" %c",&x)!=EOF)
    {
        int i=0;
        for(i=0;i<5;i++)
        {
            if(x==arr[i] || x==arr[i]-32)
            {
                printf("Vowel\n");
                break;
            }
        }
        if(i==5)
        {
            printf("Consonant\n");
        }
    }
    return 0;
}
