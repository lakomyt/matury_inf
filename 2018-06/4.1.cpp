#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane_a;
    dane_a.open("dane1.txt");
    ifstream dane_b;
    dane_b.open("dane2.txt");
    int c = 0;
    for (int i=0; i<1000; i++){
        for (int x=0; x<10; x++){
            int a;
            dane_a >> a;
            int b;
            dane_b >> b;
            if (x == 9 and (a == b)){
                c++;
            }
        }
    }
    cout << c;
}