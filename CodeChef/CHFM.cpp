#include <iostream>

int main(int argc, char const *argv[]) {

    int T, N, flag = 0;
    long double avg, sum1;
    std::cin >> T;
    if ((T < 1) || (T > 10))
        return 0;
    while (T--) {
        flag = 0;
        sum1 = 0;
        std::cin >> N;
        if ((N < 2) || (N > 100000))
            return 0;
        long int A[N];

        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
            sum1 += A[i];
        }
        avg = sum1 / N;
        if ((avg * 10000 - (long int)avg * 10000) == 0) {
            for (int j = 0; j < N; j++) {
                if (avg == A[j]) {
                    std::cout<<j + 1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                std::cout << "impossible" << '\n';
            }
        }
        else {
            std::cout << "impossible" << '\n';
        }
    }
    return 0;
}