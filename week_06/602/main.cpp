#include <iostream>

using namespace std;

double power(double a, int n){
    double power_result = 1;
    for (int i = 0; i < n; ++i)
        power_result*=a;
    return power_result;

}
int main() {
    int n;
    double a, result;
    cin >> a >> n;
    result = power(a,n);
    cout << result;
    return 0;
}