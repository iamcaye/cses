#include <stdio.h>

int main(){
    char ss[128] = {[0 ... 128-1] = '\0'};
    int nss[4] = {[0 ... 3] = 0};
    scanf("%s", ss);

    unsigned i = 0;
    while(*(ss+i)){
        switch(*(ss+i)){
            case 'A':
                nss[0]++;
                break;
            case 'C':
                nss[1]++;
                break;
            case 'G':
                nss[2]++;
                break;
            case 'T':
                nss[3]++;
                break;
        }
        i++;
    }

    int res = 0;
    int max = 0;
    for(i = 0; i<3 ; i++){
        if(*(nss+i) > max){
            max = *(nss+i);
        }
    }

    printf("%d\n", max);

    return 0;
}
