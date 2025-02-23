/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
FINAL PROJECT
BONUS: INCLUDED A STRUCT FOR ENEMY DATA. RECEIVED DATA VIA INPUT FILE. */
// LINK: https://youtu.be/TCEzJL9Je2Q

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// STRUCT DECLARATION
struct Enemy
{
    string enemyName;
    int enemyHealth;
    int enemyDamage;
};

// FUNCTION PROTOTYPES
void getEnemyInfo(Enemy x[]);
void getPlayerInfo(string playerName, string playerGender, string playerType);
int getPlayerHealth();
int getPlayerDamage();
int encounterEnemy(Enemy x[], string playerName, int playerHealth, int playerDamage, int LIVES);
int stage1(Enemy x[], string playerName, int playerHealth, int playerDamage);


int main()
{
    Enemy info[10];
    string playerName;
    string playerGender;
    string playerType;
    int playerHealth;
    int playerDamage;
    int LIVES = 3;
    int choice;
    int enemymax = 9; // FOR RANDOM ENEMY GENERATOR. CAN CHANGE MAX WHEN ADDING MORE ENEMIES
    int enemymin = 0;
    int seed = time(0);
    srand(seed);

    cout << "******************************** NARNIA ********************************\n";
    cout << "----------------------------------------------------------------------------------\n";

    // FUNCTION CALLS
    getEnemyInfo(info);
    getPlayerInfo(playerName, playerGender, playerType);
    playerHealth = getPlayerHealth();
    playerDamage = getPlayerDamage();

    // ------------------------------------------ MAIN STORY
    do
    {
        // STAGE SELECTION (EVERY TIME A STAGE IS CLEARED, LIVES ARE RESET TO 3. BREAKS LOOP WHEN LIVES REACH 0.
        cout << "Greetings! Which stage would you like to play? (Each stage gets up to three lives). \n";
        cout << "1: TOWN\n";
        cout << "2: FOREST\n";
        cout << "3: DUNGEON\n";
        cout << "4: CASTLE\n";
        cout << "5: FOREIGN\n";
        cout << "6: QUIT\n";
        cin >> choice;

        switch (choice)
        {
        default:
            cout << "ERROR";
            /*-----------STAGE 1-----------*/
        case 1:
            stage1(info, playerName, playerHealth, playerDamage);
            break;
            /*-----------STAGE 2-----------*/
        case 2:
            // TBD
            break;
            /*-----------STAGE 3-----------*/
        case 3:
            // TBD
            break;
            /*-----------STAGE 4-----------*/
        case 4:
            // TBD
            break;
            /*-----------STAGE 5-----------*/
        case 5:
            // TBD
            break;
            /*-----------QUIT-----------*/
        case 6:
            cout << "You have chose to quit the program.\n";
            break;
        }

    } while (choice != 6 || LIVES <= 0);

    cout << "GAME OVER!";
}

void getEnemyInfo(Enemy x[])
{
    ifstream inputFile;
    inputFile.open("EnemyInfo.txt");

        for (int i = 0; i < 10; i++)
        {
            getline(inputFile, x[i].enemyName);

            inputFile >> x[i].enemyHealth;

            inputFile >> x[i].enemyDamage;
            
            inputFile.get();
        }
        inputFile.close();
}

void getPlayerInfo(string playerName, string playerGender, string playerType)
{

    cout << "PROPHET: Welcome player to NARNIA! Here you will encounter horrifying beasts and allies during your adventures.\n ";
    cout << "PROPHET: To start, please give us your name: ";
    cin >> playerName;

    cout << "PROPHET: Why, it is nice to meet you " << playerName << ". My name is PROPHET, and I am here to assist you on your journey.\n";
    cout << "PROPHET: What is your preferred gender? ";
    cin >> playerGender;

    cout << "PROPHET: So you are a " << playerGender << " then.\n";
    cout << "PROPHET: Here in NARNIA there are multiple tribes and creatures. Are you a Elf? Maybe a Vampire? ";
    cin >> playerType;

    cout << "PROPHET: My my my, an " << playerType << " is very interesting indeed.\n";
    cout << "PROPHET: Getting the boring questions out of the way, lets move onto game settings. Please enter them below: \n\n";
}

int getPlayerHealth()
{
    int playerHealth;
    cout << "PLAYER HEALTH: ";
    cin >> playerHealth;
    while (playerHealth < 1 || playerHealth > 1000)
    {
        cout << "Invalid input for player health. Please enter a number between 1 - 1000: ";
        cin >> playerHealth;
    }
    cout << "\n";
    return playerHealth;
}

int getPlayerDamage()
{
    int playerDamage;
    cout << "PLAYER DAMAGE: ";
    cin >> playerDamage;

    while (playerDamage < 1 || playerDamage > 1000)
    {
        cout << "Invalid input for player damage. Please enter a number between 1 - 1000: ";
        cin >> playerDamage;
    }
    cout << "\n";
    return playerDamage;
}

int stage1(Enemy info[], string playerName, int playerHealth, int playerDamage)
{
    int LIVES = 3;
    int choice;

    // INTRODUCTION
    cout << "******************************** STAGE 1: TOWN ********************************\n";
    cout << "PROPHET: On the outskirts of Geneva, a young foreigner encounters a brave young girl.\n";
    cout << "PROPHET: Here, the young foreigner walks upon a dangerous path and discovers something inside him: a hidden power bestowed by the gods.\n\n";
    cout << "STRANGER: WHAAAAAAAAAAAAAAAAAA\n";
    cout << "STRANGER: WHO'S THERE!?!?! I HAVE A STICK AND I'M NOT AFRAID TO USE IT!\n\n";

    // PLAYER CHOICE
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "                PLAYER CHOICE\n";
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "1. SIT PATIENTLY\n";
    cout << "2. RUN AWAY\n";
    cout << "3. THREATEN\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You sit patiently hoping nothing goes wrong...\n";
        cout << "STRANGER: Well what are you staring at me for? Arne't you gonna say hello?\n";
        break;
    case 2:
        cout << "You run out of fear...\n";
        cout << "STRAINGER: HEY! WAIT! WHERE ARE YOU GOING!?! COME BACK!\n";
        break;
    case 3:
        cout << "You puff your chest and show ferocity...\n";
        cout << "STRANGER: Guaaaaaah! I'm not looking for a fight!\n";
        break;
    }
    cout << "STRANGER: On second thought, you don't look too shabby.\n";
    cout << "REBECCA: My name is Rebecca, and I'm a peasant living on the outer skirts of Town.\n";
    cout << "REBECCA: What brings you here?\n\n";

    // PLAYER CHOICE
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "                PLAYER CHOICE\n";
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "1. I'M LOOKING TO HUNT MONSTERS\n";
    cout << "2. I'M LOST\n";
    cout << "3. I WAS INTERESTED IN THE WARRIOR GUILD\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You inform Rebecca on your will to hunt monsters...\n";
        cout << "REBECCA: Hunt monsters!?! Are you crazy? Only the strongest of the strong hunt those guys.\n";
        cout << "REBECCA: On this side of town, we have over 1,000 deaths a year by those treacherous monsters. Ugh!\n";
        cout << "REBECCA: But your strong! I know you can do it!\n";
        break;
    case 2:
        cout << "You ask for your way home...\n";
        cout << "REBECCA: Why go home when you can live in this dump! Just kidding...\n";
        cout << "REBECCA: I don't know my way home myself. I guess I could call this place my home.\n";

        break;
    case 3:
        cout << "You spark interest in the Warriors Guild...\n";
        cout << "REBECCA: The Warriors Guild is a faction of the worlds mightiest warriors. They group together and hunt monsters.\n";
        cout << "REBECCA: Be careful, because the head warriors are known to abandon their men to get more pay. I hate those guys.\n";
        break;
    }
    cout << "REBECCA: It's getting kinda dark. We should make our way home.\n";
    cout << "REBECCA: Wouldn't it be crazy if we encountered a monster right now? Ha ha, ha ha...\n\n";

    // ENEMY ENCOUNTER (FIRST ONE)
    LIVES = encounterEnemy(info, playerName, playerHealth, playerDamage, LIVES);

    cout << "REBECCA: OH MY GOD!\n";
    cout << "REBECCA: I'm alive! You're alive! Lord have mercy on our souls!\n";
    cout << "REBECCA: Seriously though, how did you do that?\n\n";

    // PLAYER CHOICE
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "                PLAYER CHOICE\n";
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "1. I TRAIN A LOT\n";
    cout << "2. I GOT LUCKY\n";
    cout << "3. I DON'T REMEMBER\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You inform Rebecca on your training regimine...\n";
        cout << "REBECCA: You train for 6 hours a day? Wow!\n";
        cout << "REBECCA: I train every day and I still can't defeat a monster.\n";
        cout << "REBECCA: Maybe now you can become a true Warrior Guild member!\n";
        break;
    case 2:
        cout << "You blame your efforts on luck\n";
        cout << "REBECCA: Pshhhhh! That wasn't luck! That was pure skill!\n";
        cout << "REBECCA: If it was luck, then why did you not take a lot of damage? You're barely scratched!\n";

        break;
    case 3:
        cout << "You're memory goes hazy...\n";
        cout << "REBECCA: Hey hey hey! Snap back into it! Did you hit your head or something?\n";
        cout << "REBECCA: I would take you to the doctor, but I'm running late. My parents are gonna kill me! Like literally!\n";
        break;
    }
    cout << "REBECCA: Well, thanks for saving me! I'll see you around!\n";

    // ENEMY ENCOUNTER (SECOND ONE)
    LIVES = encounterEnemy(info, playerName, playerHealth, playerDamage, LIVES);
    cout << "Man, I can't catch a break...\n";
    cout << "******************************** STAGE 1 END ********************************\n\n";
    return LIVES;
}



int encounterEnemy(Enemy x[], string playerName, int playerHealth, int playerDamage, int LIVES)
{
    int seed = time(0);
    srand(seed);
    int max = 9; // CHANGE THIS WHEN ADDING ENEMIES. REPRESENTS THE INDEX THE ENEMY IS IN.
    int min = 0;
    int index = (rand() % (max - min + 1)) + min;
    int randommultiplier = (rand() % (4 - 1 + 1)) + 1;
    int decision;
    int newPlayerDamage;
    int battleHEALTH = x[index].enemyHealth;

    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "     OH NO! YOU ENCOUNTERED AN ENEMY!\n";
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "NAME: " << x[index].enemyName << "\n";
    cout << "HEALTH: " << x[index].enemyHealth << "\n";
    cout << "DAMAGE: " << x[index].enemyDamage << "\n";
    cout << "\n\n";

    // PLAYER FIGHT OPTION -------------------------------------------------
    do
    {
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        cout << "               BATTLE STATS\n";
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        cout << "PLAYER HEALTH: " << playerHealth << "\n";
        cout << "PLAYER LIVES: " << LIVES << "\n";
        cout << "ENEMY HEALTH: " << battleHEALTH << "\n";
        cout << "___________________________________________\n";

        cout << "What would you like to do?\n";
        cout << "1: ATTACK!\n";
        cout << "2: DEFEND!\n";
        cout << "3: CRITICAL STRIKE\n";
        cin >> decision;
        cout << "\n";

        switch (decision)
        {
        default:
            bool isValid();
            /*-----------STAGE 1-----------*/
        case 1:
            cout << "You have chosen to attack! You did " << playerDamage << " damage to " << x[index].enemyName << ".\n";
            battleHEALTH = battleHEALTH - playerDamage;
            break;
            /*-----------STAGE 2-----------*/
        case 2:
            cout << "You have chosen to defend! " << x[index].enemyName << " did " << x[index].enemyDamage / 2 << " damage.\n";
            playerHealth = playerHealth - (x[index].enemyDamage / 2);
            break;
            /*-----------STAGE 2-----------*/
        case 3:
            cout << "You have chosen to perform a critical hit!\n";
            int randommultiplier = (rand() % (4 - 1 + 1)) + 1;
            newPlayerDamage = playerDamage * randommultiplier;
            battleHEALTH = battleHEALTH - newPlayerDamage;
            cout << "You did " << newPlayerDamage << " damage to " << x[index].enemyName << ".\n";
            break;
        }
    } while (battleHEALTH > 0 && playerHealth > 0);


    // FIGHT OUTCOME -------------------------------------------------
    if (battleHEALTH <= 0)
    {
        cout << "You have defeated " << x[index].enemyName << "! Congratulations!\n\n";
    }
    else 
    {
        LIVES = LIVES - 1;
        cout << "You have been defeated. Health has been restored to 100.\n";
        cout << "Current amount of lives: " << LIVES;
        cout << "Returning to your journey...\n";
    }
    return LIVES;
}
