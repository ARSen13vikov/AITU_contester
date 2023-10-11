#include <iostream>

using namespace std;

bool myXor(bool x, bool y){
    bool result = false;
    if ((!x && y)||(x && !y))
        result = true;

    return result;
}
int main() {
    bool result, x, y;
    cin >> x >> y;
    result = myXor(x,y);
    cout << result;
    return 0;
}