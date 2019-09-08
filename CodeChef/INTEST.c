/************************* 
*   NAME: AAYUSHI SINGH  *
*   DATE: APRIL 06, 2019 *
*   PROBLEM CODE: INTEST *
************************ */


#include<stdio.h>

int main() {    
    
    int n, k, count=0, t;

    if (n > 10000000 || k > 10000000) {
        return 0;
    }      

   scanf ("%d%d",&n ,&k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if(t > 1000000000)
            return 0;
        if(t % k == 0) 
            count++;
        
    }

    printf("%d\n", count);

}
