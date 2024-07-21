#include "Music.h"
#include "Function.h"
#include "Alboms.h"
#include "Cercle.h"
#include <string>
#include <fstream>

Music *arrayDisco[3];
int y;
//Заполнение массива альбомов вручную
void InnerAlbom(int Size){
    
    int data, numberSold;
    string name, CD;
    for(int i = 0; i < Size; i++){
        cout << "Укажите данные по " << i + 1 << " альбому" << endl;
        cout << "Введите следующие данные через пробел: " << endl;
        cout << "Дата выхода, Название, Количество продаж, продан на CD-ROW или DVD" << endl;
        cout << "Ввод: ";
        cin >> data >> name >> numberSold >> CD;
        arrayDisco[i] = new Music(data, name, numberSold, CD);
        }
}

//Заполнение массива альбомов автоматически
void InnerAvto(int Size){
    arrayDisco[0] = new Music(2004, "Rock", 3005, "CD-ROW");
    arrayDisco[1] = new Music(2008, "Kiss", 6554, "DVD");
    arrayDisco[2] = new Music(1990, "Hevi", 5456, "CD-ROW");
}


//Выполнения поиска альбомов
void InnerSearch(int Size, string search){
    string result;
    for(int i = 0; i < Size; i++){
        if(search == arrayDisco[i]->getName()){
            result = "Проданных альбомов " + search + " " + to_string(arrayDisco[i]->getSold()) + " шт.";
            break;
        }
        else{
            result = "Совпадений не найденно!";
        }
    }
    cout << endl;
    cout << result;
    cout << endl;
    cout << "1 - Сохранить данные в файл" << endl;
    cout << "2 - Не сохранять данные в файле" << endl;
    cout << "Ввод: ";
    cin >> y;
    cout << endl;
    if(y == 1){
        ofstream f("Albom.txt");
        f << result << endl;
        cout << "Файл Albom.txt сохранен! Смотрите в папке с програмой." << endl;
        cout << endl;
    }
    if(y == 2){
        cout << "Файл не сохранен!" << endl;
    }
    for(int i = 0; i < Size; i++){
        delete arrayDisco[i];
    }
}

//Ввод данных кола
Circle CreateCircle(){
    int c, r;

    cout << "Центр круга = ";
    cin >> c;
    cout << "Радиус круга = ";
    cin >> r;

    return Circle(c, r);
}

//Ввод данных 1-го кола автоматически
Circle OneAvtoCreateCircle(){
    int c = 7;
    int r = 9;

    return Circle(c, r);
}

//Ввод данных 2-го кола автомаатически
Circle TwoAvtoCreateCircle(){
    int c = 3;
    int r = 6;

    return Circle(c, r);
}
