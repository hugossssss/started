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
		//EOF  - end of file �ļ�������־
		putchar(ch);
		}
	return 0;

}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣһ��  '\n��
//	//��ȡһ��  '\n'
//	while (ch = getchar() != ('\n'))
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')//else��ifһ������βû�зֺ�
//	{
//	printf("ȷ�ϳɹ�\n");
//     }
//	else
//	{
//	printf("����ȷ��\n");
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

//int main()                     //��n�Ľ׳�
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//		Sleep(1000);//��Ϣ1000����
//		//system("cls");//ִ��ϵͳ�����һ������ -cls- �����Ļ
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//         }
//		else
//		{
//			printf("�������\n");
//
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
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
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100 + 1;//����1-100֮��������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//system() - ִ�������
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ��� - strcmp
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


