#include <iostream>
void arrayInOut(){
    int n;
    std::cin >> n;

    int data[100];
    int count_even_numbers = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> *(data + i);
    }

    int *max = data;
    int *min = data;

    for (int i = 0; i < n; ++i) {
        if (data[i] > *max) {
            max = &data[i];
        }
        if (data[i] < *min){
            min = &data[i];
        }
    }
    for (int *i = min+1; i < max; ++i) {
        if (*i % 2 == 0){
            count_even_numbers++;
        }
    }

    std::cout << count_even_numbers;
}
int main() {
    arrayInOut();
    return 0;
}