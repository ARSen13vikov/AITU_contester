#include <iostream>
#include <string>
using namespace std;

int to_norm(string s){
    int n = s.size();
    int p = 1;
    int res = 0;
    for(int i = n-1;i >= 0;i--){
        if(s[i] == '1'){
            res += p;
        }
        p *=2 ;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    cout << to_norm(s);
    return 0;
}