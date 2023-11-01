#include <iostream>
#include <cstring>
const int N = 100;
void decrypter(char* data, int key){
    char decrypted_word[N];
    int len = strlen(data);
    for (int i = 0; i < len; ++i) {
        int ch = data[i]-65-key;
        if (ch < 0){
            ch+=26;
        }else{
            ch%=26;
        }
        decrypted_word[i] = ch + 65;

    }
    for (int i = 0; i < len; ++i) {
        std::cout << decrypted_word[i];
    }
}
int main() {
    char cypher_word[N];
    int k;
    std::cin >> cypher_word;
    std::cin >> k;
    decrypter(cypher_word,k);
    return 0;
}
