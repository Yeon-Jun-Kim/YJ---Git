int main()
{
	int tmp[10] = { 0 }, i, num, index;
	int x[10], cn = 0, sw = 1;
	for (i = 0; i < 10; i++)
	{
		do {
			printf("%d 값 입력 ? (0~9) ", i + 1);
			scanf("%d%*c", &num); // 3,
		} while (num < 0 || num>9);
		tmp[num]++;
	}

	//큰 값 비교
	index = 0;
	for (i = 1; i < 10; i++)
	{
		if (tmp[index] < tmp[i])
			index = i;
	}
	//같은 값 비교하여 x 배열에 첨자 저장
	for (i = index; i < 10; i++)
	{
		if (tmp[index] == tmp[i])
		{
			x[cn++] = i;
			sw = 0;
		}
	}


	if (sw)
		printf("\n가장 많이 입력한 수 : %d, 횟수 :%d \n",
			index, x[index]);
	else
	{
		for (i = 0; i < cn; i++)
			printf("\n가장 많이 입력한 수 : %d, ", x[i]);
		printf("\n횟수 : %d, ", tmp[index]);
	}
	return 0;
}