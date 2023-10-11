#include <iostream>
using namespace std;

int main()
{
    int data[26] = {0};
    int n, max_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        unsigned char tmp;
        int ASCII_tmp;
        cin >> tmp;
        ASCII_tmp = tmp - 65;
        data[ASCII_tmp]++;
    }
    for (int i = 0; i < 26; i++) {
        if (data[i] != 0)
            max_count++;
    }
    cout << max_count << endl;
    for (int i = 0; i < 26; i++) {
        if (data[i] != 0)
            cout << (char)(i+65) << " " << data[i] << endl;
    }
    return 0;
}