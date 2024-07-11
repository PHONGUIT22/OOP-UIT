#include <iostream>
#include <conio.h>//Ham doc phim
#include <windows.h>//Su dung ham sleep tam dung chuong trinh

using namespace std;

const int WIDTH = 30;
const int HEIGHT = 30;

class SnakeGame {
private:
    bool gameOver;
    int score;
    int x, y; // Tọa độ đầu rắn
    int fruitX, fruitY; // Tọa độ mồi
    int tailX[100], tailY[100]; // Tọa độ các phần đuôi của rắn
    int tailLength;
    enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
    Direction dir;

public:
    SnakeGame() {
        gameOver = false;
        score = 0;
        x = WIDTH / 2;
        y = HEIGHT / 2;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        tailLength = 0;
        dir = STOP;
    }

    void Draw() {
        system("cls");
         system("cls");
        for (int i = 0; i < WIDTH + 3; i++)
            cout << "#";
        cout << endl;

        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (j == 0)
                    cout << "#";
                if (i == y && j == x)
                    cout << "O";
                else if (i == fruitY && j == fruitX)
                    cout << "F";
                else {
                    bool printTail = false;
                    for (int k = 0; k < tailLength; k++) {
                        if (tailX[k] == j && tailY[k] == i) {
                            cout << "o";
                            printTail = true;
                        }
                    }
                    if (!printTail)
                        cout << " ";
                }

                if (j == WIDTH - 1)
                    cout << "#";
            }
           cout << endl;
           
        }

        for (int i = 0; i < WIDTH + 2; i++)
            cout << "#";
        cout << endl;

        cout << "Score: " << score << endl;
    }

    void Input() {
        if (_kbhit()) {
            switch (_getch()) {
                case 'a':
                    dir = LEFT;
                    break;
                case 'd':
                    dir = RIGHT;
                    break;
                case 'w':
                    dir = UP;
                    break;
                case 's':
                    dir = DOWN;
                    break;
                case 'x':
                    gameOver = true;
                    break;
            }
        }
    }

    void Logic() {
        int prevX = tailX[0];
        int prevY = tailY[0];
        int prev2X, prev2Y;
        tailX[0] = x;
        tailY[0] = y;
        for (int i = 1; i < tailLength; i++) {
            prev2X = tailX[i];
            prev2Y = tailY[i];
            tailX[i] = prevX;
            tailY[i] = prevY;
            prevX = prev2X;
            prevY = prev2Y;
        }

        switch (dir) {
            case LEFT:
                x--;
                break;
            case RIGHT:
                x++;
                break;
            case UP:
                y--;
                break;
            case DOWN:
                y++;
                break;
        }

        // Xử lý khi rắn cắn vào tường
        if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT)
            gameOver = true;

        // Xử lý khi rắn cắn vào chính nó
        for (int i = 0; i < tailLength; i++) {
            if (tailX[i] == x && tailY[i] == y)
                gameOver = true;
        }

        // Xử lý khi rắn ăn mồi
        if (x == fruitX && y == fruitY) {
            score += 10;
            fruitX = rand() % WIDTH;
            fruitY = rand() % HEIGHT;
            tailLength++;
        }
    }

    void Run() {
        while (!gameOver) {
            Draw();
            Input();
            Logic();
            Sleep(100); // Tạm dừng 10 milliseconds
        }

        system("cls");
        cout << "Game Over! Your Score: " << score << endl;
    }
};

int main() {
    SnakeGame game;
    game.Run();

    return 0;
}
