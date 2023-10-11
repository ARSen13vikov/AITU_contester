#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int battle_field[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> battle_field[i][j];
        }
    }
    int max_ship_length = 0;
    for (int i = 0; i < n; i++) {
        int max_zero = 0;
        for (int j = 0; j < n; j++) {
            if (battle_field[i][j])
                max_zero = 0;
            else
                ++max_zero;

            if (max_zero > max_ship_length)
                max_ship_length = max_zero;
        }
    }
    for (int i = 0; i < n; i++) {
        int max_zero = 0;
        for (int j = 0; j < n; j++) {
            if (battle_field[j][i])
                max_zero = 0;
            else
                ++max_zero;
            if (max_zero > max_ship_length)
                max_ship_length = max_zero;
        }
    }
    cout << max_ship_length;
    return 0;
}