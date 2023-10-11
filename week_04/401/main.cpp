#include <iostream>

using namespace std;

int main()
{
    int number = 0, tmp;
    do {
        cin >> tmp;
        number++;
    } while(tmp != -1);
    number--;
    cout << number;
    return 0;
}