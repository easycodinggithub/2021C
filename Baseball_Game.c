#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	srand((unsigned int)time(NULL));

	int n[3], Random[3], Strike = 0, Ball = 0, Out = 0;

	char Start;

	printf("�߱� ������ �Ͻðڽ��ϱ�? (y/n) \n");

	scanf(" %c", &Start);

	if (Start == 'n' || Start == 'N')
	{
		exit(0);
	}
	else if (Start == 'y' || Start == 'Y')
	{
			Random[0] = rand() % 9 + 1;
			Random[1] = rand() % 9 + 1;
			Random[2] = rand() % 9 + 1;

		while (1)
		{
			printf("�� �ڸ� ���ڸ� �Է��ϼ��� : ");

			scanf("%d %d %d", &n[0], &n[1], &n[2]);

			if (Strike == 3)
			{
				printf("�����Դϴ�.");
				exit(0);
			}

			Strike = 0, Ball = 0;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (i == j)
					{
						if (n[i] == Random[j])
						{
							Strike++;
						}
					}
					else {
						if (n[i] == Random[j])
						{
							Ball++;
						}
					}
				}
				if (Strike == 0 && Ball == 0)
				{
					Out++;
				}
			}

			printf("��Ʈ����ũ : %d, �� : %d \n", Strike, Ball);

		}

	}

	return 0;
}