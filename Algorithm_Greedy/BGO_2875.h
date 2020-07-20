#include <stdio.h>

void BGO_2875(){

	int N;	//여학생 수
	int M;	//남학생 수
	int K;	//총 인턴 수
	int max = 0;	//최대 팀 수
	int total; // 총 인원 수

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
