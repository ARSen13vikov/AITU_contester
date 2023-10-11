#include <iostream>
using namespace std;

int main()
{
    int data[100][100];
    int n;
    bool sim = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data[i][j];
        }
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i][j] != data[j][i])
                sim = false;
        }
    }

    if (sim)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}