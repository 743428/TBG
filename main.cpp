#include<iostream>
#include<Windows.h>
using namespace std;

//global variables
string inventory[10];
int health = 100;

//function declarations
void Monster();
void battle(int MonsterHealth, char type);
void NPC(int x);

int main() {
	int room = 1;
	string input;
	int turns = 0;
//color change
	system("Color 5A");
	

	cout << " You wake up to find yourself in dark room you look around and there's only " << endl;

	while (input != "q" && turns<20 && health > 0) {
		cout << "inventory, " << endl;
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " ";
		cout << endl << endl;

		cout << "You have had " << turns << " turns." << endl;
		cout << "You have " << 20 - turns << " turn left" << endl << endl;
		turns++;

		cout << "Your health is " << health << endl;
		
		 
		
		
		switch (room) {
		case 1:
			if (inventory[4]!= "sword") {
				cout << " you got a sword!" << endl;
				inventory[4] = "sword";
			cout << "You are in the dark room. You can go to the living room North(N) or you can go East(E)." << endl;
			cin >> input;
			if (input == "N")
				room = 2;
			else if (input == "E")
				room = 4;

			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:
			cout << "You are in room 2. You can go South(S) or East(E)." << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else if (input == "E")
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "You are in room 3. You can go South(S), West(W) or East(E) " << endl;
			cin >> input;
			if (input == "S")
				room = 4;
			else if (input == "W")
				room = 2;
			else if (input == "E")
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 4:
			cout << "You are in room 4. You can go North(N), West(W) or East(E)." << endl;
			cin >> input;
			if (input == "N")
				room = 3;
			else if (input == "W")
				room = 1;
			else if (input == "E")
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 5:
			cout << "You are in room 5. You can go South(S), North(N) or East(E)." << endl;
			cin >> input;
			if (input == "S")
				room = 10;
			else if (input == "N")
				room = 6;
			else if (input == "E")
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 6:
			cout << "You are in room 6. You can go South(S), West(W) or East(E)." << endl;
			cin >> input;
			if (input == "S")
				room = 5;
			else if (input == "W")
				room = 3;
			else if (input == "E")
				room = 7;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 7:
			cout << "You are in room 7. You can go South(S) and West(W)." << endl;
			cin >> input;
			if (input == "S")
				room = 8;
			else if (input == "W")
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 8:
			cout << "You are in room 8. You can go South(S), West(W) or North(N)." << endl;
			cin >> input;
			if (input == "S")
				room = 9;
			else if (input == "W")
				room = 5;
			else if (input == "N")
				room = 7;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 9:
			cout << "You are in room 9. You can go West(W) or North(N)." << endl;
			cin >> input;
			if (input == "W")
				room = 10;
			else if (input == "N")
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 10:
			cout << "You are in room 10. You can go North(N) or East(E)." << endl;
			cin >> input;
			if (input == "N")
				room = 5;
			else if (input == "E")
				room = 9;
			else
				cout << "sorry, not an option." << endl;
			break;
		}

	} while (input != "q");
}


void Monster() { //function definition
	int num = rand() % 100 + 1;
	if (num < 20) { //20% chance
		cout << "a skeleton appears!" << endl;
		battle(20, 's');
	}
	else if (num < 50) { //30% Chance
		cout << "a zombie appears!" << endl;
		battle(30, 'z');
		
	}
	else if (num < 75) { //25% chance
		cout << "a spider appears!" << endl;
		battle(10, 'p');
	}
	else //25% chance
		cout << "no monsters" << endl;

}

//battle system definition 
void battle(int MonsterHealth) {
	if (type == 'p')
		damage = rand() % 20;//0-19 damage
	else if (type == 's')
		damage = rand() % 30;
	else if (type == 'z')
		damage = 30;
	int damage;
	string input;
	while (health > 0 && MonsterHealth > 0) {
		//moster fight first
		damage = rand() % 20;
		cout << "the monster bites you for " << damage << " damage." << endl;
		health -= damage;
		cout << "You have " << health << " health left" << endl;
		//human attack back
		if (inventory[4] == "sword") {
			damage = rand() % 60 + 20;
			cout << , "you use your sword against the enemy" << endl;
		}
		else {
			damage = rand() % 50 + 10;
			cout << "you hit the monster with your fist" << endl;
		}
		cout << "you attack the monster for " << damage << " damage" << endl;
		MonsterHealth -= damage;

	}
	if (MonsterHealth <= 0)
		cout << "you defeated the monster" << endl << endl;
	else cout << "you died." << endl << endl;
	    
}
void NPC(int x) {
	if (x == 0) {
		//generate a random number here
		//add MORE if statements here that print out different comments based on what the npc can say  
		cout << " " << endl;
	}
	if (x == 1) {
		cout << " " << endl;
	}
	if (x == 2) {
		cout << " " << endl;
	}
}  
