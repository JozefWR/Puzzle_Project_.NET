#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <random>
#include <cstdlib>

using namespace std;



class Puzzle
{
protected:

	int swap_a;
	int swap_b;
	string nick;
	string wygrana;
	int liczba_krokow;
	int wzor[25];
	int los[25];

public:

	void Inicjalizacja();

	void SetGracz(string nick);
	string GetGracz();

	void Losowanie();

	void SetSwap_a(int swap_a);
	void SetSwap_b(int swap_b);
	int GetSwap_a();
	int GetSwap_b();

	void Swap();

	bool Sprawdz();

	int Zwroc(int a);

	int Kroki();
	int KrokiZwroc();
};

#endif