#pragma once
#include <iostream>

using namespace std;

class Music{
protected:
    int data;
    string name;
    int numberSold;
    string CD;

public:
    Music();
    Music(int Data, string Name, int Sold, string DVD);
    void setData(int Data);
    void setName(string Name);
    void setSold(int Sold);
    void setDVD(string DVD);

    int getData();
    string getName();
    int getSold();
    string getDVD();
};
