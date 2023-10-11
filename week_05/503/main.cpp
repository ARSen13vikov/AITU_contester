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
    int zero_row;
    int zero_column;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++) {
            if (data[i][j] == 0){
                zero_row = i+1;
                zero_column = j+1;
            }
        }
    }
    cout << zero_row << " " << zero_column;
    return 0;
}