#include <iostream>
#include <cstring>
const int N = 100;

bool isPalindrome(char* word){
    int len = strlen(word);
    for (int i = 0; i < len/2; ++i) {
        if (word[i]!=word[len-i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    char word[N];
    std::cin >> word;
    if(isPalindrome(word)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
    return 0;
}
