#ifndef USER_IG
#define USER_IG

#include <string>

class User
{

    private:
    unsigned long int Balance;
    std::string name;
    std::string password;
    long int ID;

    public:
    void set_Balance(int);
    void set_name(std::string);
    void set_password(std::string);
    long int ID_generator(long int);
    
    long int get_id();
    unsigned long int get_Balance();
    std::string get_name();
    std::string get_password();

    void Deposit(long int);
    void Withdraw(long int);
    void transfer(User& , long int);

};

#endif