#pragma once
#include "../utill/Vec2.h"

class PlayerBase
{	
public:
	PlayerBase();
	~PlayerBase();

	void Update();
	void Draw();

	//�\���ʒu
	Vec2 m_pos;
private:
	//�v���C���[�̃O���t�B�b�N
	int m_graphPlayer;
};

