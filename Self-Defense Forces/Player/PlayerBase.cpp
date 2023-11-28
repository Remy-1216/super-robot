#include "DxLib.h"
#include "PlayerBase.h"

namespace
{
	int kPosX = 80;
	int kPosY = 200;
}

PlayerBase::PlayerBase():m_pos(80,200)
{
	m_graphPlayer = LoadGraph("image/player/player.png");
}

PlayerBase::~PlayerBase()
{
	DeleteGraph(m_graphPlayer);
}

void PlayerBase::Update()
{

}

void PlayerBase::Draw()
{
	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_graphPlayer, true);
}
