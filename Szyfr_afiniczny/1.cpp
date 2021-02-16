#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane("tekst.txt");
    for(int i=0; i<805; i++){
        string slowo;
        dane >> slowo;
        if (slowo[0] == 'd' and slowo[slowo.length()-1] == 'd'){
            cout << slowo << endl;
        }
    }
}