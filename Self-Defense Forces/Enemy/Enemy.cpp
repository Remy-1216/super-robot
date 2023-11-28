#include "DxLib.h"
#include "Enemy.h"

Enemy::Enemy():m_pos(1000,600)
{
	m_graphEnemy = LoadGraph("image/enemy/enemy.png");
}
Enemy::~Enemy()
{
	DeleteGraph(m_graphEnemy);
}

void Enemy::Update()
{
}

void Enemy::Draw()
{
	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_graphEnemy, true);
}
