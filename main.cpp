#include <iostream>

using namespace std;

class Engine
{
public:
	World MyWorld;

	void Run()
	{
		while (true)
		{
			Input();
			Tick();
			Render();
		}
	}
	void Input()
	{

	}
	void Tick()
	{

	}
	void Render()
	{

	}
};

class World
{
public:
	Wall MyWall[100];
	Floor MyFloor[100];
	Player MyPlayer;
	Monster MyMonster;
	Goal MyGoal;
	void GameOver()
	{

	}
};

class Wall 
{
public:
	char WallShape;
};

class Floor
{
public:
	char FloorShape;
};

class Player
{
public:
	int PlayerX;
	int PlayerY;
	char PlayerShape;
	void Move()
	{
	};
};

class Monster
{
public:
	int MonsterX;
	int MonsterY;
	char MonsterShape;
	void Move()
	{
	};
};

class Goal
{
public:
	int GoalX;
	int GoalY;
};


int main()
{
	Engine* MyEngine = new Engine();
	MyEngine -> Run();
	delete MyEngine;
	MyEngine = nullptr;

	return 0;
}