#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int gryffindor = 0;
	int hufflepuff = 0;
	int ravenclaw = 0;
	int slytherin = 0;
	int answer1;
	int answer2;
	int answer3;
	int answer4;
	cout << "The Sorting Hat Quiz! \n";
	cout << "When I'm dead, I want people to remeber me as: \n";
	cout << "1) The Good\n";
	cout << "2) The Great\n";
	cout << "3) The Wise\n";
	cout << "4) The Bold\n";
	cin >> answer1;
	switch (answer1) {
	case 1:
		hufflepuff += 1;
		break;

	case 2:
		ravenclaw += 1;
		break;

	case 3:
		slytherin += 1;
		break;

	case 4:
		gryffindor;
		break;
	default:
		cout << "Invalid input.";
	}

	cout << "Q2) Dawn or Dusk?\n";
	cout << "1) Dawn \n";
	cout << "2) Dusk \n";

	cin >> answer2;
	if (answer2 == 1) {
		gryffindor += 1;
		ravenclaw += 1;
	}
	else if (answer2 == 2) {
		hufflepuff += 1;
		slytherin += 1;
	}
	else {
		cout << "Invalid input";
	}
	//question 3
	cout << "Q3) Which kind of instrument most pleases your ear? \n";
	cout << "1) The violin\n";
	cout << "2) The trumpet\n";
	cout << "3) The piano\n";
	cout << "4) The drum\n";
  cin>>answer3;
	if (answer3 == 1) {
		slytherin += 1;
	}
	else if (answer3 == 2) {
		hufflepuff += 1;

	}
	else if (answer3 == 3) {
		ravenclaw += 1;
	}
	else if (answer3 == 4) {
		gryffindor += 1;
	}
	else {
		cout << "Invalid input";
	}
	//question 4
	cout << "Q4) Which road tempts you most?\n";
	cout << "1) The wide, sunny grassy lane \n";
	cout << "2) The narrow, dark, lantern-lit alley \n";
	cout << "3) The twisting, leaf-strewn path through woods \n";
	cout << "4) The cobbled street lined (ancient buildings) \n";
  cin>>answer4;
	if (answer4 == 1) {
		hufflepuff += 1;
	}
	else if (answer4 == 2) {
		slytherin += 1;
	}
	else if (answer4 == 3) {
		gryffindor += 1;
	}
	else if (answer4 == 4) {
		ravenclaw += 1;
	}

	else {
		cout << "Invalid input\n";
	}
	int max = 0;
	string house;
	if (gryffindor > max) {
		max = gryffindor;
		house = "Gryffindor";

	}
	if (hufflepuff > max) {
		max = hufflepuff;
		house = "Hufflepuff";
	}
	if (ravenclaw > max) {
		max = ravenclaw;
		house = "Ravenclaw";
	}
	if (slytherin > max) {
		max = slytherin;
		house = "Slytherin";
	}

	cout << house << "!\n";


}
