#include<iostream>
using namespace std;
class Song{
    string name,artist;
    int duration;
public:
    void input(){
        cout << "Song name:";
        cin >> name;
        cout <<"Artist name:";
        cin >> artist;
        cout <<"Duration of the song:";
        cin >> duration;
    }
    friend void compareSongs(Song s1,Song s2);
};
void compareSongs(Song s1,Song s2){
    if(s1.duration>s2.duration)
        cout<<s1.name<<" is longer";
    else if(s2.duration>s1.duration)
        cout<<s2.name<<" is longer";
    else
        cout<<"Both songs have same duration";
}
int main(){
    Song s1,s2;
    s1.input();
    s2.input();
    compareSongs(s1,s2);
}