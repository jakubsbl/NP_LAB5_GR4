//
// Created by Dexer on 02.12.2022.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a=3,b=4,c=5;      //boki trojkata
    float O, P, p;          //zmienne O-obwod, P-pole, p-posilkowa zmienna do wzoru na pole


    cout << "Podaj dlugosci bokow trojkata:" << endl;
    cin >> a >> b >> c;

    if( a>b && a>c && b+c>a || b>a && b>c && a+c>b || c>a && c>b && a+b>c){ //sprawdzamy czy trojkat moze isniec
        O = a+b+c;
        p = O/2;
        P = sqrtf(p*(p-a)*(p-b)*(p-c)); //
    }else{
        cout << "Taki trojkat nie istnieje";
        return 1;
    }

    std::cout << "Obwod wynosi " << O << endl;      //wyswietlamy wyniki
    // std::cout << p << endl;
    std::cout << "Pole wynosi "<< P << endl;

    return 0;
}
