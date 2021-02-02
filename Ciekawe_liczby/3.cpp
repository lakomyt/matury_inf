#include <iostream>
#include <fstream>
using namespace std;

int w(int n){
    int moc=0;
    while(n > 9){
        int temp=1;
        while (n > 0){
            temp = temp * (n%10);
            n = n/10;
        }
        moc++;
        n = temp;
    }
    return moc;
}

int main(){
    ifstream dane;
    dane.open("liczby.txt");
    int c=0;
    int moce[8] = {0,0,0,0,0,0,0,0};
    int min=999999999;
    int max=0;
    int liczba;
    for (int i=0; i<1000; i++){
        dane >> liczba;
        int moc = w(liczba);
        if (moc > 0 and moc < 8){
            moce[moc]+=1;
        }
        if(moc == 1 and liczba > max){
            max = liczba;
        }
        else if (moc == 1 and liczba < min){
            min = liczba;
        }
    }
    cout << "min: " << min << ", max: " << max << endl;
    for (int x=1; x<8; x++){
        cout << moce[x] << " ";
    }
}
