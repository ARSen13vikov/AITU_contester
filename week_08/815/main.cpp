#include <iostream>

bool isLucky(int ticket) {
    int sumFirstFour = 0;
    int sumLastFour = 0;

    for (int i = 0; i < 4; ++i) {
        sumFirstFour += ticket % 10;
        ticket /= 10;
    }

    for (int i = 0; i < 4; ++i) {
        sumLastFour += ticket % 10;
        ticket /= 10;
    }

    return sumFirstFour == sumLastFour;
}

int main() {
    int M,N;
    std::cin >> M >> N;

    int luckyCount = 0;
    for (int ticket = M; ticket <= N; ++ticket) {
        if (isLucky(ticket)) {
            luckyCount++;
        }
    }
    std::cout << luckyCount;

    return 0;
}