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
		GetColor(255,255,25),true);
	DrawString(1010, 100, "���j���[��ʂł��B", GetColor(0, 0, 0));
	DrawString(1010, 150, "�㉺�L�[�������A�G���^�[�������ĉ������B", GetColor(0, 0, 0));
	DrawString(1010,200 , "�Q�[��", GetColor(0, 0, 0));
	DrawString(1010,250, "�ݒ�", GetColor(0, 0, 0));
}
