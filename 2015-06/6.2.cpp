#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane;
    dane.open("kody.txt");
    int kody[500];
    for (int i=0; i<500; i++){
        dane >> kody[i];
    }
    ofstream out;
    out.open("kody2.txt");
    long int sc[10] = {10101110111010,11101010101110,10111010101110,11101110101010,10101110101110,11101011101010,10111011101010,10101011101110,11101010111010,10111010111010};
    for (int i=0; i<500; i++){
        int control_digit = 0;
        int even = 0;
        int odd = 0;
        int n = kody[i];
        for (int x=0; x<3; x++){
            even += n % 10;
            n = n / 10;
            odd += n % 10;
            n = n / 10;
        }
        control_digit += (10-(3*even+odd)%10)%10;
        out << control_digit;
        out << " ";
        out << sc[control_digit] << endl;
    }
}