#include <iostream>
#include <fstream>
using namespace std;

int NWD(int a, int b){
    if (a>b){
        int c = b;
        b = a;
        a = c;
    }
    int r = a % b;
    while (r != 0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(){
	ifstream dane;
	dane.open("liczby.txt");
	int liczby[500];
	for (int i=0; i<500; i++){
		dane >> liczby[i];
    }
    int First = 0;
    int Length = 1;
    int Nwd = liczby[0];

    int first;
    int length;
    int nwd;
	for (int i=0; i<500; i++){
        if(i == 499){
            break;
        }
        first = i;
        length = 0;
        nwd = liczby[i];
        for (int j=i; j<500; j++){
            if (NWD(nwd, liczby[j]) > 1){
                nwd = NWD(nwd, liczby[j]);
                length++;
            }
            else{
                if (length > Length){
                    First = first;
                    Length = length;
                    Nwd = nwd;
                }
                first = j;
                length = 1;
                nwd = liczby[j];
            }
        }
        if (length > Length){
            First = first;
            Length = length;
            Nwd = nwd;
        }
    }
    cout << liczby[First] << endl << Length << endl << Nwd << endl;
}