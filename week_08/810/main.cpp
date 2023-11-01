#include <iostream>
#include <cstdio>
const int N = 100;
bool comapre(char* s1, int size1, char* s2, int size2){
    if (size1!=size2){
        return false;
    }else{
        for (int i = 0; i < size1; ++i) {
            if (s1[i]!=s2[i]){
                return false;
            }
        }
    }
    return true;
}
void inputString(char* s,int *size){
    char ch;
    int counter = 0;
    do{
        while(((ch=getchar())!=' ') && (ch!='\n') && (ch!=EOF)){
        s[counter]=ch;
        counter++;
        }
    }while(counter==0&&ch!=EOF);
    *size=counter;
}
int main() {
    char s1[N],s2[N];
    int size1,size2;

    inputString(s1,&size1);
    inputString(s2,&size2);

    if(comapre(s1,size1,s2,size2)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }

    return 0;
}
