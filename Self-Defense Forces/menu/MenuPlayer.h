#pragma once
#include "../utill/Vec2.h"
class MenuPlayer
{
public:
	MenuPlayer();
	~MenuPlayer();

	void Update();
	void Draw();
private:
	//カーソルの位置
	Vec2 pos;
	// キーが押されているフレーム数を格納する
	char key[256];
};