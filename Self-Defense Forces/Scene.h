#pragma once
class Scene
{
public:
	Scene();
	~Scene();

	void Update();
	void Draw();

private:
	//定数
	//マップチップの情報
	static constexpr int kChipWidth = 40;
	static constexpr int kChipHeight = 40;
	//チップを置く数
	static constexpr int kChipNumX = Game::kScreenWindidth / kChipWidth;
	static constexpr int kChipNumY = Game::kScreenHeight / kChipHeight;
};

