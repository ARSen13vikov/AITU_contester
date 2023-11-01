#include <iostream>
void arrayInOut(){
    int n;
    std::cin >> n;

    int data[100];
    int sum_before_max = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> *(data + i);
    }

    int max = -2147483648;
    int max_index;

    for (int i = 0; i < n; ++i) {
        if (data[i] >= max){
            max = data[i];
            max_index = i;
        }
    }
    for (int i = 0; i < max_index; ++i) {
        if (data[i] > 0){
            sum_before_max+=data[i];
        }
    }

    std::cout << sum_before_max;
}
int main() {
    arrayInOut();
    return 0;
}