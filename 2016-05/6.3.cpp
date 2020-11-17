#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane;
    dane.open("dane_6_3.txt");
    ofstream out;
    out.open("wyniki_6_3.txt");
    string slowoA;
    string slowoB;
    int k;
    for (int i=0; i<3000; i++){
        dane >> slowoA;
        dane >> slowoB;
        k = slowoB[0] - slowoA[0];
        if(k < 0){
            k = 26 + k;
        }
        for (int j=0; j < slowoA.length(); j++){
            if (slowoB[j] != (slowoA[j] - 'A' + k) % 26 + 'A'){
                k = -1;
                break;
            }
        }
        if (k == -1){
            out << slowoA << endl;
        }
    }
}