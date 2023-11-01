#include <iostream>
void arrayInOut(){
    int n;
    std::cin >> n;

    int data[100];
    int sum_between_two_zeros = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> *(data + i);
    }

    bool zero_appeared = false;

    for (int i = 0; i < n; ++i) {
        if(zero_appeared && data[i] == 0){
            break;
        }else if (not zero_appeared && data[i] == 0){
            zero_appeared = true;
        }else if (zero_appeared){
            sum_between_two_zeros+=data[i];
        }
    }

    std::cout << sum_between_two_zeros;
}
int main() {
    arrayInOut();
    return 0;
}