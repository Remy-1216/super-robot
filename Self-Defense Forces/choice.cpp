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
	if (click == false)
	{
		if (key[KEY_INPUT_UP])
		{
			pos.y -= kSpeed;
		}
		if (key[KEY_INPUT_DOWN])
		{
			pos.y += kSpeed;
		}
		if (key[KEY_INPUT_LEFT])
		{
			pos.x -= kSpeed;
		}
		if (key[KEY_INPUT_RIGHT])
		{
			pos.x += kSpeed;
		}
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

void choice::Spaceclick()
{
	if (key[KEY_INPUT_SPACE])
	{
		Menu.Draw();
		Menu.Update();
		click = true;
	}
	else
	{
		click = false;
	}
}

void choice::Playerpos()
{
	const Vec2 target = m_pPlayer->GetPos();
}

