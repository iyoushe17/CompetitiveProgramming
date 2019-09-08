#include<iostream>
#include<vector>

int main() {
    int T, N, a;
    scanf("%d",&T);
    if (T<1 || T>100)
        return 0;

    while (T--) {
        scanf("%d",&N);
        if (N<1 || N>150)
            return 0;
        int A[N], B[N], max = 0, scr = 0;
        
        for (int i=0; i<N; i++) {
            std::cin>>A[i];            
            if (A[i]<0 || A[i]>50)
                return 0;
        }
        for (int i=0; i<N; i++) {
            std::cin>>B[i];            
            if (B[i]<0 || B[i]>50)
                return 0;
        }

        for (int i=0; i<N; i++) {
            scr = (A[i] * 20) - (B[i] * 10);
            if (scr > max)
                max = scr;
        }
        printf("\n%d",max);
    }
    return 0;
}