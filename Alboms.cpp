#include <iostream>
#include "Alboms.h"
#include "Function.h"

using namespace std;

float IntroAlbom(){

    int l, q, w;
    int Create = 3;
    string search;

    Albom:{
        cout << "----Альбомы----" << endl;
        cout << "1 - Добавить альбомы самому" << endl;
        cout << "2 - Добавить альбомы автоматически" << endl;
        cout << "3 - Выполнить поиск альбому" << endl;
        cout << "4 - Выход" << endl;
        cout << "Ввод: ";
        cin >> l;
        if(l == 1){
            cout << "Укажите сколько хотите добавить альбомов?" << endl;
            cout << "Ввод: ";
            cin >> Create;
            InnerAlbom(Create);
            cout << endl;
            cout << "Данные добавленны!" << endl;
            cout << "1 - Назад" << endl;
            cout << "Ввод: ";
            cin >> w;
            if(w == 1){
                goto Albom;
            }
            else{
                cout << endl;
                cout << "Не коректный ввод!" << endl;
                cout << endl;
                goto Albom;
            }
        }
        if(l == 2){
            InnerAvto(Create);
            cout << "Данные добавлены!" << endl;
            cout << "1 - Назад" << endl;
            cout << "Ввод: ";
            cin >> q;
            if(q == 1){
                goto Albom;
            }
            else {
                cout << endl;
                cout << "Не коректный ввод!" << endl;
                cout << endl;
                goto Albom;
            }
        }
        if(l == 3){
            cout << "----Выполнения поиска----" << endl;
            cout << "Для выполнения поиска введите название альбота" << endl;
            cout << "Ввод: ";
            cin >> search;
            InnerSearch(Create, search);
            cout << "1 - Назад" << endl;
            cout << "Ввод: ";
            cin >> q;
            if(q == 1){
                goto Albom;
            }
            else {
                cout << endl;
                cout << "Не коректный ввод!" << endl;
                cout << endl;
                goto Albom;
            }
        }
        if(l == 4){
            return 0;
        }
        else {
            cout << endl;
            cout << "Не коректный ввод!" << endl;
            cout << endl;
            goto Albom;
        }
    }
}
