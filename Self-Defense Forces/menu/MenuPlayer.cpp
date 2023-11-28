#include "DxLib.h"
#include "MenuPlayer.h"

namespace
{
	int move = 50;
}

MenuPlayer::MenuPlayer():pos{980,100}
{
}

MenuPlayer::~MenuPlayer()
{
}

void MenuPlayer::Update()
{
	GetHitKeyStateAll(key);

	if (key[KEY_INPUT_UP])
	{
		pos.y -= move;
	}
	if (key[KEY_INPUT_DOWN])
	{
		pos.y += move;
	}
}

void MenuPlayer::Draw()
{
	
	
	DrawBox(950, 0, 1280, 300,
		GetColor(255, 255, 255), true);
	DrawString(1010, 100, "�ړ�", GetColor(0, 0, 0));
	DrawString(1010, 150, "�U��", GetColor(0, 0, 0));
	DrawString(1010, 200, "���_", GetColor(0, 0, 0));
	DrawString(1010, 250, "�\��", GetColor(0, 0, 0));

	DrawString(pos.x, pos.y, "��", GetColor(255, 255, 255));
}
