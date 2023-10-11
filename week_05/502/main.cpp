#include <iostream>
using namespace std;

int main()
{
    int data[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> data[i][j];
    }
    int sum_main = 0;
    int sum_second = 0;

    for (int i = 0; i < n; i++)
        sum_main+=data[i][i];

    for (int i = 0; i < n; i++)
        sum_second+=data[i][n-i-1];

    cout << sum_main << " " << sum_second;
    return 0;
}