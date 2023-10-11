#include <iostream>

using namespace std;

char getSign(int x, int y){
    char result;
    if (x == y)
        result = '=';
    else if (x > y)
        result = '>';
    else
        result = '<';
    return result;
}
int main() {
    int x, y;
    char result;
    cin >> x >> y;
    result = getSign(x,y);
    cout << result;

    return 0;
}