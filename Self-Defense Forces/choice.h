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

	//�J�[�\���N���b�N
	void Spaceclick();

	//�J�[�\���̍��W���v���C���[�̍��W�Əd�Ȃ��Ă��邩
	void Playerpos();

	//�N���b�N�������ǂ���
	bool click = false;

private:
	//�J�[�\���\��
	Rect m_colRect;
	//�J�[�\���ʒu
	Vec2 pos = { 20.0f, 20.0f };
	//�v���C���[
	PlayerBase* m_pPlayer;
	
	// �L�[��������Ă���t���[�������i�[����
	char key[256]; 

	//�v���C���[�̈ʒu�ɂ��邩�ǂ���
	bool playerPos = false; 
};

