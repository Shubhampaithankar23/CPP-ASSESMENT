#include<iostream>
using namespace std;
class sportBike{
    public:
    void sportbike(){
        cout<<"I am a sportbike"<<endl;
    }
};
class Twowheeler : public sportBike{
    public:
    void twowheeler(){
        cout<<"I have a two wheels"<<endl;
    }
};
class Bike : public Twowheeler {
    public:
    void bike(){
        cout<<"I am a bike"<<endl;
    }
};
int main(){
    Bike mybike;
    mybike.bike();
    mybike.twowheeler();
    mybike.sportbike();
    return 0;
}
