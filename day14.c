#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

//��1��n�Ľ׳˺ͣ�
//int main()
//{
//    int ret=1;
//    int n;
//    scanf("%d",&n);
//    int sum=0;
//    for(int i=1;i<=n;i++)
//    {
//        ret = ret*i;
//        sum=sum+ret;
//    }
//    printf("%d",sum);
//    return 0;
//}
//
//
////��һ�����������в��Ҿ�������n;
//int main()
//{
//    int sz[10]={1,2,3,4,5,6,7,8,9,10};
//    int n;
//    printf("�����Ǹ����֣�\n");
//    scanf("%d",&n);
//    int i;
//    for(i=0;i<10;i++)
//    {
//        if(sz[i]==n)
//        {
//            printf("%d�ڵ�%d��",n,i);
//            break;
//        }
//    }
//    if(i==10)
//    {
//        printf("�Ҳ���");
//    }
//
//
//    return 0;
//}

////���ֲ��ң��۰���ң�
//int main()
//{
//    int arr[]={0,1,2,3,4,5,6,7,8,9};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int k=7;  //���ҵ�����
//    int left =0;
//    int right =n-1;
//    while(right>=right)
//    {
//        int mid = (left + right) / 2;
//        if (k > arr[mid]) {
//            left = mid + 1;
//        } else if (k < arr[mid]) {
//            right = mid - 1;
//        } else
//        {
//            printf("%d", mid);
//            break;
//        }
//    }
//    if(right<left)
//    {printf("�Ҳ���");}
//    return 0;
//}

//
////��Ҫ��vs�����У��ַ����������м��ƶ���
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//    char arr1[]="wo ai xiao shi shi !!!";
//    char arr2[]="----------------------";
//    int left =0;
//    int right=strlen(arr1)-1;
//    while(right>=left)
//    {
//        arr2[left]=arr1[left];
//        arr2[right]=arr1[right];
//        printf("%s\n",arr2);
//        Sleep(1000);
//        system("cls");
//        left++;
//        right--;
//    }
//    return 0;
//}


//���������¼��ֻ�����Σ�
int main()
{
    char password[]="nihao";
    char arr[10];
    int i=0;
    for(i=0;i<3;i++)
    {
        scanf("%s", arr);

        if(strcmp(password,arr)==0)
        {
            printf("������ȷ��\n");
            break;
        }
        else
        {
            printf("�������\n");

        }
    }
    if(i==3)
    {
        printf("��������\n");
    }
    return 0;
}





















