#ifndef USER_IG
#define USER_IG

#include <string>

class User
{

    private:
    unsigned long int Balance;
    std::string name;
    std::string password;
    
    public:
    void set_Balance(int);
    void set_name(std::string);
    void set_password(std::string);

    unsigned long int get_Balance();
    std::string get_name();
    std::string get_password();


};

#endif