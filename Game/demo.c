//Hangman gane
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void moveTo(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void pause(unsigned int milliseconds)
{
    clock_t goal = milliseconds + clock();
    while (goal > clock());
}

void displayDino(int jumpHeight)
{
    moveTo(5, 15 - jumpHeight);
    printf("  O ");
    moveTo(5, 16 - jumpHeight);
    printf(" /|\\ ");
    moveTo(5, 17 - jumpHeight);
    printf(" / \\ ");
}

void displayObstacle(int position, int type)
{
    moveTo(position, 17);
    if (type == 1) { // Short cactus
        printf(" | ");
    } else { // Tall cactus
        printf(" ||| ");
    }
}

void displayGround(int offset)
{
    moveTo(0, 18);
    for (int i = 0; i < 80; i++) {
        if ((i + offset) % 2 == 0)
            printf("_");
        else
            printf(" ");
    }
}

void displayGameInfo(int score, int lives, int level)
{
    moveTo(0, 0);
    printf("Press SPACE to jump, X to quit. LEVEL: %d", level);
    moveTo(60, 0);
    printf("Score: %d", score);
    moveTo(60, 1);
    printf("Lives: %d", lives);
}

void displayGameOver(int finalScore)
{
    system("cls");
    moveTo(30, 10);
    printf("GAME OVER!");
    moveTo(30, 12);
    printf("Final Score: %d", finalScore);
    moveTo(30, 14);
    printf("Press R to Restart or X to exit.");
}

int checkCollision(int obstaclePos, int jumpHeight, int obstacleType)
{
    int collisionHeight = (obstacleType == 1) ? 4 : 6;
    if (obstaclePos == 5 && jumpHeight < collisionHeight) {
        return 1; // Collision detected
    }
    return 0; // No collision
}

void runGame()
{
    int jumpHeight = 0, isJumping = 0, jumpDirection = 1, doubleJump = 0;
    int score = 0, lives = 3, level = 1;
    int obstaclePositions[] = {80, 130, 180};
    int obstacleTypes[] = {1, 2, 1};
    int powerUpPosition = 200;
    int speed = 40, groundOffset = 0;
    char input;

    system("mode con: lines=20 cols=80");

    while (lives > 0)
    {
        system("cls");

        displayGround(groundOffset);
        displayDino(jumpHeight);
        for (int i = 0; i < 3; i++) {
            displayObstacle(obstaclePositions[i], obstacleTypes[i]);
        }
        displayGameInfo(score, lives, level);

        for (int i = 0; i < 3; i++) {
            if (checkCollision(obstaclePositions[i], jumpHeight, obstacleTypes[i])) {
                lives--;
                if (lives > 0) {
                    moveTo(30, 10);
                    printf("Ouch! Lives left: %d", lives);
                    pause(1000);
                }
            }
        }

        if (powerUpPosition == 5 && jumpHeight >= 6) {
            lives++;
            moveTo(30, 10);
            printf("Extra Life Collected! Lives: %d", lives);
            pause(1000);
            powerUpPosition = 200 + rand() % 100;
        }

        for (int i = 0; i < 3; i++) {
            obstaclePositions[i]--;
            if (obstaclePositions[i] < 0) {
                obstaclePositions[i] = 80 + rand() % 50;
                obstacleTypes[i] = rand() % 2 + 1;
                score++;
                if (score % 10 == 0) {
                    level++;
                    speed -= 2;
                }
            }
        }

        powerUpPosition--;
        if (powerUpPosition < 0) {
            powerUpPosition = 200 + rand() % 100;
        }

        if (isJumping) {
            jumpHeight += jumpDirection;
            if (jumpHeight >= 8 && doubleJump == 0) {
                doubleJump = 1;
                jumpDirection = -1;
            } else if (jumpHeight >= 6 && doubleJump == 1) {
                jumpDirection = -1;
            }
            if (jumpHeight <= 0) {
                isJumping = 0;
                jumpDirection = 1;
                doubleJump = 0;
            }
        }

        if (_kbhit()) {
            input = _getch();
            if (input == ' ' && isJumping == 0) {
                isJumping = 1;
            } else if (input == ' ' && isJumping == 1 && doubleJump == 0) {
                jumpDirection = 1;
            } else if (input == 'x') {
                return;
            }
        }

        groundOffset = (groundOffset + 1) % 2;
        pause(speed);
    }

    displayGameOver(score);
}

void displayInstructions()
{
    system("cls");
    moveTo(20, 5);
    printf("Instructions:");
    moveTo(20, 7);
    printf("- Press SPACE to jump.");
    moveTo(20, 9);
    printf("- Press SPACE again while jumping for a double jump.");
    moveTo(20, 11);
    printf("- Avoid obstacles like cacti.");
    moveTo(20, 13);
    printf("- Press X during the game to quit.");
    moveTo(20, 15);
    printf("- Collect power-ups for extra lives.");
    moveTo(20, 17);
    printf("Press any key to go back to the main menu.");
    _getch();
}

void displayMenu()
{
    system("cls");
    printf("======= DINO RUNNER GAME =======\n");
    printf("1. Start New Game\n");
    printf("2. View Instructions\n");
    printf("3. Exit\n");
    printf("================================\n");
    printf("Choose an option (1-3): ");
}

int main()
{
    char choice;
    do {
        displayMenu();
        choice = _getch();

        switch (choice)
        {
        case '1':
            runGame(); // Start a new game
            break;
        case '2':
            displayInstructions(); // Show game instructions
            break;
        case '3':
            printf("\nExiting the game...\n");
            break;
        default:
            printf("\nInvalid choice! Please choose again.\n");
            pause(1000);
            break;
        }

    } while (choice != '3'); 

    return 0;
}
