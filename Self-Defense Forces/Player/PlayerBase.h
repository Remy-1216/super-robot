#pragma once
#include "../utill/Vec2.h"

class PlayerBase
{	
public:
	PlayerBase();
	~PlayerBase();

	void Update();
	void Draw();

	//表示位置
	Vec2 m_pos;
private:
	//プレイヤーのグラフィック
	int m_graphPlayer;
};

