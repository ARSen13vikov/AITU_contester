#include <iostream>
using namespace std;

int main()
{
    int data[100];
    int n , max_count = 0, max;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        data[i] = tmp;
    }
    max = data[0];
    for (int i = 0; i < n; i++) {
        if(data[i] > max){
            max = data[i];
            max_count = 1;
        }
        else if (data[i] == max)
            max_count++;
    }
    cout << max_count;
    return 0;
}