#include <iostream>
#include <string>
using namespace std;
#include <cstdlib>

int OpponentHealth=100;
int PlayerHealth=100;
int attack;
int attackBob;
int attackMonica;
int attackSteve;
int player;
//int playAgain=0;
int randomnNum;
int weapon;
int location;
int choice;
int befriend;
int befriendBob;
int befriendMonica;
int befriendSteve;
int FriendshipMeter=0;

    void attackOne()
    {
        OpponentHealth-=10;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
    
     void attackTwo()
    {
        OpponentHealth-=20;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
     void attackThree()
    {
        OpponentHealth-=25;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
     void powerUp()
     {
         PlayerHealth+=10;
         cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
     }
     
     void attackOneBob()
    {
        OpponentHealth-=20;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
     void attackTwoBob()
    {
        OpponentHealth-=30;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
    
     void attackThreeBob()
    {
        OpponentHealth-=25;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
    
     void powerUpBob()
     {
         PlayerHealth+=10;
         cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
     }
     
     void attackOneMonica()
    {
        OpponentHealth-=10;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
    
     void attackTwoMonica()
    {
        OpponentHealth-=30;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
    
     void attackThreeMonica()
    {
        OpponentHealth-=5;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
    
     void powerUpMonica()
     {
         PlayerHealth+=10;
         cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
     }
     

void attackOneSteve()
    {
        OpponentHealth-=10;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
     void attackTwoSteve()
    {
        OpponentHealth-=25;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
     void attackThreeSteve()
    {
        OpponentHealth-=15;
        cout << "Opponent Health decreased! Opponent Health = " << OpponentHealth << endl;
    }
     void powerUpSteve()
     {
         PlayerHealth+=10;
         cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
     }

    void OpponentAttackOne()
    {
        PlayerHealth-=10;
        cout << "Opponent uses slice! Player Health decreased. Player Health = " << PlayerHealth << endl;
    }
    void OpponentAttackTwo()
    {
        PlayerHealth-=20;
        cout << "Opponent uses sneak attack! Player Health decreased. Player Health = " << PlayerHealth << endl;
    }
    void OpponentAttackThree()
    {
        PlayerHealth-=30;
        cout << "Opponent uses double kick! Player Health decreased. Player Health = " << PlayerHealth << endl;
    }
    void OpponentPowerUp()
    {
        OpponentHealth+=10;
        cout << "Opponent uses power up! Opponent Health increased. Opponent Health = " << OpponentHealth << endl;
    }
    void befriendOne()
    {
        FriendshipMeter+=10;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendTwo()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendThree()
    {
        FriendshipMeter+=30;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void powerUpBefriend()
    {
        PlayerHealth+=10;
        cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
    }
    void befriendOneBob()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendTwoBob()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendThreeBob()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void powerUpBefriendBob()
    {
       PlayerHealth+=10;
        cout << "Your health has been increased! Player Health = " << PlayerHealth << endl; 
    }
    void befriendOneMonica()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendTwoMonica()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendThreeMonica()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void powerUpBefriendMonica()
    {
        PlayerHealth+=10;
        cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
    }
    void befriendOneSteve()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendTwoSteve()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void befriendThreeSteve()
    {
        FriendshipMeter+=20;
        cout << "Opponent's friendship meter increased! Opponent friendship meter = " << FriendshipMeter << endl;
    }
    void powerUpBefriendSteve()
    {
        PlayerHealth+=10;
        cout << "Your health has been increased! Player Health = " << PlayerHealth << endl;
    }
    int main()
    {
        
            cout << "+* Welcome to Brawl or Befriend! *+" << endl;
            cout << "Choose your player from the options listed." << endl;
            cout << "====================" << endl << "Charlotte. Enter 1." << endl << "Bob. Enter 2." << endl << "Monica. Enter 3." << endl << "Steve. Enter 4." << endl << "====================" << endl;
            cin >> player;
            cout << "Choose your weapon!" << endl << "Umbrella. Enter 1." << endl << "Frying pan. Enter 2." << endl << "Pencil. Enter 3." << endl << "Shoe. Enter 4." << endl;
            cin >> weapon;
            cout << "Choose your location!" << endl << "Swamp. Enter 1." << endl << "Desert. Enter 2." << endl << "Village. Enter 3." << endl << "Forest. Enter 4." << endl;
            cin >> location;
            if(location==1)
            {
                cout << "A goblin approaches. Do you wish to attack or befriend the goblin?" << endl << "Enter 1 to attack. Enter 0 to befriend." << endl;
                cin >> choice;
            }
            else if(location==2)
            {
                cout << "A mummy approaches. Do you wish to attack or befriend the mummy?" << endl << "Enter 1 to attack. Enter 0 to befriend." << endl;
                cin >> choice;
            }
            else if(location==3)
            {
                cout << "A golem approaches. Do you wish to attack or befriend the golem?" << endl << "Enter 1 to attack. Enter 0 to befriend." << endl;
                cin >> choice;
            }
            else if(location==4)
            {
                cout << "A skeleton approaches. Do you wish to attack or befriend the goblin?" << endl << "Enter 1 to attack. Enter 0 to befriend." << endl;
                cin >> choice;
            }
            if (choice==1)
            {
            while (PlayerHealth!=0 && OpponentHealth!=0)
            {
                if (player==1)
                {
                cout << "Choose your attack from the options below by entering the corresponding number." << endl;
                cout << "Punch. Enter 1." << endl << "Kick. Enter 2." << endl << "Slap. Enter 3." << endl << "Power Up. Enter 4." << endl;
                cin >> attack;
                    switch (attack)
                    {
                        case 1:
                           attackOne();
                            break;
                        case 2:
                            attackTwo();
                            break;
                        case 3:
                        attackThree();
                            break;
                        case 4:
                        powerUp();
                           break;      
                    }
                
                }
                else if (player==2)
                {
                    cout << "Choose your attack from the options below by entering the corresponding number." << endl;
                cout << "Stomp. Enter 1." << endl << "Pinch. Enter 2." << endl << "Double Slap. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> attackBob;
                    switch (attackBob)
                    {
                        case 1:
                           attackOneBob();
                            break;
                        case 2:
                            attackTwoBob();
                            break;
                        case 3:
                        attackThreeBob();
                            break;
                        case 4:
                        powerUpBob();
                           break;      
                    }
                }
                else if (player==3)
                {
                    cout << "Choose your attack from the options below by entering the corresponding number." << endl;
                cout << "Tap. Enter 1." << endl << "Twirl and kick. Enter 2." << endl << "Dance. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> attackMonica;
                    switch (attackMonica)
                    {
                        case 1:
                           attackOneMonica();
                            break;
                        case 2:
                            attackTwoMonica();
                            break;
                        case 3:
                        attackThreeMonica();
                            break;
                        case 4:
                        powerUpMonica();
                           break;      
                    }
                }
                else if (player==4)
                {
                    cout << "Choose your attack from the options below by entering the corresponding number." << endl;
                cout << "Distract. Enter 1." << endl << "Pinch. Enter 2." << endl << "Hit. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> attackSteve;
                    switch (attackSteve)
                    {
                        case 1:
                           attackOneSteve();
                            break;
                        case 2:
                            attackTwoSteve();
                            break;
                        case 3:
                        attackThreeSteve();
                            break;
                        case 4:
                        powerUpSteve();
                           break;      
                    }
                }  
                cout << "Opponent's turn." << endl;
                int x = time(0);
                srand(x);
                int randomNum = 1 + rand()%4;
                switch (randomNum)
                    {
                        case 1:
                           OpponentAttackOne();
                            break;
                        case 2:
                            OpponentAttackTwo();
                            break;
                        case 3:
                            OpponentAttackThree();
                            break;
                        case 4:
                            OpponentPowerUp();
                           break;     
                    }
            }
            
             if (OpponentHealth==0 && PlayerHealth!=0)
            {
                cout << "You win!" << endl;
                cout << "Would you like to play again?" << endl;
            }
            else if (OpponentHealth==0 && PlayerHealth==0)
            {
                cout << "It's a draw!" << endl;
                cout << "Would you like to play again?" << endl;
            }
            else if (OpponentHealth!=0 && PlayerHealth==0)
            {
                cout << "You lost!" << endl;
                cout << "Would you like to play again?" << endl;
            }
            }
          else if (choice==0)
            {
                while (PlayerHealth!=0 && FriendshipMeter!=100)
                {
                if (player==1)
                {
                cout << "Befriend your opponent. Choose your action from the options below." << endl;
                cout << "Hug. Enter 1." << endl << "Compliment. Enter 2." << endl << "Gift. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> befriend;
                    switch (befriend)
                    {
                        case 1:
                           befriendOne();
                            break;
                        case 2:
                            befriendTwo();
                            break;
                        case 3:
                        befriendThree();
                            break;
                        case 4:
                        powerUpBefriend();
                           break;      
                    }
                
                }
                else if (player==2)
                {
                    cout << "Befriend your opponent. Choose your action from the options below." << endl;
                cout << "Joke. Enter 1." << endl << "High five. Enter 2." << endl << "Dance. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> befriendBob;
                    switch (befriendBob)
                    {
                        case 1:
                           befriendOneBob();
                            break;
                        case 2:
                            befriendTwoBob();
                            break;
                        case 3:
                            befriendThreeBob();
                            break;
                        case 4:
                        powerUpBefriendBob();
                           break;      
                    }
                }
                else if (player==3)
                {
                    cout << "Befriend your opponent. Choose your action from the options below." << endl;
                cout << "Bear hug! Enter 1." << endl << "Silly face. Enter 2." << endl << "Sing. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> befriendMonica;
                    switch (befriendMonica)
                    {
                        case 1:
                           befriendOneMonica();
                            break;
                        case 2:
                            befriendTwoMonica();
                            break;
                        case 3:
                            befriendThreeMonica();
                            break;
                        case 4:
                        powerUpBefriendMonica();
                           break;      
                    }
                }
                else if (player==4)
                {
                    cout << "Choose your attack from the options below by entering the coresponding number." << endl;
                cout << "Praise. Enter 1." << endl << "Handshake. Enter 2." << endl << "Smile. Enter 3." << endl << "Power Up! Enter 4." << endl;
                cin >> befriendSteve;
                    switch (befriendSteve)
                    {
                        case 1:
                           befriendOneSteve();
                            break;
                        case 2:
                            befriendTwoSteve();
                            break;
                        case 3:
                        befriendThreeSteve();
                            break;
                        case 4:
                        powerUpBefriendSteve();
                           break;      
                    }
                }  
                cout << "Opponent's turn." << endl;
                int x = time(0);
                srand(x);
                int randomNum = 1 + rand()%4;
                switch (randomNum)
                    {
                        case 1:
                           OpponentAttackOne();
                            break;
                        case 2:
                            OpponentAttackTwo();
                            break;
                        case 3:
                            OpponentAttackThree();
                            break;
                        case 4:
                            OpponentPowerUp();
                           break;     
                    }
            
                }
                if (FriendshipMeter==100 && PlayerHealth!=0)
            {
                cout << "You win! You befriended your opponent." << endl;
                cout << "Would you like to play again?" << endl;
            }
            else if (FriendshipMeter==100 && PlayerHealth==0)
            {
                cout << "It's a draw! You could not defeat your opponent or befriend them." << endl;
                cout << "Would you like to play again?" << endl;
            }
            else if (FriendshipMeter!=100 && PlayerHealth==0)
            {
                cout << "You lost! Your opponent does not want to be friends with you." << endl;
                cout << "Would you like to play again?." << endl;
            }
            }   
        
            return 0;
    }