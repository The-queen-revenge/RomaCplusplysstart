#include <iostream>
using namespace std;
int test1(){
    int A, B, C, m1, m2, m3;
    cout << "print three different numbers \n";
    cin >> A >> B >> C;
    while(A==B and B==C and A==C) {
        cout << "the numbers are the same \n";
    }
    if (A <= B) {
        int m1 = A;
        int m2 = B;
    }
    else {
        int m1 = B;
        int m2 = A;
    }
    if(m1 > C) {
        if(m2 > C) {
            m3 = C;
        }
        else{
            m3 - m2 and m2 - C;
        }
    }
    else{
        m3 - m2 and m2 - m1 and m1 - C;
    }
    cout << m1 << " " << m2 << " "<< m3 << " ";
    return 0;
}
