#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, divider_count = 1;
    cin >> k;
    for (int i = 1; i <= sqrt(k) ; i++) {
        if (k % i == 0)
            divider_count++;
    }
    if (divider_count > 2)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}