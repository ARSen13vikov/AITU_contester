#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[100];
    cin >> name;

    if (strcmp(name,"Tom") == 0)
        cout << "555-3322";
    else if (strcmp(name,"Mary") == 0)
        cout << "555-8976";
    else if (strcmp(name,"Jon") == 0)
        cout << "555-1037";
    else if (strcmp(name,"Rachel") == 0)
        cout << "555-1400";
    else if (strcmp(name,"Sherry") == 0)
        cout << "555-8873";
    else
        cout << "Not found";

    return 0;
}