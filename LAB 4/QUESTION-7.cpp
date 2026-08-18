#include<iostream>
using namespace std;
class GameManager;
class Player{
    string name;
    int health,score,level;
public:
    void input(){
        cin>>name>>health>>score>>level;
    }
    friend class GameManager;
};
class GameManager{
public:
    void display(Player p){
        cout<<"Name: "<<p.name<<endl;
        cout<<"Health: "<<p.health<<endl;
        cout<<"Score: "<<p.score<<endl;
        cout<<"Level: "<<p.level<<endl;

        if(p.health>0)
            cout<<"Player is Alive";
        else
            cout<<"Player is Dead";
    }
};
int main(){
    Player p;
    p.input();
    GameManager g;
    g.display(p);
}