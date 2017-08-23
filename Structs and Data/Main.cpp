#include "Person.h"
#include "student.h"
int main()
{
	int age;
	int weight;
	int CHA;
	int STR;
	int DEX;

	Person me;
	me.age = 20;
	me.weight = 109.0f;

	me.charisma = 6;
	me.strength = 300;
	me.dexterity = 0;

	me.cash = 12.0f;

		Person you = { 90, 120.0f, 23, 0, 300, 0 };


		describePerson(me);
		levelUp(me);

		Student cole;
		cole.ID = 179052;
		cole.Course = 1;
		cole.Score = 56.8;

		Student john;
		john.ID = 12006;
		john.Course = 1;
		john.Score = 70.3;

		Student elizabeth;
		elizabeth.ID = 12012;
		elizabeth.Course = 1;
		elizabeth.Score = 98.3;

		Student classroom[3] = { cole, john, elizabeth };
		
		float Average = 0.0f;
		Average = (classroom[1].Score + classroom[2].Score + classroom[3].Score) / 3;

		

		while (true) {}

}