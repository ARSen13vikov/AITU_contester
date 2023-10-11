#include <iostream>
using namespace std;

int main() {
    int data[50][50]={0};
    int n, count, i=0, j=0;

    cin >> n;

    while(true)
    {
        count = 0;
        while(j < n && data[i][j+1] == 0)
        {
            count++;
            data[i][j++] = 1;
        }
        if(count < 2)
            break;
        j--;
        i++;
        count = 0;
        while(i < n && data[i+1][j] == 0)
        {
            count++;
            data[i++][j] = 1;
        }
        if(count < 2)
            break;
        i--;
        j--;
        count = 0;
        while(j >= 0 && data[i][j-1] == 0)
        {
            count++;
            data[i][j--] = 1;
        }
        if(count < 2)
            break;
        j++;
        i--;
        count = 0;
        while(i >= 0 && data[i-1][j] == 0)
        {
            count++;
            data[i--][j] = 1;
        }
        if(count < 2)
            break;
        i++;
        j++;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << data[i][j];
        cout << endl;
    }
    return 0;
}