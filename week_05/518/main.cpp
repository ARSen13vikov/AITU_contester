#include <iostream>

using namespace std;

const int MAX_N = 10;

int countNeighbors(int field[MAX_N][MAX_N], int n, int i, int j) {
    int count = 0;

    int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
    int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

    for (int k = 0; k < 8; k++) {
        int x = i + dx[k];
        int y = j + dy[k];

        if (x >= 0 && x < n && y >= 0 && y < n && field[x][y] == 1)
            count++;
    }

    return count;
}

int main() {
    int n, time;
    cin >> n >> time;

    int field[MAX_N][MAX_N];
    int newField[MAX_N][MAX_N];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> field[i][j];
        }
    }

    for (int t = 0; t < time; t++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int neighbors = countNeighbors(field, n, i, j);

                if (field[i][j] == 1) {
                    if (neighbors < 2 || neighbors > 3)
                        newField[i][j] = 0;
                    else
                        newField[i][j] = 1;
                } else {
                    if (neighbors == 3)
                        newField[i][j] = 1;
                    else
                        newField[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                field[i][j] = newField[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}