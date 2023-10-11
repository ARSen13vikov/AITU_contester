#include <iostream>
using namespace std;

int main()
{
    int data_1[100][100];
    int data_2[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data_1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data_2[i][j];
            data_2[i][j] += data_1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << data_2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}