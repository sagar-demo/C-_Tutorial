#include<iostream>
using namespace std;

class Game{
    public:
    string GameName;
    int GameVersion;
    string SupportOs;
    double MB;
};
int main()
{
    Game game1;
    game1.GameName="PubG\n";
    game1.GameVersion=2020; 
    game1.SupportOs="Mobile or Os\n";
    game1.MB=20000;

    cout<<game1.GameName;
    cout<<game1.GameVersion;
    cout<<game1.SupportOs;
    cout<<game1.MB;
   return 0;
}