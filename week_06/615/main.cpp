#include <iostream>
#include <string>
using namespace std;

int time_to_sec(int h, int m,int s){
    return s + (m * 60) + (h * 3600);
}
string conv_to_string(int x){
    string result = "";
    result += char((x / 10) + '0');
    result += char((x % 10) + '0');
    return result;
}
string sec_to_time(int s){
    string result = "";
    result += conv_to_string(s / 3600);
    result += ':';
    s %= 3600;

    result += conv_to_string(s / 60);
    result += ':';
    s %= 60;
    result += conv_to_string(s);
    return result;
}
int main(){
    int h1,m1,s1,h2,m2,s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    cout << sec_to_time(time_to_sec(h2, m2, s2) - time_to_sec(h1, m1, s1));
    return 0;
}