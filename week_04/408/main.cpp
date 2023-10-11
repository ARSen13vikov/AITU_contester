#include <iostream>
using namespace std;

int main()
{
    int data[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if(data[j] > data[j+1]){
                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    return 0;
}