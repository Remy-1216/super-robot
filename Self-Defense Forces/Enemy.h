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
	//�v���C���[�̃O���t�B�b�N
	int m_graphEnemy;
	//�\���ʒu
	Vec2 m_pos;
};

