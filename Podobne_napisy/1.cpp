#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane("napisy.txt");
    int c=0;
    string fA,fB,A,B;
    for (int i=0; i<200; i++){
        dane >> A;
        dane >> B;
        if (A.length()*3 <= B.length() or B.length()*3 <= A.length()){
            c++;
            if (c==1){
                fA = A;
                fB = B;
            }
        }
    }
    cout << "Ilość napisów: " << c << endl << "Pierwsze: " << fA << " " << fB << endl;
}