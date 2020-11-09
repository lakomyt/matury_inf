#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane_a;
    dane_a.open("dane1.txt");
    ifstream dane_b;
    dane_b.open("dane2.txt");
    for (int i=0; i<1000; i++){
        int A[10];
        int B[10];
        int rA = 0;
        int rB = 0;
        for (int x=0; x<10; x++){
            int a;
            dane_a >> a;
            int b;
            dane_b >> b;
            A[x] = a;
            B[x] = b;
            if (x>0 and a == A[x-1]){
                A[x] = -1;
                rA++;
            }
            if (x>0 and b == B[x-1]){
                B[x] = -1;
                rB++;
            }
        }
        if (rA == rB){
            for (int z=0; z<10; z++){
                if (A[z] == -1){
                    for(int q=z; q<9; q++){
                        A[q] = A[q+1];
                    }
                    A[9] = -1;
                }
            }
            for (int z=0; z<10; z++){
                if (B[z] == -1){
                    for(int q=z; q<9; q++){
                        B[q] = B[q+1];
                    }
                    B[9] = -1;
                }
            }
            int diff = 0;
            for (int y=0; y<10-rA; y++){
                if (A[y] != B[y]){
                    diff++;
                }
            }
            if(diff == 0){
                cout << i+1 << endl;
            }
        }
    }
}