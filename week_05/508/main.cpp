#include <iostream>
using namespace std;

int main()
{
    int data[100][100];
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data[i][j];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum+=data[j][i];
        }
    }
    cout << sum;
    return 0;
}