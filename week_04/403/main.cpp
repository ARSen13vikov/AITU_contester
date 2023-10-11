#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int data[1000];
    int tmp, min = 1000;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp < min)
            min = tmp;
    }
    cout << min;
    return 0;
}