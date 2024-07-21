#include "Music.h"

Music::Music(){
    data = 0;
    name = "";
    numberSold = 0;
    CD = "";
}
Music::Music(int Data, string Name, int Sold, string DVD){
    data = Data;
    name = Name;
    numberSold = Sold;
    CD = DVD;
}

void Music::setData(int Data){ data = Data; }
void Music::setName(string Name){ name = Name; }
void Music::setSold(int Sold){ numberSold = Sold; }
void Music::setDVD(string DVD){ CD = DVD; }
int Music::getData(){ return data; }
string Music::getName(){ return name; }
int Music::getSold(){ return numberSold; }
string Music::getDVD(){ return CD; }
