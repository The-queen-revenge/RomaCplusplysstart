#include <iostream> // Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.
using namespace std;
const int n = 5;
const int m = 10;
int main() {
    system("chcp 65001");
    int mas[n][m];
    for(int i = 0; i < n; i++) {
        int min[2] = {0,101}, max[2] = {0,-1};
        for(int k = 0; k < m; k++) {
            mas[i][k] = rand() % 100;
            cout << mas[i][k]<<" ";
            if(mas[i][k] < min[1]){
                min[1] = mas[i][k];
                min[0] = k;
            }
            if(mas[i][k] > max[1]){
                max[1] = mas[i][k];
                max[0] = k;
            }
        }
        swap(mas[i][min[0]],mas[i][max[0]]);
        cout << endl;
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++) {
            cout << mas[i][k]<<" ";
        }
        cout << endl;
    }

}