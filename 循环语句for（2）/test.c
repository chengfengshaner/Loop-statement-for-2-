//һЩforѭ���ı���
#include <stdio.h>

int main()
{
	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ�� - ��ѭ��
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
		for (j = 0; j < 3; j++)	//������ӡ9��
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
	for (; i < 3; i++)		//ʡ�Գ�ʼ��ʹ������ִ��� - ��ӡ3��
	{
		for (; j < 3; j++)	//ʡ��j=0ʹi++��j��ֵ�Ѿ�Ϊ3�����ټ�����ӡ - �˴����j=0�����Խ�������貹��i=0
		{
			printf("hehe\n");
		}
	}
	return 0;
}