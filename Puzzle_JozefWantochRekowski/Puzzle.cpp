#include "Puzzle.h"
void Puzzle::Inicjalizacja()
{
	this->liczba_krokow = 0;

	for (int i = 0; i < 25; i++)
	{

		this->wzor[i] = i;
		this->los[i] = i;
	
	}

};


void Puzzle::SetGracz(string nick)
{

	this->nick = nick;

};


string Puzzle::GetGracz()
{

	return nick;

};


void Puzzle::Losowanie()
{

	random_device random;
	shuffle(los, los + 25, random);

};


int Puzzle::Zwroc(int a)
{

	return los[a];

};


int Puzzle::Kroki()
{
	
	liczba_krokow++;
	
	return liczba_krokow;

};

int Puzzle::KrokiZwroc()
{
	
	return liczba_krokow;

};


void Puzzle::SetSwap_a(int swap_a)
{

	this->swap_a = swap_a;

};

void Puzzle::SetSwap_b(int swap_b)
{

	this->swap_b = swap_b;

};

int Puzzle::GetSwap_a()
{

	return swap_a;

};

int Puzzle::GetSwap_b()
{

	return swap_b;

};

void Puzzle::Swap()
{

	swap(los[swap_a], los[swap_b]);

};


bool Puzzle::Sprawdz()
{
	
	if (los[0]==0 && los[1]==1 && los[2]==12 && los[3]==18 && los[4]==19 && los[5]==20 && los[6]==21 && los[7]==22 && los[8]==23 && los[9]==24
					&& los[10]==2 && los[11]==3 && los[12]==4 && los[13]==5 && los[14]==6 && los[15]==7 && los[16]==8 && los[17]==9 && los[18]==10
					&& los[19]==11 && los[20]==13 && los[21]==14 && los[22]==15 && los[23]==16 && los[24]==17)
	{

		return true;
	
	}
	else
	{

		return false;
	
	}

};