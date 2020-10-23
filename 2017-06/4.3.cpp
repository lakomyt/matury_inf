#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int distance(int a_x, int a_y, int b_x, int b_y){
    int d = sqrt(pow((b_x-a_x),2) + pow((b_y-a_y),2));
    return round(d);
}

int main(){
    fstream dane;
    dane.open("punkty.txt");
    int punkty[1000][2];
    for (int i=0; i<1000; i++){
        dane >> punkty[i][1];
        dane >> punkty[i][2];
    }
    int a_x = punkty[0][0];
    int a_y = punkty[0][1];
    int b_x = punkty[1][0];
    int b_y = punkty[1][1];
    int d = distance(a_x, a_y, b_x, b_y);
    for (int i=0; i<1000; i++){
        for (int j=i; j<1000; j++){
            int Ta_x = punkty[i][0];
            int Ta_y = punkty[i][1];
            int Tb_x = punkty[j][0];
            int Tb_y = punkty[j][1];
            if (distance(Ta_x, Ta_y, Tb_x, Tb_y) > d){
                d = distance(Ta_x, Ta_y, Tb_x, Tb_y);
                int a_x = punkty[i][0];
                int a_y = punkty[i][1];
                int b_x = punkty[j][0];
                int b_y = punkty[j][1];
            }
        }
    }
    cout << "Najdłuższa odległość: " << d << " A(" << a_x << "," << a_y << ") B(" << b_x << "," << b_y << ")";
}