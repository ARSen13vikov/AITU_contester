#include <iostream>

using namespace std;

void array_input(int *data, int n){
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }
}
void compare_positive_count(int *data_1,int *data_2, int n){
    int count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++) {
        if (data_1[i] > 0)
            ++count_1;
        if (data_2[i] > 0)
            ++count_2;
    }
    if (count_1 < count_2)
        cout << "Number of positives in the second array is greater";
    else if (count_1 > count_2)
        cout << "Number of positives in the first array is greater";
    else
        cout << "Numbers are equal";


}
int main() {
    int n, data_1[100], data_2[100];
    cin >> n;
    array_input(data_1,n);
    array_input(data_2,n);
    compare_positive_count(data_1, data_2, n);
    return 0;
}