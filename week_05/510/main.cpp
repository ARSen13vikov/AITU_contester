#include <iostream>
using namespace std;

int main()
{
    int data[100][100];
    int array[200], count = 0;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> data[i][j];
            if (data[i][j] > 0) {
                array[count] = data[i][j];
                count++;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count-1; j++) {
            if (array[j] > array[j+1]){
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
    cout << count << endl;
    for (int i = 0; i < count ; i++) {
        cout << array[i] << " ";
    }
    return 0;
}