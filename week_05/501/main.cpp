#include <iostream>
using namespace std;

int main()
{
    int data[100][100];
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
            cin >> data[i][j];
    }
    int min = data[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (data[i][j] < min)
                min = data[i][j];
        }
    }
    cout << min;
    return 0;
}
