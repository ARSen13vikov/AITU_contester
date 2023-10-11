#include <iostream>
using namespace std;

int main()
{
    int hours[100],minutes[100],seconds[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> hours[i] >> minutes[i] >> seconds[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if(hours[j] > hours[j+1]){
                int tmp_1 = hours[j];
                int tmp_2 = minutes[j];
                int tmp_3 = seconds[j];
                hours[j] = hours[j+1];
                hours[j+1] = tmp_1;
                minutes[j] = minutes[j+1];
                minutes[j+1] = tmp_2;
                seconds[j] = seconds[j+1];
                seconds[j+1] = tmp_3;
            }else if(hours[j] == hours [j+1]){
                if (minutes[j] > minutes [j+1]){
                    int tmp_2 = minutes[j];
                    int tmp_3 = seconds[j];
                    minutes[j] = minutes[j+1];
                    minutes[j+1] = tmp_2;
                    seconds[j] = seconds[j+1];
                    seconds[j+1] = tmp_3;
                }else if (minutes[j] == minutes[j+1]){
                    if (seconds[j] > seconds[j+1]){
                        int tmp_3 = seconds[j];
                        seconds[j] = seconds[j+1];
                        seconds[j+1] = tmp_3;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << hours[i] << " " << minutes[i] << " " << seconds[i] << endl;
    return 0;
}