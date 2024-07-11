// #include <iostream>
// #include <conio.h>
// #include <windows.h>

// using namespace std;

// class Game {
// private:
//     int width;
//     int height;
//     int ballX;
//     int ballY;
//     int paddleX;
//     int score;

// public:
//     Game(int w, int h) {
//         width = w;
//         height = h;
//         ballX = width / 2;
//         ballY = 0;
//         paddleX = width / 2;
//         score = 0;
//     }

//     void draw() {
//         system("cls"); // Xóa màn hình console

//         // Vẽ biên trò chơi
//         for (int i = 0; i < width + 2; i++)
//             cout << "#";
//         cout << endl;

//         // Vẽ bóng và thanh ngang
//         for (int i = 0; i < height; i++) {
//             for (int j = 0; j < width; j++) {
//                 if (j == 0 || j == width - 1)
//                     cout << "#";
//                 else if (i == ballY && j == ballX)
//                     cout << "O";
//                 else if (i == height - 1 && j >= paddleX - 2 && j <= paddleX + 2)
//                     cout << "=";
//                 else
//                     cout << " ";
//             }
//             cout << endl;
//         }

//         // Hiển thị điểm số
//         cout << "Score: " << score << endl;

//         // Vẽ biên trò chơi
//         for (int i = 0; i < width + 2; i++)
//             cout << "#";
//         cout << endl;
//     }

//     void input() {
//         if (_kbhit()) {
//             char key = _getch();
//             if (key == 'a' && paddleX > 2)
//                 paddleX--;
//             else if (key == 'd' && paddleX < width - 3)
//                 paddleX++;
//             else if (key == 'q')
//                 exit(0);
//         }
//     }

//     void logic() {
//         ballY++;

//         // Kiểm tra nếu bóng chạm thanh ngang
//         if (ballY == height - 1 && ballX >= paddleX - 2 && ballX <= paddleX + 2) {
//             score++;
//             ballY = 0;
//             ballX = rand() % (width - 4) + 2; // Tạo vị trí ngẫu nhiên cho bóng
//         }

//         // Kiểm tra nếu bóng rơi xuống dưới cùng
//         if (ballY == height - 1) {
//             cout << "Game Over!" << endl;
//             exit(0);
//         }
//     }

//     void run() {
//         while (true) {
//             draw();
//             input();
//             logic();
//             Sleep(900);// toc do roi cua bong 
//         }
//     }
// };

// int main() {
//     int width = 40;
//     int height = 20;
    
//     Game game(width, height);
//     game.run();
    
//     return 0;
// }
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Game {
private:
    int width;
    int height;
    int ballX;
    int ballY;
    int paddleX;
    int score;
    string playerName;

public:
    Game(int w, int h) {
        width = w;
        height = h;
        ballX = width / 2;
        ballY = 0;
        paddleX = width / 2;
        score = 0;
        playerName = "";
    }

    void draw() {
        system("cls");

        for (int i = 0; i < width + 2; i++)
            cout << "#";
        cout << endl;

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (j == 0 || j == width - 1)
                    cout << "#";
                else if (i == ballY && j == ballX)
                    cout << "O";
                else if (i == height - 1 && j >= paddleX - 2 && j <= paddleX + 2)
                    cout << "=";
                else
                    cout << " ";
            }
            cout << endl;
        }

        cout << "Player: " << playerName << endl;
        cout << "Score: " << score << endl;

        for (int i = 0; i < width + 2; i++)
            cout << "#";
        cout << endl;
    }

   void input() {
    if (_kbhit()) {
        char key = _getch();
        if (key == 'a' && paddleX > 2)
            paddleX--;
        else if (key == 'd' && paddleX < width - 3)
            paddleX++;
        else if (key == 'q')
            exit(0);
    }
}

    void logic() {
        ballY++;

        if (ballY == height - 1 && ballX >= paddleX - 2 && ballX <= paddleX + 2) {
            score++;
            ballY = 0;
            ballX = rand() % (width - 4) + 2;
        }

        if (ballY == height - 1) {
            cout << "Game Over!" << endl;
            exit(0);
        }
    }

    void login() {
        cout << "Enter your name: ";
        cin >> playerName;
    }

    void run() {
        login();

        while (true) {
            draw();
            input();
            logic();
            Sleep(50);
        }
    }
};

int main() {
    int width = 40;
    int height = 20;
    
    Game game(width, height);
    game.run();
    
    return 0;
}
