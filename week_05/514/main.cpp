#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){

        for (int j = 1; j < n-i+1; j++)
            cout<<" ";

        int val = 1;
        for (int j = 1; j <= i; j++){
            cout<<val<<" ";

            val = val * (i - j)/j;
        }
        cout<<endl;
    }
    return 0;
}