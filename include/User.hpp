#ifndef USER_IG
#define USER_IG

#include <string>
#include <vector>

class Bank
{
    public:
    Bank();
    
    long int get_MaxID();
    void set_MaxID(long int);
    vector<User> users;

    private:
    long int MaxID = 1230;

};

class User
{

    private:
    unsigned long int Balance;
    std::string name;
    std::string password;
    long int ID;

    public:
    User(unsigned long int ,std::string , std::string );
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
    void transfer(Bank& ,long int , long int);

};

#endif