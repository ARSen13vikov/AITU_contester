#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 20;

int count_Occurrence(char[],char);
void outputOccurrence(char[],char,int);
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char ch, data[MAX_SIZE];
        cin >> ch;
        cin >> data;
        int count = count_Occurrence(data, ch);
        outputOccurrence(data,ch,count);
    }
    return 0;
}
int count_Occurrence(char arr[MAX_SIZE],char ch){
    int result = 0;
    for (int i = 0; i < strlen(arr); ++i) {
        if (arr[i]==ch){
            result++;
        }
    }
    return result;
}
void outputOccurrence(char data[MAX_SIZE],char ch,int count){
    cout << count << " " << ch << " in ";
    for (int i = 0; i < strlen(data); ++i) {
        cout << data[i];
    }
    cout << '\n';
}