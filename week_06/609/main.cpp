#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 200;

int count_Occurrence(char[],char);
void outputOccurrence(char[],char,int);
int main() {
    char ch1, ch2, data1[MAX_SIZE], data2[MAX_SIZE];
    cin >> ch1 >> ch2;

    cin >> data1;
    int count1 = count_Occurrence(data1, ch1);

    cin >> data2;
    int count2 = count_Occurrence(data2, ch2);\

    outputOccurrence(data1,ch1,count1);
    outputOccurrence(data2,ch2,count2);

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
    cout << count << " " << ch << " characters in ";
    for (int i = 0; i < strlen(data); ++i) {
        cout << data[i];
    }
    cout << '\n';
}