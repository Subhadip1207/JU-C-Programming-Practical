/*W.A.P. to generate the  Pascal’s triangle :-- 
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1…..upto 10 lines*/
#include <stdio.h>

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int val=1;
        for(int k=0;k<=i;k++){
            printf("%d ",val);
            val = val * (i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}