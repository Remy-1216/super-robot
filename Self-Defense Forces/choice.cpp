#include "DxLib.h"
#include "choice.h"
#include "utill/Game.h"
#include "utill/Key.h"
#include "menu/menu.h"
#include "menu/MenuPlayer.h"
#include "Player/PlayerBase.h"

namespace
{
	float kSpeed = 10.0f;
	Vec2 aa(0,0);
}
menu Menu;
MenuPlayer menuPlayer;
PlayerBase player;
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
		Playerpos();
		Menu.Draw();
		Menu.Update();
		click = true;
		if (playerPos == true)
		{
			menuPlayer.Draw();
			menuPlayer.Update();
		}
	}
	else
	{
		SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
		click = false;
	}
	
}

void choice::Playerpos()
{
	int playerX = player.m_pos.x;
	int playerY = player.m_pos.y;
	int posX = pos.x -20.0f;
	int posY = pos.y -20.0f;

      	if ((playerX - posX == 0) && (playerY - posY == 0))
	{
		playerPos = true;
	}
}

