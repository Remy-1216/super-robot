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
	//�J�[�\���̈ʒu
	Vec2 pos;
	// �L�[��������Ă���t���[�������i�[����
	char key[256];
};