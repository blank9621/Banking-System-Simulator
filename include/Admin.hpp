#ifndef ADMIN_IG
#define ADMIN_IG
#include "User.hpp"
#include <iostream>
class Admin : public Bank 
{
    public:
    friend std::ostream& operator<<(std::ostream output, User& user)
    {
        return output << user.get_Balance() << ' ' << user.get_id()<<endl;
    }
    void ChangeBalanceTo(int ID ,long int);
    void TrackTransitionHistory(User &);
    void PrintUsers();
};

#endif