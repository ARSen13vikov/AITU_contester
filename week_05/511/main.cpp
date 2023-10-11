#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value = n * n;
    for (int i = 0; i < n; i++) {
        int tmp = value;
        int k = 0;
        for (int j = 0; j < n; j++) {
            cout << tmp - k << " ";
            k += n;
        }
        value--;
        cout << endl;
    }
    return 0;
}