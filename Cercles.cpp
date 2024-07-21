#include <iostream>
#include "Cercles.h"
#include "Function.h"
#include "Cercle.h"
#include <fstream>

using namespace std;

float IntroCercle(){
    
    int p,q,y;

    Cercle:
        cout << "----Коло----" << endl;
        cout << "1 - Внесты данные самому" << endl;
        cout << "2 - Внесты данные автоматически" << endl;
        cout << "3 - Выход" << endl;
        cout << "Ввод: ";
        cin >> p;
        if(p == 1){
            cout << "Коло 1" << endl;
            Circle k1 = CreateCircle();
            cout << "Коло 2" << endl;
            Circle k2 = CreateCircle();

            Circle k3 = (k1 % k2);
            cout << "Коло 1" << endl;
            cout << k1.ToString() << endl;
            cout << endl;
            cout << "Коло 2" << endl;
            cout << k2.ToString() << endl;
            cout << endl;
            cout << "Результат" << endl;
            cout << k3.ToString() << endl;
            cout << endl;
            cout << "1 - Сохранить данные в файл" << endl;
            cout << "2 - Назад" << endl;
            cout << "Ввод: ";
            cin >> y;
            if(y == 1){
                ofstream f("Circle.txt");
                f << "Коло 1 - " << k1.ToString() << endl;
                f << "Коло 2 - " << k2.ToString() << endl;
                f << "Результат - " << k3.ToString() << endl;
                cout << "Файл Circle.txt сохранен! Смотрите в папке с програмой." << endl;
                cout << endl;
                cout << "1 - Назад" << endl;
                cout << "Ввод: ";
                cin >> q;
                if(q == 1){
                    goto Cercle;
                }
            }
            if(y == 2){
                goto Cercle;
            }
            else{
                cout << endl;
                cout << "Не коректный ввод!" << endl; 
                cout << endl;
                goto Cercle;
            }
        }
        if(p == 2){
            Circle k1 = OneAvtoCreateCircle();
            Circle k2 = TwoAvtoCreateCircle();

            Circle k3 = (k1 % k2);
            cout << "Коло 1" << endl;
            cout << k1.ToString() << endl;
            cout << endl;
            cout << "Коло 2" << endl;
            cout << k2.ToString() << endl;
            cout << endl;
            cout << "Результат" << endl;
            cout << k3.ToString() << endl;
            cout << endl;
            cout << "1 - Сохранить данные в файл" << endl;
            cout << "2 - Назад" << endl;
            cout << "Ввод: ";
            cin >> y;
            if(y == 1){
                ofstream f("Circle.txt");
                f << "Коло 1 - " << k1.ToString() << endl;
                f << "Коло 2 - " << k2.ToString() << endl;
                f << "Результат - " << k3.ToString() << endl;
                cout << "Файл Circle.txt сохранен! Смотрите в папке с програмой." << endl;
                cout << endl;
                cout << "1 - Назад" << endl;
                cout << "Ввод: ";
                cin >> q;
                if(q == 1){
                    goto Cercle;
                }
            }
            if(y == 2){
                goto Cercle;
            }
            else{
                cout << endl;
                cout << "Не коректный ввод!" << endl; 
                cout << endl;
                goto Cercle;
            }
        }
        if(p == 3){
            return 0;;
        }
        else {
            cout << endl;
            cout << "Не коректный ввод!" << endl; 
            cout << endl;
            goto Cercle;
        }
}
