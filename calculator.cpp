//calculator.cpp : A sample runescape xp calculator
//(C) Apr, 2017 Steven Braham

//include headers
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

//global variables
int * levels = new int[120];
int currentXp = 0;
int requestedLevel = 0;
double xpPerAction = 0;
int costsPerAction;

//method signatures
int xpToLevel(int xp);
int levelToXp(int level);
void loadLevelsFromArray();

int main() {
    loadLevelsFromArray();

    //render welcome screen
   	cout << "Welcome to Runescape xp Calculator\n(C)2017 Steven Braham\n\n";

   	//read data
   	cout << "Your current XP:";
	cin >> currentXp;
    cout << "Level you want to achieve:";
    cin >> requestedLevel;
    cout << "XP gain per action:";
    cin >> xpPerAction;
    cout << "Costs per action (GP):";
    cin >> costsPerAction;

    //calculate time and money
    
    //first adjust variables so they don't fall out of range
   	if (currentXp < 0){
        currentXp = 0;
    }
    if (currentXp > 104273166){
        currentXp = 104273166;
    }
    if (requestedLevel < 1){
        requestedLevel = 1;
    }
    if (requestedLevel > 120){
        requestedLevel = 120;
    }

    //calculate current level based on xp
    
    int currentLevel =   xpToLevel(currentXp);
    return 0;
}

void loadLevelsFromArray(){
    //load all required xp per level into the array
    std::ifstream infile("levels");
    int xpPerLevel;
    int index = 0;
    while (infile >> xpPerLevel){
        	levels[index] = xpPerLevel;
        	index++;
    }
}

int xpToLevel(int currentXp){
    int level = 0;
    //loop over array
    for (int i = 0; i < 120; i++)
    {
        if (levels[i]>currentXp){
            level = i;
            break;
        }
    }
    return level;
}

int levelToXp(int level){
    return levels[level - 1];
}
