#include <stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    int an[n];
    int res = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%d", &an[i]);
    }
    
    for(i = 1 ; i < n ; i++){
        if(an[i-1] > an[i]){
            res += an[i-1]-an[i];
        }
    }

    printf("%d", res);

    return 0;
}
