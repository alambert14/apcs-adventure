#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

static string name;
//The ultimate ending.
void stupidGames()
{
    cout << "Slime soccer strikes again. You turn around...and..." << endl;
    std::string filepath = "Z:\\12th Grade\\Test\\stupid_games.jpg";
	std::string _Command = "rundll32.exe \"%ProgramFiles%\\Windows Photo Viewer\\PhotoViewer.dll\", ImageView_Fullscreen ";

	_Command += filepath;

	system(_Command.c_str());
}
void catchUp()
{
    cout << "There's only 10 minutes left of class."  << endl;
    cout << "Your fingers are flying, trying to make up lost time." << endl;
    cout << "Suddenly, it seems as if an external power is trying to control you." << endl;
    cout << "You reach for the mouse..." << endl;
    cout << "\"No...\" you whisper." << endl;
    cout << "You open a new tab in Internet Explorer..." << endl;
    cout << "\"This can't be happening...\"" << endl;
    cout << "You type a familiar URL into the address bar, and suddenly..." << endl;
    cout << "------------------------------" << endl;
    cout << "Press any key and enter to continue..." << endl;
    string pause;
    cin >> pause;
    cout << "------------------------------" << endl;
    stupidGames();

}
void checkCode()
{
    cout << "\"" + name + ", the rest of the class finished this project three days ago.\"" << endl;
    cout << "\"Oh...\" you reply, not necessarily surprised." << endl;
    cout << "You better get cracking if you want to catch up with the class." << endl;
    cout << "But I mean, you're already so behind, would it hurt to waste another day?" << endl;
    cout << "(1) Play stupid games" << endl;
    cout << "(2) Try and catch up" << endl;
    string choice;
    cin >> choice;
    cout << "------------------------------" << endl;
    if(choice == "1")
    {
        stupidGames();
    }
    else if(choice == "2")
    {
        catchUp();
    }

}
void continueCoding()
{
    cout << "You keep chugging along, determined to make your bug actor move a mere 5 pixels in Greenfoot." << endl;
    cout << "You compile your code for the 13th time and you notice that your code finally works!" << endl;
    cout << "Should you tell Mr. Clifford you finally finished your project?" << endl;
    cout << "Or do you have other matters to attend to...?" << endl;
    cout << "(1) Have Mr. Clifford check your code" << endl;
    cout << "(2) Stupid games." << endl;
    string choice;
    cin >> choice;
    cout << "------------------------------" << endl;
    if(choice == "1")
    {
        checkCode();
    }
    else if(choice == "2")
    {
        stupidGames();
    }

}
void resistTemptation()
{
    cout << "No...you musn't..." << endl;
    cout << "You may not be up for code today, but to be disrespectful in class?  Unthinkable." << endl;
    cout << "Perhaps you can give your code another shot..." << endl;
    cout << "(1) Continue coding." << endl;
    cout << "(2) Give into temptation." << endl;
    string choice;
    cin >> choice;
    cout << "------------------------------" << endl;
    if(choice == "1")
    {
        continueCoding();
    }
    else if(choice == "2")
    {
        stupidGames();
    }
}
void sleep()
{
    cout << "Your friend in the seat next to you is violently shaking your chair." << endl;
    cout << "\"Wake up " + name + "!!!\" they harshly whisper in your ear as you emerge from your slumber." << endl;
    cout << "\"There's this game I've been meaning to play, want to play a round with me?\"" << endl;
    cout << "Do you join the game? (y/n)" << endl;
    string yesno;
    cin >> yesno;
    cout << "------------------------------" << endl;
    if(yesno == "Y" || yesno == "y")
    {
        stupidGames();
    }
    else if(yesno == "N" || yesno == "n")
    {
        resistTemptation();
    }
}
void giveUp()
{
    cout << "Thank goodness we're about to break for a Tech Newsy Item!" << endl;
    cout << "The screens are turned off and your misery is extinguished." << endl;
    cout << "Oh no...the article is about a microwave that connects to the Internet..." << endl;
    cout << "Your eyes begin flutter shut, yearning for the powerful drug of sleep." << endl;
    cout << "The battle cannot be won............." << endl;
    cout << "....................................." << endl;
    cout << "...................." << endl;
    cout << ".........." << endl;
    cout << "....." << endl;
    cout << ".." << endl;
    cout << "." << endl;
    cout << "." << endl;
    cout << "." << endl;
    cout << "." << endl;
    cout << "." << endl;
    cout << "------------------------------" << endl;
    cout << "Press any key and enter to continue..." << endl;
    string pause;
    cin >> pause;
    cout << "------------------------------" << endl;
    sleep();
}

void ready2Code()
{
    cout << "You want to get a 5 on the AP exam, of course. Not to mention you love code..." << endl;
    cout << "(Why else would you be here at nine in the morning)" << endl;
    cout << "But it seems like your code is being fussy today, not working as planned. Do you..." << endl;
    cout << "(1) Persevere?" << endl;
    cout << "(2) Give up?" << endl;
    cout << "(3) Stupid games." << endl;
    string choice;
    cin >> choice;
    cout << "------------------------------" << endl;
    if(choice == "1")
    {
        continueCoding();
    }
    else if(choice == "2")
    {
        giveUp();
    }
    else if(choice == "3")
    {
        stupidGames();
    }
}
void notReady2Code()
{
    cout << "Well good thing Mr. Clifford is writing all of the code on the board today!" << endl;
    cout << "I mean, the class is called AP Copy Paste for a reason." << endl;
    cout << "...But you know...there's a new stupid game you've been meaning to play..." << endl;
    cout << "Play the game? (y/n)" << endl;
    string yesno;
    cin >> yesno;
    cout << "------------------------------" << endl;
    if(yesno == "Y" || yesno == "y")
    {
        stupidGames();
    }
    else if(yesno == "N" || yesno == "n")
    {
        resistTemptation();
    }
}
void beginning()
{
    cout << "Let's get started! Press any key and enter to continue..." << endl;
    string pause;
    cin >> pause;
    cout << "------------------------------" << endl;
    cout << "You're sitting in AP Computer Science, trying to learn Java." << endl;
    cout << "It's barely nine in the morning. Are you ready to code? (y/n)" << endl;
    string yesno;
    cin >> yesno;
    cout << "------------------------------" << endl;
    if(yesno == "Y" || yesno == "y")
    {
        ready2Code();
    }
    else if(yesno == "N" || yesno == "n")
    {
        notReady2Code();
    }
}
int main()
{
    //static string name;
    cout << "Welcome to an APCS Adventure! What is your name?" << endl;
    cin >> name;
    cout << "------------------------------" << endl;
    cout << "Hello " + name + "! Are you ready to begin? (y/n)" << endl;
    string yesno;
    cin >> yesno;
    cout << "------------------------------" << endl;
    if(yesno == "Y" || yesno == "y")
    {
        beginning();
        cout << "------------------------------" << endl;
        cout << "GAME OVER" << endl;
    }
    else if(yesno == "n" || yesno == "N")
    {
        //First Ending
        cout << "Ok, come again sometime!" << endl;
    }


    return 0;
}






