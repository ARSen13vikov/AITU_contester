#include <iostream>
using namespace std;

int main()
{
    char string[1000];
    int n , max_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char tmp;
        cin >> tmp;
        string[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        if(string[i] == 'A')
            max_count++;
    }
    cout << max_count;
    return 0;
}