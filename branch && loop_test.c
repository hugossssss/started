#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		//EOF  - end of file 文件结束标志
		putchar(ch);
		}
	return 0;

}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩一个  '\n’
//	//读取一下  '\n'
//	while (ch = getchar() != ('\n'))
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')//else和if一样，结尾没有分号
//	{
//	printf("确认成功\n");
//     }
//	else
//	{
//	printf("放弃确认\n");
//
//      }
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//continue
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()                     //求n的阶乘
//{
//	int ret = 1;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//
//	}
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//int main()                 
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//for(n=1;n<=3;n++)
//{
//	ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//
//	}
//	sum = sum + ret;
//}
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//
//		sum = sum + ret;
//		
//	}
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1000毫秒
//		//system("cls");//执行系统命令的一个函数 -cls- 清空屏幕
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for(i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//         }
//		else
//		{
//			printf("密码错误\n");
//
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1;i<=9;i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{ 
//			printf("%d*%d=%-2d ", i ,j , i * j);
//
//	     }
//	
//		printf("\n");
//	
//	}
//			return 0;
//}

//void menu()
//{
//	
//	printf("*****   1. play   0.exit   *****");
//	
//}
////RAND_MAX-32767
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100 + 1;//生成1-100之间的随机数
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} 
//	while (input);
//			
//	return 0;
//	}

//int main()
//{
//	char input[20] = {0};
//	//shutdown -s -t 60
//	//system() - 执行命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串 - strcmp
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//
//	return 0;
//}


