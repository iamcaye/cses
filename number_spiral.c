#include <stdio.h>

int main(int argc, char * argv[]){
	int arr[5][5] = {{1,2,9,10,25},{4,3,8,11,24},{5,6,7,12,23},{16,15,12,13,22},{17,18,19,20,21}};
	int j = 0;
	int i = 0;
	
	for(i = 0; i < 5 ; i++){
		for(j = 0; j < 5 ; j++){
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
	int t, x, y;
	scanf("%d", &t);
	for(i = 0 ; i < t ; i++){
		scanf("%d %d", &x, &y);
		printf("\n- %d", arr[x-1][y-1]);
	}
	return 0;
}
