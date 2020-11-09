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
        int even_a = 0;
        int even_b = 0;
        for (int x=0; x<10; x++){
            int a;
            dane_a >> a;
            int b;
            dane_b >> b;
            if (a%2==0){
                even_a++;
            }
            if (b%2==0){
                even_b++;
            }
        }
        if (even_a == even_b and even_a == 5){
            c++;
        }
    }
    cout << c;
}