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
	//�J�[�\���\��
	Rect m_colRect;
	//�J�[�\���ʒu
	Vec2 pos = { 20.0f, 20.0f };
	//�v���C���[
	PlayerBase* m_pPlayer;
};

