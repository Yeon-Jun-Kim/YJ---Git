int main()
{
	int tmp[10] = { 0 }, i, num, index;
	int x[10], cn = 0, sw = 1;
	for (i = 0; i < 10; i++)
	{
		do {
			printf("%d �� �Է� ? (0~9) ", i + 1);
			scanf("%d%*c", &num); // 3,
		} while (num < 0 || num>9);
		tmp[num]++;
	}

	//ū �� ��
	index = 0;
	for (i = 1; i < 10; i++)
	{
		if (tmp[index] < tmp[i])
			index = i;
	}
	//���� �� ���Ͽ� x �迭�� ÷�� ����
	for (i = index; i < 10; i++)
	{
		if (tmp[index] == tmp[i])
		{
			x[cn++] = i;
			sw = 0;
		}
	}


	if (sw)
		printf("\n���� ���� �Է��� �� : %d, Ƚ�� :%d \n",
			index, x[index]);
	else
	{
		for (i = 0; i < cn; i++)
			printf("\n���� ���� �Է��� �� : %d, ", x[i]);
		printf("\nȽ�� : %d, ", tmp[index]);
	}
	return 0;
}