#include <iostream>
#include <cstring>
using namespace std;

const int N = 100;
int count_Occurance(char arr[N], char ch){
    int res = 0;
    int len = strlen(arr);
    for(int i = 0;i < len;++i){
        if(arr[i] == ch){
            ++res;
        }
    }
    return res;
}

int main(){
    char a[105];
    char A[105][N];
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i] >> A[i];
    }
    for(int i = n;i >= 1;i--){
        cout << count_Occurance(A[i], a[i]) << ' ' << a[i] << " in " << A[i] << endl;
    }
    return 0;
}