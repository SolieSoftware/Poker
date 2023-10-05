
#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <algorithm>
#include <vector>

class Player {
    public:
    std::string name;
    std::string firstCard;
    std::string secondCard;
    int money = 50000;
    void setName(std::string new_name);
    void setCards(std::string new_firstCard, std::string new_secondCard);
    void betMoney(int amount);
    std::string showCards();

    void removeCards();
    std::string getName();
};

class YourPlayer: public Player {
    

};

void rules();


std::vector<Player> getRoster(std::string names[], int players);

int setDealerAndBlinds(int dealer, int smallBlind, int bigBlind, int players);

std::vector<std::string> shuffleDeck(std::vector<std::string> deck);

