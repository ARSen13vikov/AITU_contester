#include <iostream>
void swap2(unsigned int *a,unsigned int *b){
    unsigned int tmp = *a;
    *a=*b;
    *b=tmp;
    std::cout << *a << " " << *b;

}
int main() {
    unsigned int x,y;
    std::cin >> x >> y;
    swap2(&x,&y);
    return 0;
}
