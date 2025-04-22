#include "Admin.hpp"
#include <iostream>
#include <format>
using namespace std;

void Admin::PrintUsers()
{
    for (int i = 0; i < users.size(); i++)
    {
        cout << Bank::users[i];
    }
    
}
