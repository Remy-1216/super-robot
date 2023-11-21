#pragma once
#include "utill/Vec2.h"

class PlayerBase
{	
public:
	PlayerBase();
	~PlayerBase();

	void Update();
	void Draw();

	//プレイヤーの現在位置を取得する
	Vec2 GetPos() const { return m_pos; }

private:
	//プレイヤーのグラフィック
	int m_graphPlayer;
	//表示位置
	Vec2 m_pos;
};

