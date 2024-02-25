//一些for循环的变种
#include <stdio.h>

int main()
{
	//判断部分的省略 - 判断部分恒为真 - 死循环
	for (;;)
	{
		printf("hehe\n");
	}
	return 0;
}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)	//正常打印9次
		{
			printf("hehe\n");
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)		//省略初始化使结果出现错误 - 打印3次
	{
		for (; j < 3; j++)	//省略j=0使i++后j的值已经为3不会再继续打印 - 此处添加j=0即可以解决，无需补上i=0
		{
			printf("hehe\n");
		}
	}
	return 0;
}