#include <iostream>

using namespace std;

bool election(bool x, bool y, bool z){
    bool result = false;
    if (((x || y) && z) || (x && (y || z)))
        result = true;

    return result;
}
int main() {
    bool result, x, y, z;
    cin >> x >> y >> z;
    result = election(x,y,z);
    cout << result;
    return 0;
}