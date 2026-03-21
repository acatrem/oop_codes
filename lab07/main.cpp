#include "lion.h"
#include "eagle.h"
#include "snake.h"
#include <iostream>
using namespace std;

int main(){
    Food meat("meat");

    Animal* lion = new Lion("aslan",5);
    Animal* eagle = new Eagle("kartal",7);
    Animal* snake = new Snake("yilan",11);
    
    cout<<"----------LION----------"<<endl;

    lion->makeSound();
    lion->eat(meat);
    lion->move();
    lion->sleep();

    cout<<"-------------------------"<<endl;

    cout<<"----------EAGLE----------"<<endl;
    
    eagle->makeSound();
    eagle->eat(meat);
    eagle->move();
    eagle->sleep();

    cout<<"--------------------------"<<endl;

    cout<<"----------SNAKE----------"<<endl;

    snake->makeSound();
    snake->eat(meat);
    snake->move();
    snake->sleep();

    cout<<"---------------------------"<<endl;

    delete lion;
    delete eagle;
    delete snake;

    return 0;
}