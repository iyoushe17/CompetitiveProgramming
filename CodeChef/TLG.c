#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int rounds;
    printf("enter rounds: ");
    scanf("%d",&rounds);
    

    int scrSheet[rounds][2], p1scr=0, p2scr=0, lead, max = 0, player;
    for(int i=0; i<rounds; i++) {
        scanf("%d %d", &scrSheet[i][0], &scrSheet[i][1]);    
        p1scr += scrSheet[i][0];
        p2scr += scrSheet[i][1];
        lead = abs(p1scr - p2scr);
        if(lead > max) {
            max = lead;
            if(p1scr > p2scr) 
              player = 1;     
            else 
              player = 2;
        }
    }
    printf("%d %d",player,max);
    return 0;
}