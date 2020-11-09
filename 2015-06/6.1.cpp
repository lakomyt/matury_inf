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
    out.open("kody1.txt");
    for (int i=0; i<500; i++){
        int even = 0;
        int odd = 0;
        int n = kody[i];
        for (int x=0; x<3; x++){
            even += n % 10;
            n = n / 10;
            odd += n % 10;
            n = n / 10;
        }
        out << even;
        out << " ";
        out << odd << "\n";
    }
}