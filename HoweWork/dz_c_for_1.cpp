#include <iostream>
#include <stdio.h>
using namespace std;
int mai(){
    system("chcp 65001");
    int x,d=1;
    repeat:
    cout << ("Введите положительное число: ");
    scanf("%d",&x);

    if (x<=0){
        goto repeat;
    }
    for (d;d<=x;d++){
        if (x%d==0){
            if ((d!=x) and (d!=1)){
                printf("Делитель: %i\n",d);
            }
        }
    }
}
