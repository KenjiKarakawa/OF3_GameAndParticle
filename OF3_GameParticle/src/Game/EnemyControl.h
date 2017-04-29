#pragma once
#include "Enemy.h"
#include "BulletControl.h"

class EnemyControl
{
private:
	vector<Enemy*> enemy;
	int lastTime; //�ltimo momento que o inimigo foi criado

public:
	EnemyControl();

	void Update(int time, float deltaTime, ofVec2f playerPos, BulletControl *bullet);
	void Draw();

};