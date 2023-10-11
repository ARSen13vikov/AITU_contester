#include <iostream>

using namespace std;

int min(int a, int b, int c, int d){
    int min, min_1, min_2;
    if (a < b)
        min_1 = a;
    else
        min_1 = b;
    if (c < d)
        min_2 = c;
    else
        min_2 = d;
    if (min_1 < min_2)
        min = min_1;
    else
        min = min_2;
    return min;
}
int main() {
    int a, b, c, d, min4;
    cin >> a >> b >> c >> d;
    min4 = min(a ,b ,c ,d);
    cout << min4;

    return 0;
}