#ifndef ADMIN_IG
#define ADMIN_IG
#include "User.hpp"
class Admin : User 
{
    using User::User;
    public:

    void ChangeBalanceTo(int ID ,long int);
    void TrackTransitionHistory(User &);

};

#endif