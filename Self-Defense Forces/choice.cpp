#include "DxLib.h"
#include "choice.h"
#include "utill/Game.h"
#include "menu.h"
#include "Player/PlayerBase.h"

namespace
{
	float kSpeed = 10.0f;
}
menu Menu;

choice::choice()
{
}

choice::~choice()
{
}

void choice::Update()
{
	GetHitKeyStateAll(key);
	//bool isMove = false;   //移動中かどうか

	if (key[KEY_INPUT_UP])
	{
		pos.y -= kSpeed;
		//isMove = true;
	}

	if (key[KEY_INPUT_DOWN])
	{
		pos.y += kSpeed;
		//isMove = true;
	}

	if (key[KEY_INPUT_LEFT])
	{
		pos.x -= kSpeed;
		//isMove = true;
	}

	if (key[KEY_INPUT_RIGHT])
	{
		pos.x += kSpeed;
		//isMove = true;
	}

	if()
	if (key[KEY_INPUT_SPACE])
	{
		Menu.Draw();
	}

	m_colRect.SetCenter(pos.x, pos.y, 40,40);
}

void choice::Draw()
{
	if (pos.x > Game::kScreenWindidth)
	{
		pos.x = Game::kScreenWindidth - 80;
	}
	if (pos.x < 0)
	{
		pos.x = 0 + 80;
	}
	if (pos.y > Game::kScreenHeight)
	{
		pos.y = Game::kScreenHeight - 80;
	}
	if (pos.y < 0)
	{
		pos.y = 0 + 80;
	}

	m_colRect.Draw(GetColor(0, 0, 255), false);
}

