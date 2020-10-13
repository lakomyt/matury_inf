#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string slowa[1000];
    ifstream dane;
    dane.open("sygnaly.txt");
    for (int slowo=0; slowo<1000; slowo++){
        dane >> slowa[slowo];
    }

    for (int x=39; x<1000; x+=40){
        cout << slowa[x][9];
    }
}
