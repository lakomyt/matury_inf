#include <iostream>
#include <fstream>
using namespace std;

bool cyfropodobne(int x, int y){
    int digits_x[10]={0,0,0,0,0,0,0,0,0,0};
    while(x > 9){
        digits_x[x % 10] = 1;
        x = x / 10;
    }
    digits_x[x] = 1;

    int digits_y[10]={0,0,0,0,0,0,0,0,0,0};
    while(y > 9){
        digits_y[y % 10] = 1;
        y = y / 10;
    }
    digits_y[y] = 1;
    
    int diff = 0;
    for (int i=0; i<10; i++){
        if(digits_x[i] != digits_y[i]){
            diff++;
        }
    }
    if (diff == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    fstream dane;
    dane.open("punkty.txt");
    int punkty[1000][2];
    for (int i=0; i<1000; i++){
        dane >> punkty[i][1];
        dane >> punkty[i][2];
    }
    int c=0;
    for (int i=0; i<1000; i++){
        if (cyfropodobne(punkty[i][1], punkty[i][2])){
            c++;
        }
    }
    cout << "Ilość liczb cyfropodobnych: " << c;
}