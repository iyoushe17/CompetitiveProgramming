#include <iostream>
#include <stdio.h>
#include <cmath>

int main () {
    int T, p;
    scanf("%d", &T);
    if(T<1 || T>5)
        return 0;

    while (T--) {
        int power, count = 0;
        scanf("%d", &p);
        
        while (p != 0) {
            power = (int)std::log2(p);
            if (power > 11) 
                power = 11;
            p = p - pow(2, power);
            count++;
        }

        printf("%d\n", count);
        
    }
    return 0;    
}