#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

int main(){
    int obraz[200][320];
    ifstream dane;
    dane.open("przyklad.txt");
    for (int i=0; i<200; i++){
        for (int j=0; j<320; j++){
            dane >> obraz[i][j];
        }
    }
    int max = 0;
    int col;
    for (int j=0; j<320; j++){
        col = 1;
        for (int i=1; i<200; i++){
            if (obraz[i][j] == obraz[i-1][j]){
                col++;
            }
            else{
                if (col > max){
                    max = col;
                }
                col = 1;
            }
        }
    }
    cout << max;
}