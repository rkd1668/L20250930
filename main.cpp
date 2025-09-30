#include <iostream>
#include <bitset>

using namespace std;

#define WorldStatic					0b00000001
#define WorldDynamic				0b00000010
#define Pawn						0b00000100
#define PhysicsBody					0b00001000
								//  0b00000100 or
								//  0b00000100 1> �������� true
int main()
{
	unsigned char MyActorType = Pawn | PhysicsBody;
	string MyActorTypes = "Pawn, Physics";
	if (MyActorType & Pawn)
	if (MyActorType & Pawn)
	{
		cout << "Pawn" << endl;
	}
	else
	{
		cout << "Pawn X" << endl;

	}


	return 0;
}