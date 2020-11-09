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
    out.open("kody3.txt");
    long int sc[10] = {10101110111010,11101010101110,10111010101110,11101110101010,10101110101110,11101011101010,10111011101010,10101011101110,11101010111010,10111010111010};
    for (int i=0; i<500; i++){
        out << "11011010";
        int control_digit = 0;
        int even = 0;
        int odd = 0;
        int n = kody[i];
        int N[6];
        for (int x=0; x<3; x++){
            N[5-2*x] = n%10;
            even += n % 10;
            n = n / 10;
            odd += n % 10;
            N[4-2*x] = n%10;
            n = n / 10;
        }
        for (int z=0; z<6; z++){
            out << sc[N[z]];
        }
        control_digit += (10-(3*even+odd)%10)%10;
        out << sc[control_digit];
        out << "11010110" << endl;
    }
}