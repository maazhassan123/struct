#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

const int height = 20;
const int width = 40;

int birdY = height / 2;
int pipeX = width - 1;
int gapY = 8;
int score = 0;
bool gameOver = false;

void draw() {
    system("cls");

    // top wall
    for (int i = 0; i < width; i++) cout << "-";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {

            if (j == 0 || j == width - 1)
                cout << "|";

            else if (j == 10 && i == birdY)
                cout << "O";   // bird

            else if (j == pipeX &&
                    (i < gapY || i > gapY + 4))
                cout << "#";   // pipe

            else
                cout << " ";
        }
        cout << endl;
    }

    // bottom wall
    for (int i = 0; i < width; i++) cout << "-";
    cout << "\nScore: " << score << endl;
}

void input() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == ' ')
            birdY -= 2;
        else if (ch == 27)
            gameOver = true;
    }
}

void logic() {
    birdY++;        // gravity
    pipeX--;        // move pipe

    if (pipeX == 10 &&
       (birdY < gapY || birdY > gapY + 4))
        gameOver = true;

    if (pipeX < 0) {
        pipeX = width - 1;
        gapY = rand() % 10 + 3;
        score++;
    }

    if (birdY < 0 || birdY >= height)
        gameOver = true;
}

int main() {
    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(120);   // smooth speed
    }

    system("cls");
    cout << "GAME OVER\n";
    cout << "Final Score: " << score << endl;
    _getch();
    return 0;
}
