#pragma once
#include <iostream>
#include "Cercle.h"

using namespace std;

//Заполнение массива альбомов вручную
void InnerAlbom(int Size);

//Заполнение массива альбомов автоматически
void InnerAvto(int Size);

//Выполнения поиска альбомов
void InnerSearch(int Size, string search);

//Заполнение круга
Circle CreateCircle();

//Ввод данных 1-го кола автоматически
Circle OneAvtoCreateCircle();

//Ввод данных 2-го кола автоматически
Circle TwoAvtoCreateCircle();
