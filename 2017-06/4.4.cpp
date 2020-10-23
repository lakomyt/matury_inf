#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
    fstream dane;
    dane.open("punkty.txt");
    int punkty[1000][2];
    for (int i=0; i<1000; i++){
        dane >> punkty[i][1];
        dane >> punkty[i][2];
    }
    int in = 0;
    int out = 0;
    int bord = 0;
    for (int i=0; i<1000; i++){
        if (punkty[i][0] < 5000 and punkty[i][1] < 5000){
            in++;
        }
        else if ((punkty[i][0] == 5000 and punkty[i][1] < 5000) or (punkty[i][0] < 5000 and punkty[i][1] == 5000)){
            bord++;
        }
        else{
            out++;
        }
    }
    cout << "Wewnątrz: " << in << ", granice: " << bord << ", poza: " << out;
}