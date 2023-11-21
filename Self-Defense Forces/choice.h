#pragma once
#include "utill/Rect.h"
class PlayerBase;

class choice
{
public:
	choice();
	~choice();
	void Update();
	void Draw();

private:
	//カーソル表示
	Rect m_colRect;
	//カーソル位置
	Vec2 pos = { 20.0f, 20.0f };
	//プレイヤー
	PlayerBase* m_pPlayer;
};

