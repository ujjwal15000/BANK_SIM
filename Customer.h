#include "Money.h"
#include <iostream>
class Customer{
    private:
        Money Balance;
    public:
        Customer(long long int d, int c){};
        void Debit(Money d);
        void Credit(Money d);
        void CheckBalance();
};

void Customer::Debit(Money d){
    this->Balance.SUBTRACT(d);
    std::cout << "DONE" << std::endl;
}

void Customer::Credit(Money d){
    this->Balance.ADD(d);
    std::cout << "DONE" << std::endl;
}

void Customer::CustomerCheckBalance(){
    this->Balance.PrintMon();
}