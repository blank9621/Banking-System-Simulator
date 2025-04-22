#include "User.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

Bank::Bank()
{
    ifstream open ("USERS.bin" , ios::binary);

    while (open.read(reinterpret_cast<char*>(&users) , sizeof(User)))  // check for that if this work or not :)
    {
        cout << "added a user \n";
    }

        
}

User::User(unsigned long int Balance , string name , string password  )
{
    try
    {
    set_Balance(Balance);
    set_name(name);
    set_password(password);
    
    }
    catch(invalid_argument &e)
    {
        cerr<<e.what()<<endl;
    }

}
void User::set_Balance(int balance)
{
    if(balance < 0)
    throw invalid_argument("invalid Balance \n");
    else
    Balance = balance;
    
}
void User::set_name(string name)
{
    this->name = name;
}
void User::set_password(string password)
{
    if(password.length() < 3)
    throw invalid_argument("pasthis->password = password;nt be less than 3 characters! \n");
    else
    this->password = password;
}
long int User::ID_generator(long int MaxID)
{
    srand(time(0));
    int r = rand() % 100;
    this->ID = MaxID + r;
    return MaxID + r;
}
long int Bank::get_MaxID()
{
    return MaxID;
}
void Bank::set_MaxID(long int MaxID)
{
    this->MaxID = MaxID;
}
void User::Deposit(long int amount)
{
    if(amount <= 0)
    throw invalid_argument("invalid amount to Deposit \n");


    set_Balance(get_Balance() + amount);
}
void User::Withdraw(long int amount)
{
    if(amount <= 0)
    throw invalid_argument("invalid amount to Withdraw \n");
    if(amount > get_Balance())
    throw invalid_argument("You dont have this much money \n");

    set_Balance(get_Balance() - amount);
}
void User::transfer(Bank& bank,long int ID , long int amount)
{
    if(amount <= 0)
    throw invalid_argument("invalid amount to Withdraw \n");
    if(amount > get_Balance())
    throw invalid_argument("You dont have this much money \n");

    bool found = false;
    for(int i= 0 ; i < bank.users.size() ; i++)
    {
        if( ID == bank.users[i].get_id())
        {
            found = true;
            bank.users[i].set_Balance(bank.users[i].get_Balance() + amount);
            this->set_Balance(get_Balance() - amount);
            break;
        }
    }
    if(!found)
    throw invalid_argument("there is no existing ID like this \n");
}