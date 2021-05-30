#include <fstream>
#include <cstring>
#include <ctime>
#include <sstream>
#include <iostream>

class logger
{
private:
    int level = 0x1111;
    std::ofstream logfile;

public:

    logger();
    ~logger();
    int log(const char *msg);
};

logger::logger()
{
    time_t now = time(0);
    std::stringstream tmp;
    tmp << "log " << ctime(&now) << ".txt";
    this->logfile.open("log.txt");
    this->logfile << "Init program...\n";
}

logger::~logger()
{
}

int logger::log(const char *msg)
{
    if (this->level > 0x0001)
    {
        time_t now = time(0);

        std::stringstream tmp;
        tmp << ctime(&now) << " =>\t" << msg;

        this->logfile << tmp.str();

        return 1;
    }
    return 0;
}


logger lgg;

double calc(const double& a, const double& b)
{   
    double res = a*b;
    
    std::stringstream lgstr;
    lgstr << "Multyplying a(" << a << ") and b(" << b << ") with result => " << res << "\n";
    lgg.log(lgstr.str().c_str());
    return res;

}

int main(int argc, char *argv[])
{
    double arr[10];
    for (int i = 0; i<10; i++) arr[i] = calc(i+3, i+5);
    
    for (int i = 0; i<10; i++) std::cout << arr[i] << "\n";

}