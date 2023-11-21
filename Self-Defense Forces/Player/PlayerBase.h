#pragma once
#include "utill/Vec2.h"

class PlayerBase
{	
public:
	PlayerBase();
	~PlayerBase();

	void Update();
	void Draw();

	//�v���C���[�̌��݈ʒu���擾����
	Vec2 GetPos() const { return m_pos; }

private:
	//�v���C���[�̃O���t�B�b�N
	int m_graphPlayer;
	//�\���ʒu
	Vec2 m_pos;
};

