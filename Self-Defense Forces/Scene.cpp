#include"DxLib.h"
#include"utill/Game.h"
#include "Scene.h"
Scene::Scene()
{
}

Scene::~Scene()
{
}

void Scene::Update()
{
	
}

void Scene::Draw()
{
	//�O���b�h���̕\��
		//�c��
	for (int x = 0; x < kChipNumX; x++)
	{
		DrawLine(x * kChipWidth, 0, x * kChipWidth, Game::kScreenHeight, GetColor(255, 255, 255));
	}

	//����
	for (int y = 0; y < kChipNumY; y++)
	{
		DrawLine(0, y * kChipHeight, Game::kScreenWindidth, y * kChipHeight, GetColor(255, 255, 255));
	}	
}
