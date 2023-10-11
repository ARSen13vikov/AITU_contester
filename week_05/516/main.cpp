#include <iostream>
using namespace std;

int main()
{
    int n, m, snake_board[100][100];
    bool turn = false;
    int snake = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        if (!turn){
            for (int j = 0; j < m; j++)
                snake_board[i][j]=snake++;
            turn = true;
        }else {
            for (int j = m-1; j >= 0 ; j--)
                snake_board[i][j]=snake++;
            turn = false;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << snake_board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}