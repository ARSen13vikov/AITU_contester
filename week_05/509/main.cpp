#include <iostream>
using namespace std;

int main()
{
    int data[100][100];
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> data[i][j];
        }
    }
    int colum_sum = -10000000;
    int colum_index;
    for (int i = 0; i < k; i++) {
        int tmp_sum = 0;
        for (int j = 0; j < n; j++) {
            tmp_sum+=data[j][i];
        }
        if (tmp_sum > colum_sum){
            colum_index = i;
            colum_sum = tmp_sum;
        }
    }
    cout << colum_index + 1;
    return 0;
}