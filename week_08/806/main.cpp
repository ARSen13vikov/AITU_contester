#include <iostream>
void arrayInOut(){
    int n;
    std::cin >> n;
    int data[100];
    for (int i = 0; i < n; ++i) {
        std::cin >> *(data + i);
    }
    for (int i = 0; i < n/2; ++i) {
        std::cout << *(data + i*2) << " ";
    }
    for (int i = 0; i < n/2; ++i) {
        std::cout << *(data + i*2+1) << " ";
    }
}
int main() {
    arrayInOut();
    return 0;
}