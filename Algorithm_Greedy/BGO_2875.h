#include <stdio.h>

void BGO_2875(){

	int N;	//���л� ��
	int M;	//���л� ��
	int K;	//�� ���� ��
	int max = 0;	//�ִ� �� ��
	int total; // �� �ο� ��

	scanf("%d %d %d", &N, &M, &K);
	total = N + M - K;

	while (N > 1 && M > 0 && total > 2) {
		N -= 2;
		M -= 1;
		total -= 3;
		max++;
	}

	printf("%d",max);


}
