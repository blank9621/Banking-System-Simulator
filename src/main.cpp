#include "User.hpp"
#include "Admin.hpp"
using namespace std;

int main()
{
    Bank tejarat;
    User Ali(1000 , "blank" , "asas");
    tejarat.set_MaxID( Ali.ID_generator(tejarat.get_MaxID()));
    
}