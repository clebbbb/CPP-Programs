#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

const int windowHeight = 20;
const int windowWidth = 40;
const char paddleChar = '#';
const char ballChar = '@';

struct Paddle {
    int x, y;
    int width, height;
    int direction;

    Paddle(int startX, int startY, int paddleWidth, int paddleHeight)
        : x(startX), y(startY), width(paddleWidth), height(paddleHeight), direction(0) {}
};

struct Ball {
    float x, y;
    float directionX, directionY;

    Ball(float startX, float startY, float dirX, float dirY)
        : x(startX), y(startY), directionX(dirX), directionY(dirY) {}
};

void drawBoard(const Paddle& paddle1, const Paddle& paddle2, const Ball& ball) {
    system("cls");

    for (int i = 0; i < windowHeight; i++) {
        for (int j = 0; j < windowWidth; j++) {
            if (i >= paddle1.y && i < paddle1.y + paddle1.height && j == paddle1.x)
                cout << paddleChar;
            else if (i >= paddle2.y && i < paddle2.y + paddle2.height && j == paddle2.x)
                cout << paddleChar;
            else if (i == static_cast<int>(ball.y) && j == static_cast<int>(ball.x))
                cout << ballChar;
            else
                cout << " ";
        }
        cout << endl;
    }
}

void updatePaddlePosition(Paddle& paddle) {
    paddle.y += paddle.direction;

    if (paddle.y < 0)
        paddle.y = 0;
    else if (paddle.y > windowHeight - paddle.height)
        paddle.y = windowHeight - paddle.height;
}

void updateBallPosition(Ball& ball, const Paddle& paddle1, const Paddle& paddle2) {
    ball.x += ball.directionX;
    ball.y += ball.directionY;

    // Check for collision with paddles
    if (ball.y >= paddle1.y && ball.y < paddle1.y + paddle1.height && ball.x == paddle1.x + 1)
        ball.directionX = -ball.directionX;

    if (ball.y >= paddle2.y && ball.y < paddle2.y + paddle2.height && ball.x == paddle2.x - 1)
        ball.directionX = -ball.directionX;

    // Check for collision with walls
    if (ball.y <= 0 || ball.y >= windowHeight - 1)
        ball.directionY = -ball.directionY;
}

int main() {
    // Set console window size
    system("mode con: lines=20 cols=40");

    // Create the paddles
    Paddle paddle1(1, windowHeight / 2 - 2, 1, 4);
    Paddle paddle2(windowWidth - 2, windowHeight / 2 - 2, 1, 4);

    // Create the ball
    Ball ball(windowWidth / 2.0f, windowHeight / 2.0f, -1.0f, -1.0f);

    // Game loop
    while (true) {
        // Draw the board
        drawBoard(paddle1, paddle2, ball);

        // Move the paddles
        if (_kbhit()) {
            char key = _getch();
            if (key == 'w' && paddle1.y > 0)
                paddle1.direction = -1;
            else if (key == 's' && paddle1.y < windowHeight - paddle1.height)
                paddle1.direction = 1;
            else if (key == 'i' && paddle2.y > 0)
                paddle2.direction = -1;
            else if (key == 'k' && paddle2.y < windowHeight - paddle2.height)
                paddle2.direction = 1;
        }

        // Update paddle positions
        updatePaddlePosition(paddle1);
        updatePaddlePosition(paddle2);

        // Update ball position
        updateBallPosition(ball, paddle1, paddle2);

        // Exit the game if the ball goes out of bounds
        if (ball.x <= 0 || ball.x >= windowWidth - 1)
            break;

        // Wait for a short while to control game speed
        Sleep(10);
    }

    // Clear the console and display game over message
    system("cls");
    cout << "Game Over!" << endl;

    return 0;
}
