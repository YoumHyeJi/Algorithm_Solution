#include <stdio.h>
#include <stdlib.h>

void BGO_11047() {

	int num;
	int k_money;
	scanf("%d %d", &num, &k_money);
	int * value_money;
	int p_money = 0;
	int min_num = 0;


	value_money = (int*)malloc(sizeof(int)*num);

	int i;

	for (i = 0; i < num; i++) {
		scanf("%d", &value_money[i]);
	}



	while (k_money != 0) {
		for (i = 0; (i < num) && (value_money[i] <= k_money); i++) {
			p_money = value_money[i];
		}
		min_num += (k_money / p_money);
		k_money = (k_money % p_money);
	}

	printf("%d", min_num);

	free(value_money);

}