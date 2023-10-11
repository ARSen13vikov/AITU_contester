#include <iostream>
using namespace std;

int main()
{
    int data[1000];
    int tmp;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        data[i] = tmp;
    }
    int min = data[0], min_index = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] < min){
            min = data[i];
            min_index = i;
        }
    }
    cout << min_index;
    return 0;
}