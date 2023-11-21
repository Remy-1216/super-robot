#pragma once
#include "utill/Vec2.h"
class Enemy
{
	Enemy();
	~Enemy();

	void Update();
	void Draw();

private:
private:
	//プレイヤーのグラフィック
	int m_graphEnemy;
	//表示位置
	Vec2 m_pos;
};

