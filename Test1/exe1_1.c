//��ӡ100-200֮�������

#include <stdio.h>
int main()
{
	int i = 101;
	int count = 0;
	while (i < 200)
	{
		int j = 2;
		while (j < i)
		{
			if (i%j == 0)
			{
				break;
			}
			j++;
		}
		//break��������
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
		i = i + 2;

	}
	printf("\n%d ", count);
	return 0;
}


