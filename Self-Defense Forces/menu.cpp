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
	DrawString(1010, 100, "メニュー画面です。", GetColor(0, 0, 0));
	DrawString(1010, 150, "上下キーを押し、エンターを押して下さい。", GetColor(0, 0, 0));
	DrawString(1010,200 , "ゲーム", GetColor(0, 0, 0));
	DrawString(1010,250, "設定", GetColor(0, 0, 0));
}
