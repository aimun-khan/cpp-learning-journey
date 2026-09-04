#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// ===============================
// SHOW PLAYER STATS
// ===============================
void showStats(
    int happiness,
    int money,
    int wisdom,
    int confidence,
    int kindness,
    int ambition,
    int friendship,
    int familyBond
) {
    cout << endl;
    cout << "----------- LIFE STATS -----------" << endl;
    cout << "Happiness:   " << happiness << endl;
    cout << "Money:       " << money << endl;
    cout << "Wisdom:      " << wisdom << endl;
    cout << "Confidence:  " << confidence << endl;
    cout << "Kindness:    " << kindness << endl;
    cout << "Ambition:    " << ambition << endl;
    cout << "Friendship:  " << friendship << endl;
    cout << "Family Bond: " << familyBond << endl;
    cout << "----------------------------------" << endl;
}

// ===============================
// ACHIEVEMENTS
// ===============================
void showAchievements(
    int happiness,
    int money,
    int wisdom,
    int confidence,
    int kindness,
    int ambition
) {
    cout << endl;
    cout << "==================================" << endl;
    cout << "          ACHIEVEMENTS" << endl;
    cout << "==================================" << endl;

    bool unlocked = false;

    if (wisdom >= 80) {
        cout << "[UNLOCKED] WISE MIND" << endl;
        unlocked = true;
    }

    if (confidence >= 80) {
        cout << "[UNLOCKED] FEARLESS" << endl;
        unlocked = true;
    }

    if (kindness >= 30) {
        cout << "[UNLOCKED] KIND SOUL" << endl;
        unlocked = true;
    }

    if (ambition >= 30) {
        cout << "[UNLOCKED] AMBITIOUS" << endl;
        unlocked = true;
    }

    if (money >= 80) {
        cout << "[UNLOCKED] MONEY MAKER" << endl;
        unlocked = true;
    }

    if (happiness >= 80) {
        cout << "[UNLOCKED] HAPPY LIFE" << endl;
        unlocked = true;
    }

    if (!unlocked) {
        cout << "No achievements unlocked yet." << endl;
    }
}

// ===============================
// MAIN GAME
// ===============================
int main() {

    srand(time(0));

    string name;
    string career = "Undecided";

    int age;
    int choice;

    // Starting stats
    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;
    int kindness = 0;
    int ambition = 0;
    int friendship = 50;
    int familyBond = 50;

    // ===============================
    // PLAYER PROFILE
    // ===============================

    cout << "====================================" << endl;
    cout << "             LIFE SWITCH" << endl;
    cout << "====================================" << endl;
    cout << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your starting age: ";
    cin >> age;

    cout << endl;
    cout << "Welcome, " << name << "!" << endl;
    cout << "Your life story begins now..." << endl;

    // ===============================
    // LIFE EVENTS
    // ===============================

    for (int round = 1; round <= 5; round++) {

        age++;

        cout << endl;
        cout << "====================================" << endl;
        cout << "             AGE: " << age << endl;
        cout << "====================================" << endl;

        int event = rand() % 6;

        // EVENT 1
        if (event == 0) {

            cout << endl;
            cout << "You discover a skill you really enjoy." << endl;
            cout << endl;

            cout << "1. Practice the skill seriously" << endl;
            cout << "2. Keep it as a hobby" << endl;

            cout << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                wisdom += 10;
                ambition += 10;
                confidence += 5;

                cout << endl;
                cout << "You became serious about your new skill!" << endl;
            }
            else {
                happiness += 8;

                cout << endl;
                cout << "You enjoyed your new hobby." << endl;
            }
        }

        // EVENT 2
        else if (event == 1) {

            cout << endl;
            cout << "A close friend needs your help." << endl;
            cout << endl;

            cout << "1. Help your friend" << endl;
            cout << "2. Tell them you are too busy" << endl;

            cout << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                kindness += 10;
                friendship += 15;

                cout << endl;
                cout << "Your friendship became stronger." << endl;
            }
            else {
                friendship -= 10;
                ambition += 5;

                cout << endl;
                cout << "You focused on your own goals." << endl;
            }
        }

        // EVENT 3
        else if (event == 2) {

            cout << endl;
            cout << "Your family wants you to attend an important event." << endl;
            cout << endl;

            cout << "1. Spend the day with your family" << endl;
            cout << "2. Stay home and work on your goals" << endl;

            cout << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                familyBond += 15;
                happiness += 8;
                kindness += 5;

                cout << endl;
                cout << "You created a beautiful family memory." << endl;
            }
            else {
                ambition += 10;
                familyBond -= 5;

                cout << endl;
                cout << "You focused on your future." << endl;
            }
        }

        // EVENT 4
        else if (event == 3) {

            cout << endl;
            cout << "You get a chance to enter a competition." << endl;
            cout << endl;

            cout << "1. Enter the competition" << endl;
            cout << "2. Avoid the pressure" << endl;

            cout << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                confidence += 15;
                ambition += 10;

                cout << endl;
                cout << "You challenged yourself!" << endl;
            }
            else {
                happiness += 5;

                cout << endl;
                cout << "You chose a peaceful path." << endl;
            }
        }

        // EVENT 5
        else if (event == 4) {

            cout << endl;
            cout << "You find an opportunity to earn some money." << endl;
            cout << endl;

            cout << "1. Take the opportunity" << endl;
            cout << "2. Focus on learning instead" << endl;

            cout << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                money += 20;
                confidence += 5;

                cout << endl;
                cout << "You earned some extra money." << endl;
            }
            else {
                wisdom += 15;
                ambition += 5;

                cout << endl;
                cout << "You invested your time in learning." << endl;
            }
        }

        // EVENT 6
        else {

            cout << endl;
            cout << "You have a free weekend." << endl;
            cout << endl;

            cout << "1. Learn something new" << endl;
            cout << "2. Spend time with people you love" << endl;

            cout << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                wisdom += 10;
                ambition += 5;

                cout << endl;
                cout << "You learned something valuable." << endl;
            }
            else {
                happiness += 10;
                friendship += 5;
                familyBond += 5;

                cout << endl;
                cout << "You created happy memories." << endl;
            }
        }

        // Show stats after each year
        showStats(
            happiness,
            money,
            wisdom,
            confidence,
            kindness,
            ambition,
            friendship,
            familyBond
        );
    }

    // ===============================
    // EDUCATION DECISION
    // ===============================

    cout << endl;
    cout << "====================================" << endl;
    cout << "          EDUCATION CHOICE" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "What will you do next?" << endl;
    cout << endl;

    cout << "1. Continue studying" << endl;
    cout << "2. Start working" << endl;

    cout << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {

        wisdom += 20;
        confidence += 5;

        cout << endl;
        cout << "You continued your education." << endl;
    }
    else {

        money += 20;
        confidence += 10;
        ambition += 10;

        cout << endl;
        cout << "You entered the working world." << endl;
    }

    // ===============================
    // CAREER CHOICE
    // ===============================

    cout << endl;
    cout << "====================================" << endl;
    cout << "          CAREER DECISION" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "Choose your career:" << endl;
    cout << endl;

    cout << "1. Technology" << endl;
    cout << "2. Business" << endl;
    cout << "3. Creative Career" << endl;
    cout << "4. Science" << endl;

    cout << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1) {

        career = "Technology";

        wisdom += 15;
        ambition += 10;
        money += 10;

        cout << endl;
        cout << "You chose Technology." << endl;
    }

    else if (choice == 2) {

        career = "Business";

        money += 20;
        ambition += 15;
        confidence += 10;

        cout << endl;
        cout << "You chose Business." << endl;
    }

    else if (choice == 3) {

        career = "Creative Career";

        happiness += 15;
        confidence += 10;
        wisdom += 5;

        cout << endl;
        cout << "You chose a Creative Career." << endl;
    }

    else if (choice == 4) {

        career = "Science";

        wisdom += 20;
        ambition += 10;

        cout << endl;
        cout << "You chose Science." << endl;
    }

    else {

        career = "Undecided";

        cout << endl;
        cout << "You haven't chosen a career." << endl;
    }

    // ===============================
    // BRANCHING STORY
    // ===============================

    cout << endl;
    cout << "====================================" << endl;
    cout << "          YOUR NEXT CHAPTER" << endl;
    cout << "====================================" << endl;

    // TECHNOLOGY BRANCH
    if (career == "Technology") {

        cout << endl;
        cout << "A startup contacts you." << endl;
        cout << "They want you to help create a new app." << endl;
        cout << endl;

        cout << "1. Accept the challenge" << endl;
        cout << "2. Focus on learning first" << endl;

        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {

            confidence += 15;
            money += 15;
            ambition += 10;

            cout << endl;
            cout << "You joined the startup!" << endl;
        }
        else {

            wisdom += 15;
            ambition += 5;

            cout << endl;
            cout << "You focused on improving your skills." << endl;
        }
    }

    // BUSINESS BRANCH
    else if (career == "Business") {

        cout << endl;
        cout << "You have an opportunity to start a small business." << endl;
        cout << endl;

        cout << "1. Take the opportunity" << endl;
        cout << "2. Wait and plan carefully" << endl;

        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {

            money += 20;
            confidence += 15;
            ambition += 10;

            cout << endl;
            cout << "You started your first business!" << endl;
        }
        else {

            wisdom += 15;
            ambition += 5;

            cout << endl;
            cout << "You decided to plan before taking the risk." << endl;
        }
    }

    // CREATIVE BRANCH
    else if (career == "Creative Career") {

        cout << endl;
        cout << "You receive an opportunity to display your work." << endl;
        cout << endl;

        cout << "1. Show your work publicly" << endl;
        cout << "2. Improve your work first" << endl;

        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {

            confidence += 15;
            happiness += 10;

            cout << endl;
            cout << "People loved your creative work!" << endl;
        }
        else {

            wisdom += 10;
            confidence += 5;

            cout << endl;
            cout << "You improved your creative skills." << endl;
        }
    }

    // SCIENCE BRANCH
    else if (career == "Science") {

        cout << endl;
        cout << "A research team invites you to join a project." << endl;
        cout << endl;

        cout << "1. Join the research team" << endl;
        cout << "2. Continue independent research" << endl;

        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {

            wisdom += 15;
            ambition += 10;
            confidence += 5;

            cout << endl;
            cout << "You joined an exciting research project!" << endl;
        }
        else {

            wisdom += 20;

            cout << endl;
            cout << "You continued your independent research." << endl;
        }
    }

    // ===============================
    // FINAL STATS
    // ===============================

    cout << endl;
    cout << "====================================" << endl;
    cout << "           FINAL PROFILE" << endl;
    cout << "====================================" << endl;

    cout << "Player: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Career: " << career << endl;

    showStats(
        happiness,
        money,
        wisdom,
        confidence,
        kindness,
        ambition,
        friendship,
        familyBond
    );

    // ===============================
    // LIFE SCORE
    // ===============================

    int lifeScore =
        happiness +
        money +
        wisdom +
        confidence +
        kindness +
        ambition +
        friendship +
        familyBond;

    cout << endl;
    cout << "Life Score: " << lifeScore << endl;

    // ===============================
    // ACHIEVEMENTS
    // ===============================

    showAchievements(
        happiness,
        money,
        wisdom,
        confidence,
        kindness,
        ambition
    );

    // ===============================
    // ENDINGS
    // ===============================

    cout << endl;
    cout << "====================================" << endl;
    cout << "            LIFE ENDING" << endl;
    cout << "====================================" << endl;

    if (lifeScore >= 450) {

        cout << endl;
        cout << "🌟 LEGENDARY LIFE" << endl;
        cout << "You built an extraordinary life!" << endl;
    }

    else if (lifeScore >= 350) {

        cout << endl;
        cout << "⭐ SUCCESSFUL LIFE" << endl;
        cout << "You created a successful future!" << endl;
    }

    else if (lifeScore >= 250) {

        cout << endl;
        cout << "🌱 DEVELOPING LIFE" << endl;
        cout << "Your journey is still growing." << endl;
    }

    else {

        cout << endl;
        cout << "🛤️ CHALLENGING LIFE" << endl;
        cout << "Your choices created a difficult journey." << endl;
    }

    cout << endl;
    cout << "Every choice changed your story." << endl;
    cout << "Thank you for playing LIFE SWITCH!" << endl;

    return 0;
}
