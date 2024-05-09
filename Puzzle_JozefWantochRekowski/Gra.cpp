#include "Gra.h"
#include "MyForm.h"

using namespace Puzzle_JozefWantochRekowski;

void Gra::SetTitle(String ^title)
{

	this->Text = title;

};

void Gra::Back()
{

	((MyForm ^)this->parent)->Show();

};