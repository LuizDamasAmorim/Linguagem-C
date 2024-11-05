#include <stdio.h>

int main(){
    int n[] = {10,8,51,24,0,75,20,12};
    int m = n[0];
    int p;

    for(p = 0 ; p <= 8 ; p++){
        if (n[p] % 2 == 0 )
        {
            m = n[p];
            printf("%d \n",m);
        }
        
    }
    
    return 0;
}