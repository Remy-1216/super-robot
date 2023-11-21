#pragma once
class Scene
{
public:
	Scene();
	~Scene();

	void Update();
	void Draw();

private:
	//�萔
	//�}�b�v�`�b�v�̏��
	static constexpr int kChipWidth = 40;
	static constexpr int kChipHeight = 40;
	//�`�b�v��u����
	static constexpr int kChipNumX = Game::kScreenWindidth / kChipWidth;
	static constexpr int kChipNumY = Game::kScreenHeight / kChipHeight;
};

