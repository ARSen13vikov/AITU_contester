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
    int signed_one_row = -1;
    int signed_one_column = -1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++) {
            if (data[i][j] == (-1)){
                signed_one_row = i+1;
                signed_one_column = j+1;
            }
        }
    }
    cout << signed_one_row << " " << signed_one_column;
    return 0;
}