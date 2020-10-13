#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

int main(){
    int obraz[200][320];
    ifstream dane;
    dane.open("dane.txt");
    for (int i=0; i<200; i++){
        for (int j=0; j<320; j++){
            dane >> obraz[i][j];
        }
    }
    int min = 255;
    int max = 0;

    for (int i=0; i<200; i++){
        for (int j=0; j<320; j++){
            if (obraz[i][j]>max){
                max = obraz[i][j];
            }
            else if (obraz[i][j]<min){
                min = obraz[i][j];
            }
        }
    }

    cout << "min: " << min << " max: " << max << endl;

}
