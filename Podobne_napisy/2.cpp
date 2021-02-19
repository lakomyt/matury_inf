#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane("napisy.txt");
    string A,B;
    bool y;
    for (int i=0; i<200; i++){
        dane >> A;
        dane >> B;
        y=1;
        if(A.length() <= B.length()){
            for (int j=0; j<A.length(); j++){
                if(A[j] != B[j]){
                    y=0;
                }
            }
            if (y==1){
                cout << A << " " << B << endl;
                for(int j=A.length(); j<B.length(); j++){
                    cout << B[j] << " ";
                }
                cout << endl;
            }
        }
    }
}