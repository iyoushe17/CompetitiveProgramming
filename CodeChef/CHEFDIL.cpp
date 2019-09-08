#include <iostream>

int main() {
    int T;
    scanf("%d",&T);
    if (T<1 || T>100)
        return 0;
    
    while(T--) {
        std::string S;
        std::cin>>S;
        if (S.size()<1 || S.size()>100000)
            return 0;
        
        int ones = 0;
        for (int i = 0; i<S.size(); i++) {
            if (S[i] == '1')
                ones++;
        }
        if (ones % 2 == 0)
            std::cout<<"LOSE\n";
        else
            std::cout<<"WIN\n";
    }
    return 0;
}