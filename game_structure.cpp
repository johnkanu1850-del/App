// game_structure.cpp

#include <string>
#include <vector>

struct Player {
    std::string name;
    int age;
    std::string position;
    int goals;
    int assists;
};

struct Team {
    std::string name;
    std::vector<Player> players;
    int totalGoals;
};

struct Stadium {
    std::string name;
    std::string location;
    int capacity;
};

class FootballGame {
private:
    std::vector<Team> teams;
    std::vector<Stadium> stadiums;
public:
    void addTeam(const Team& team);
    void addStadium(const Stadium& stadium);
    void displayTeams();
    void playMatch(int team1Index, int team2Index);
};

// Methods Implementation

void FootballGame::addTeam(const Team& team) {
    teams.push_back(team);
}

void FootballGame::addStadium(const Stadium& stadium) {
    stadiums.push_back(stadium);
}

void FootballGame::displayTeams() {
    for (const auto& team : teams) {
        std::cout << "Team: " << team.name << \"\n";
    }
}

void FootballGame::playMatch(int team1Index, int team2Index) {
    // Match logic
}

int main() {
    FootballGame game;
    
    // Example usage: Add teams and stadiums
    return 0;
}