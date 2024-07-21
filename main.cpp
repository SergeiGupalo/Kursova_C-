#include <iostream>
#include "Alboms.h"
#include "Cercles.h"

using namespace std;

int main(){
    
    char J;

    cout << "---Меню---" << endl;
    cout << "1 - Альбомы" << endl;
    cout << "2 - Коло" << endl;
    cout << "3 - Выход" << endl;
    cout << "Ввод: ";
    cin >> J;

    switch(J){
        case'1':
            IntroAlbom();
        case'2':
            IntroCercle();
        case'3':
            return 0;
    }
}
