#include <iostream>

class Entity
{
private:

public:
	void TakeDamage(int amt)
	{
	};
};

class Turtle : Entity
{
public:
	virtual void TakeDamage(int amt);
};

class Fighter
{
private:
	int m_health;
	int m_power;

public:
	void TakeDamage(int amt);
	void DoDamage(Fighter &other);
};

class Fireball
{
private:
	int power;

public:
	void DoDamage(Entity entity);
	{
		entity.TakeDamage(power);
	}

};
void Fighter::TakeDamage(int amt)
{

}

void Fighter::DoDamage(Fighter &other)
{

}

int main()
{
	Fighter *ryu = new Fighter();
	ryu->DoDamage(*ryu);
}