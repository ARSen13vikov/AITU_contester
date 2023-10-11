#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double data[100];
    int n = 0;
    double tmp;
    do {
        cin >> tmp;
        data[n] = sqrt(tmp);
        n++;
    } while(tmp != 0);
    --n;
    cout << n << endl;
    for (int i = n-1; i >= 0 ; i--) {
        cout << data[i] << endl;
    }
    return 0;
}