#include <iostream>
#include <cstring>
using namespace std;

char upper(char x){
    if((x >= 'a') && (x <= 'z'))return char('A' + (x - 'a'));
    if((x >= 'A') && (x <= 'Z'))return char('a' + (x - 'A'));
    return x;
}
int main(){
    char s[100];
    cin >> s;
    int n = strlen(s);
    for(int i = 0;i < n;i++){
        cout << upper(s[i]);
    }
    return 0;
}