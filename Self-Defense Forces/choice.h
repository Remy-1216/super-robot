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

	//カーソルクリック
	void Spaceclick();

	//カーソルの座標がプレイヤーの座標と重なっているか
	void Playerpos();

	//クリックしたかどうか
	bool click = false;

private:
	//カーソル表示
	Rect m_colRect;
	//カーソル位置
	Vec2 pos = { 20.0f, 20.0f };
	//プレイヤー
	PlayerBase* m_pPlayer;
	
	// キーが押されているフレーム数を格納する
	char key[256]; 

	//プレイヤーの位置にいるかどうか
	bool playerPos = false; 
};

