// CoffeeShopHack.cpp : Defines the entry point for the console application.
/*
Create a new console project C++ program that uses more than one function.
Create two functions, one normal transaction, one hacked transaction.
Print the original funds and balance for both accounts.
Pass funds in a normal transaction using integers parameters.
Print the funds and balance showing this normal transaction should change nothing.
Now pass the account balance by reference to the hacked transaction.
In the hacked transaction swap the bank balances.
Print out the new balances.
Add any more functions that you may need.
Your main function should control all the other functions.
Comment your source code file (.CPP) well.
Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
Add your solution and files to your new Repository on GitHub.
Take a screenshot of this project in GitHub.
Take a screenshot of the program working.
*/

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//Create two functions, one normal transaction, one hacked transaction
void Normal_Transaction(int Transaction);
void Hacked_Transaction(int Transaction);
int AI_Customer(int Purchase);
int Coffee_Shop_Menu(int Menu_Item);
int Hack(int Purchase);
int main()
{
	int Transaction = 0;
	//Print the original funds and balance for both accounts
	int normal_original_balance = 0;
	int hacked_original_balance = 0;

	Normal_Transaction(Transaction);
	Hacked_Transaction(Transaction);
    return 0;
}
enum Menu_Item
{
	Coffee,
	Tea,
	Soda,
};
//Normal transaction function
void Normal_Transaction(int Transaction)
{
	cout << Transaction;
}
//Hacked transaction function
void Hacked_Transaction(int Transaction)
{
	cout << Transaction;
}
int AI_Customer(int Purchase)
{

}
int Coffee_Shop_Menu(int Menu_Item)
{
	//This is a the list of Menu Items the User can select.

}
int Hack(int Purchase)
{
	//The Hacker imports the Customer Transaction into a function that rounds off the pennies in every transaction and filters it into his private account
}