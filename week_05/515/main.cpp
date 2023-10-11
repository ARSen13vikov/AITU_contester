#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int n, kill_turn, last, kill = 1;
    cin >> n >> kill_turn;
    bool alive[n];
    memset(alive , true, sizeof(alive));

    last = n;
    do {
        for (int i = 0; i < n; ++i) {
            if (alive[i]){
                if (kill == kill_turn) {
                    alive[i] = false;
                    --last;
                    kill = 0;
                }
                ++kill;
            }
            if (last == 1)
                break;
        }
    } while(last != 1);
    for (int i = 0; i < n; ++i) {
        if (alive[i])
            cout << i+1;
    }
    return 0;
}