#include "11_����1.h"
/*
���� 1. Getter + Setter ����

- �ڵ� ���� ������ �����.

- Ŭ������ 5�� �̻�

- �÷��̾� �ɷ�ġ�� 7�� (�ʼ� �ɷ�ġ : ��)
�� �� �ɷ�ġ�� ���� ũ��Ƽ�� �߻�

- ������ ���� 3����
�� ��з� : ����, ��, �Ǽ�����, ����
�� �ߺз� : ��з��� �ش��ϴ� �׸�� ������ 2����
�� ���� : ���� �ð��� ������ �ǽ� ����� �������� �����.

- �÷��̾� ��ų 2�� �̻� / �� ��ų�� 1�� �̻�
�� ��ų�� ��Ÿ�� ���� ��Ų��.

- ��Ʈ�� ������ ����� �� ��Ʈ�� Ȱ���Ѵ�.

*/

AutoBattleGame::AutoBattleGame()
{
	enemy = new ABG_Enemy;
	player = new ABG_Player;
	
}

AutoBattleGame::~AutoBattleGame()
{
	delete enemy;
	delete player;
	for (int i = 0; i < 6; i++)
	{
		delete equipments[i];
	}
}

void AutoBattleGame::playGame()
{
	while (true)
	{
		//system("cls");
		// player�� speed�� enemy���� ���� ��� player����
		if (enemy->getSpeed() < player->getSpeed())
		{
			// player ����
			enemy->getDamage(player->attack());
			// enemy ���
			if (enemy->getHP() <= 0)
			{
				enemy->setHP(0);
				break;
			}
			// enemy �İ�
			int enemyAttack = enemy->attack();
			player->getDamage(enemyAttack % 100, enemyAttack / 100);
			if (player->getHP() <= 0)
			{
				player->setHP(0);
				break;
			}
		}
		// enemy�� speed�� player���� ���� ��� enemy����
		else
		{
			// enemy ����
			int enemyAttack = enemy->attack();
			player->getDamage(enemyAttack % 100, enemyAttack / 100);
			// �÷��̾� ���
			if (player->getHP() <= 0)
			{
				player->setHP(0);
				break;
			}
			// player �İ�
			enemy->getDamage(player->attack() - player->getDef());
			// enemy ���
			if (enemy->getHP() <= 0)
			{
				enemy->setHP(0);
				break;
			}
		}
		cout << enemy->getHP() << endl;
		cout << player->getHP() << endl;
		cout << endl;
		Sleep(3000);
	}
	if (enemy->getHP() <= 0)
	{
		cout << "Player Win" << endl;
	}
	else
	{
		cout << "Enemy Win" << endl;
	}
}