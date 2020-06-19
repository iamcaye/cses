#include <stdio.h>

int main(){
    int r;
    scanf("%d", &r);
    float d =0;

    while(r != 1){
	d = r;
        if((r % 2) == 0){
            d = r/2;
        }else{
            d = d*3+1;
        }
	r = d;
        printf("%d -> ", r);
    }
    printf("\n");
    return 0;
}
