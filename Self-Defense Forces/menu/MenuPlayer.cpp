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
	DrawString(1010, 100, "à⁄ìÆ", GetColor(0, 0, 0));
	DrawString(1010, 150, "çUåÇ", GetColor(0, 0, 0));
	DrawString(1010, 200, "ê∏ê_", GetColor(0, 0, 0));
	DrawString(1010, 250, "î\óÕ", GetColor(0, 0, 0));

	DrawString(pos.x, pos.y, "Å°", GetColor(255, 255, 255));
}
