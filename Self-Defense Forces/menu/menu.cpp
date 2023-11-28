#include"DxLib.h"
#include "menu.h"



menu::menu()
{

}

menu::~menu()
{
}

void menu::Update()
{
}

void menu::Draw()
{
	DrawBox(1000,0,1280,300,
		GetColor(255,255,255),true);
	DrawString(1010, 100, "ƒ^[ƒ“I—¹", GetColor(0, 0, 0));
	DrawString(1010, 150, "î•ñ", GetColor(0, 0, 0));
	DrawString(1010,200 , "İ’è", GetColor(0, 0, 0));
}
