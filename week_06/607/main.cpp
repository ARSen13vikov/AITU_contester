#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
void positiveCount(int n, int m, int data[MAX_SIZE][MAX_SIZE]);
void findMaxRow(int data[100], int n);
int main() {
    int n, m, data[MAX_SIZE][MAX_SIZE];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> data[i][j];
        }
    }
    positiveCount(n,m,data);

    return 0;
}
void positiveCount(int n, int m, int data[MAX_SIZE][MAX_SIZE]){
    int pos_count[MAX_SIZE] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (data[i][j] >= 0)
                pos_count[i]++;
        }
    }
    findMaxRow(pos_count,n);
}
void findMaxRow(int pos_count[MAX_SIZE], int n) {
    int max_row = -1;
    for (int i = 0; i < n-1; i++) {
        if (pos_count[i] > pos_count[i+1])
            max_row = i;
        else if (pos_count[i] < pos_count[i+1])
            max_row = i + 1;
    }
    if (max_row >= 0)
        cout << max_row + 1;
    else
        cout << "Numbers are equal";

}