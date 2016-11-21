#include <iostream>

using namespace std;

struct Ducky{
	string mall = "mallard";
	string buff = "bufflehead";
	string north = "northern shoveler";
	string northp = "northern pintail";
	
};

struct things {
	int stuff;
	double thoseThings;
	Ducky ducksEverywhere;
};


int main() {
	things makeChanges;

	cout << "This is my change" << endl;
	int getDucky = duckyFunction();

	return 0;
}

int duckyFunction() {

	//do stuff
	cout << "We got a duck!" << endl << endl;
	cout << "  .-~~~~-." << endl;
	cout << " {  o     }" << endl;
	cout << " /       /" << endl;
	cout << "`--r'   {    ,___.-'," << endl;
	cout << "  /      `-~         '," << endl;
	cout << " {                    '" << endl;
	cout << "  \                  /" << endl;
	cout << "   \                /" << endl;
	cout << "  ~ ~~~~~~~~~~~~~~~~~ ~" << endl;
	cout << " ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	cout << "  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	cout << "     ~ ~ ~ ~ ~ ~ ~ ~" << endl;

	//ducky
	cout << "\n\n\n Types of ducks!" << endl;
	Ducky duck;
	printf("%s, %s, %s, %s and %s", duck.mall, duck.buff, duck.north, duck.northp);
	//cout << duck.mall << endl << duck.buff << endl << duck.north << endl << duck.northp << endl;
	return 1;
}

/*
  .-~~~~-.
 {  o     }
 /       /
`--r'   {    ,___.-',
  /      `-~         ',
 {                    '
  \                  /
   \                /
  ~ ~~~~~~~~~~~~~~~~~ ~
 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
     ~ ~ ~ ~ ~ ~ ~ ~
	 */