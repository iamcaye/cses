#include <stdio.h>

#define TAM 128

int main(){
	int r;
	int ar[TAM];
	int re[TAM] = {[0 ... TAM-1] = -1};
	scanf("%d", &r);
	if((r < 2) || (r > 200000)){
		return -1;
	}
	
	unsigned i;
	for(i = 1; i < r ; i++){
		scanf("%d", &ar[i]);
		printf("%d\t", ar[i]);
	}

	for(i = 1; i < r ; i++){
		re[ar[i]] = 1;
	}

	for(i = 1; i < r ; i++){
		if(re[i] < 0){
			printf("%d", i);
		}
	}
	return 0;
}
