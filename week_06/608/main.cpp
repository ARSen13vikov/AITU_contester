#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
void sequenceCount(int n, int m, int data[MAX_SIZE][MAX_SIZE]);
void findMaxSeq(int seq_count[100], int n);
int main() {
    int n, m, data[MAX_SIZE][MAX_SIZE];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> data[i][j];
        }
    }
    sequenceCount(n,m,data);

    return 0;
}
void sequenceCount(int n, int m, int data[MAX_SIZE][MAX_SIZE]){
    int seq_count[MAX_SIZE] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (data[i][j] < data[i][j+1])
                seq_count[i]++;
        }
    }
    findMaxSeq(seq_count,n);
}
void findMaxSeq(int seq_count[MAX_SIZE], int n) {
    int max_seq = -1;
    for (int i = 0; i < n-1; i++) {
        if (seq_count[i] > seq_count[i+1])
            max_seq = i;
        else if (seq_count[i] < seq_count[i+1])
            max_seq = i + 1;
    }
    if (max_seq >= 0)
        cout << "Longest series is in the string "<< max_seq + 1;
    else
        cout << "No series of equal elements";

}