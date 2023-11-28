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
	//グリッド線の表示
		//縦線
	for (int x = 0; x < kChipNumX; x++)
	{
		DrawLine(x * kChipWidth, 0, x * kChipWidth, Game::kScreenHeight, GetColor(255, 255, 255));
	}

	//横線
	for (int y = 0; y < kChipNumY; y++)
	{
		DrawLine(0, y * kChipHeight, Game::kScreenWindidth, y * kChipHeight, GetColor(255, 255, 255));
	}	
}
