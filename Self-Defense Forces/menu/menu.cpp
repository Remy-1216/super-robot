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
	DrawString(1010, 100, "�^�[���I��", GetColor(0, 0, 0));
	DrawString(1010, 150, "���", GetColor(0, 0, 0));
	DrawString(1010,200 , "�ݒ�", GetColor(0, 0, 0));
}
