#include <iostream>
#include <cstring>

int const N = 100;

struct wordData{
    int count;
    char character;
    char word[N];
};
void input(wordData* data, int n){
    for (int i = 0; i < n; ++i) {
        std::cin >> data[i].character >> data[i].word;
    }
}
void countCharacters(wordData* data, int n){
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < strlen(data[i].word); ++j) {
            if (data[i].character == *(data[i].word+j))
                count++;
        }
        data[i].count = count;
    }
}
void output(wordData* data, int n){
    for (int i = 0; i < n; ++i) {
        std::cout << data[i].count << " " << data[i].character << " in " << data[i].word << '\n';
    }
}
int main(){
    wordData data[N];
    int n;
    std::cin >> n;

    input(data,n);
    countCharacters(data, n);
    output(data,n);
    return 0;
}