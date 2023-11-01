#include <iostream>
void arrayInOut(){
    int n;
    std::cin >> n;
    int data[100];
    for (int i = 0; i < n; ++i) {
        std::cin >> *(data + i);
    }
    for (int i = 0; i < n; ++i) {
        std::cout << *(data + i) << " ";
    }
}
int main() {
    arrayInOut();
    return 0;
}
