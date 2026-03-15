#include "Guild.h"
Guild::Guild(string guildName) {
    this->guildName = guildName;
    memberCount = 0;
    for (int i = 0; i < 15; i++) {
        roster[i] = nullptr;
    }
}
Guild::~Guild() {
    for (int i = 0; i < memberCount; i++) {
        delete roster[i];
        roster[i] = nullptr;
    }
    cout << "The guild " << guildName << " has been disbanded!\n";
}
string Guild::getGuildName() const {
    return guildName;
}
int Guild::getMemberCount() const {
    return memberCount;
}
void Guild::operator+=(Hero *newHero) {
    if (memberCount < 15) {
        roster[memberCount] = new Hero(*newHero);
        memberCount++;
    }
    else {
        cout<< "Guild is at full capacity!\n";
    }
}
int Guild::calculateTotalGuildPower()const {
    int total = 0;
    for (int i = 0; i < memberCount; i++) {
        total = total + roster[i]->getPower();
    }
    return total;
}
void Guild::displayGuildStats()const {
    cout << "Guild Name: " << guildName << "\n";
    cout << "Total Members: " << memberCount << "/15\n";
    cout << "Total Guild Power: " << calculateTotalGuildPower() << "\n";
}
ostream& operator<<(ostream& os, const Guild& g) {
    os << "Guild: " << g.guildName << "\n";
    os << "Members: " << g.memberCount << "\n";

for (int i = 0; i < g.memberCount; i++) {
    os << "- " << g.roster[i]->getName()   << " (Power: " << g.roster[i]->getPower() << ")\n";
}
return os;
}