
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
    int money;
    void setName(std::string new_name);
    void setCards(std::string new_firstCard, std::string new_secondCard);

    void removeCards();
    std::string getName();
};


void rules();


std::vector<Player> getRoster(std::string names[], int players);

int setDealerAndBlinds(int dealer, int smallBlind, int bigBlind, int players);

std::vector<std::string> shuffleDeck(std::vector<std::string> deck);

