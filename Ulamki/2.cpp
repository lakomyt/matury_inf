#include <iostream>
#include <fstream>
using namespace std;

int nwd(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    ifstream dane;
    dane.open("dane_ulamki.txt");
    int a,b;
    int ile = 0;

    for (int i=0; i<1000; i++){
        dane >> a;
        dane >> b;

        if(nwd(a,b) == 1){
            ile++;
        }
    }

    cout << ile << endl;

    return 0;
}