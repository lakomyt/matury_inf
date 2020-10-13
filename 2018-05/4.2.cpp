#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string slowa[1000];
    ifstream dane;
    dane.open("przyklad.txt");
    for (int slowo=0; slowo<1000; slowo++){
        dane >> slowa[slowo];
    }

    string slowo_max;
    int ile_max = 0;
    for (int i=0; i<1000; i++){
        bool litery[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        string slowo = slowa[i];
        for (int s=0; s<slowo.length(); s++){
            litery[slowo[s]-65] = 1;
        }
        int ile = 0;
        for (int litera=0; litera<26; litera++){
            cout << litery[litera] << " ";
            if (litery[litera] == 1){
                ile++;
            }
        }
        cout << "  " << ile << endl;
        if (ile > ile_max){
            ile_max = ile;
            slowo_max = slowo;
        }
    }
    cout << ile_max << " " << slowo_max;
}
