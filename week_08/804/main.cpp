#include <iostream>
#include <cctype>
#include <cstring>
const int N = 100;
void dataInOut(){
    char data[N];
    char result[N];
    int len = 0;
    std::cin >> data;
    for (int i = 0; i < strlen(data); ++i) {
        if (isalpha(data[i])){
            *(result + len++) = data[i];
        }
    }
    //std::cout << result;
    for (int i = 0; i < len; ++i) {
        std::cout << result[i];
    }
}
int main() {
    dataInOut();
    return 0;
}