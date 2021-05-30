#include <iostream>
#include <string>

template<typename T>
struct coords {
    T x, y, z;

    coords& operator+=(const coords& cd)
    {
        this->x = cd.x;
        this->y = cd.y;
        this->z = cd.z;

        return *this;
    }
};

template<typename T>
coords<T> make_cords(T x = 0, T y = 0, T z = 0)
{
    coords<T> tmp;
    tmp.x = x; 
    tmp.y = y; 
    tmp.z = z; 

    return tmp;
}

class animal
{
private:
    std::string type;
    coords<double> cordinates;
public:
    animal(std::string type){
        this->type = type;
    };
    ~animal(){

    }

    void changeCoords(const coords<double>& cd)
    {
        this->cordinates += cd;
    }

    const std::string& gettype();
    void settype(const std::string& in);
    virtual void move(const coords<double>& step) = 0;
};

class plant
{
private:
    std::string type;
    coords<double> cordinates;
public:
    plant(std::string type){
        this->type = type;
    };
    ~plant(){

    }

    void changeCoords(const coords<double>& cd)
    {
        this->cordinates += cd;
    }

    const std::string& gettype();
    void settype(const std::string& in);
    virtual void move(const coords<double>& step) = 0;
};

class smallbird : public animal
{
private:
    int wings_length;

public:
    smallbird(int wl) : animal("sparrow"), wings_length(wl) {

    }

    ~smallbird(){

    };

    void move(const coords<double>& step)
    {
        std::cout << "fly!!!" << std::endl;
        this->changeCoords(step);
    }
};

class tree : public plant
{
private:
    int age, heigth;

public:
    tree(int a, int heigth) : plant("tree"), age(a), heigth(heigth) {

    }

    virtual ~tree(){

    };

    void update_age()
    {
        (this->age)++;
    }

    void move(const coords<double>& step)
    {
        std::cout << "closer to the sun!!!" << std::endl;
        this->changeCoords(step);
    }
};

class fish : public animal
{
private:
    std::string spice;

public:
    fish(std::string spice) : animal("fish"), spice(spice) {

    }

    ~fish(){

    };

    void move(const coords<double>& step)
    {
        std::cout << "boole!!!" << std::endl;
        this->changeCoords(step);
    }
};

void do_something(animal& a)
{
    a.move(make_cords<double>());
}

void do_something(plant& a)
{
    a.move(make_cords<double>());
}


int main(int argc, char *argv[]){

    auto am = smallbird(12);
    do_something(am);

    auto an = tree(37, 485);
    do_something(an);

    auto ah = fish(std::string("Hello"));
    do_something(ah);

}