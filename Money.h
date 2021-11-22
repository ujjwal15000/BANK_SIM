class Money{
    private:
        long long D;
        int C;
    public:
        Money(long long d, int c){};
        void ADD(Money &d);
        void SUBTRACT(Money &d);
        void PrintMon();
        ~Money();
        
};

Money::Money(long long d, int c){
    this->D = d;
    this->C = c;
}

void Money :: ADD(Money d){
    this->C += d.C;
    this->D += d.D + this->C/100;
    this->C%=100;
}

void Money :: SUBTRACT(Money d){
    this->C -= d.C;
    this->D -= d.D ;
    this->D += this->C/100;
    this->C %= 100;
}

void Money::PrintMon(){
    std::string Money_to_string = "";
    Money_to_string += std::to_string(this->D);
    Money_to_string += ',';
    Money_to_string += std::to_string(this->C);
    std::cout << Money_to_string << std::endl;
}