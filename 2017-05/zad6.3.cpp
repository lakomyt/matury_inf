#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

bool kontrastujacy(int a, int b){
    int roznica = a - b;
    if (abs(roznica) > 128){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int obraz[200][320];
    ifstream dane;
    dane.open("dane.txt");
    for (int i=0; i<200; i++){
        for (int j=0; j<320; j++){
            dane >> obraz[i][j];
        }
    }
    int kontrast = 0;
    for (int i=0; i<200; i++){
        for (int j=0; j<320; j++){
            int p = 0;
            if (i < 199){
                if (kontrastujacy(obraz[i][j],obraz[i+1][j])){
                    p++;
                }
            }
            if (j < 319){
                if (kontrastujacy(obraz[i][j],obraz[i][j+1])){
                    p++;
                }
            }
            if (i > 0){
                if (kontrastujacy(obraz[i][j],obraz[i-1][j])){
                    p++;
                }
            }
            if (j > 0){
                if (kontrastujacy(obraz[i][j],obraz[i][j-1])){
                    p++;
                }
            }
            cout << p << endl;
            if (p > 0){
                kontrast++;
            }
        }
    }
    cout << kontrast;
}
