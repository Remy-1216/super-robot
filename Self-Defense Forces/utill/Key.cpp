#include "Key.h"
#include "DxLib.h"
namespace
{
	//�O�̃t���[���̃p�b�h�����������
	int lastPad = 0;
	//���̃t���[���̃p�b�h�����������
	int nowPad = 0;
	// �L�[��������Ă���t���[�������i�[����
	char key[256];
}


namespace Key
{
	void Update()
	{
		//�O�̃t���[���Ɏ擾�����p�b�h������Â����ɂ���
		lastPad = nowPad;
		//���݂̃p�b�h�̏����擾����
		nowPad = GetHitKeyStateAll(key);

	}
	bool IsPress(int key)
	{
		return (nowPad & key);
	}
	bool IsTrigger(int key)
	{
		bool isNow = (nowPad & key);  //���̃t���[��
		bool isLast = (lastPad & key); //�O�̃t���[��

		if (isNow && !isLast)			//���̃t���[���ɉ�����Ă��đO��̃t���[���ɉ�����Ă��Ȃ�
		{
			return true;
		}
		return false;
	}
	bool IsRelase(int key)
	{
		bool isNow = (nowPad & key);  //���̃t���[��
		bool isLast = (lastPad & key); //�O�̃t���[��

		if (!isNow && isLast)
		{
			return true;
		}
		return false;
	}
}