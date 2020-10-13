#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string slowa[1000];
    ifstream dane;
    dane.open("przyklad.txt");
    for (int x=0; x<1000; x++){
        dane >> slowa[x];
    }

    for (int y=0; y<1000; y++){
        string slowo = slowa[y];
        char max = slowo[0];
        char min = slowo[0];
        for (int s=0; s<slowo.length()-1; s++){
            if (slowo[s+1]<slowo[s]){
                min = slowo[s+1];
            }
            else if (slowo[s+1]>slowo[s]){
                max = slowo[s+1];
            }
        }
        if (max-min < 11){
            cout << slowo << endl;
        }
    }
}