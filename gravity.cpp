#include <stdio.h>
#include "raylib.h"
int main(){
    // Window
    float windowHeight{ 500 };
    float windowWidth{ 600 };

    // Circle
    float radius = 25;
    float posX = windowHeight / 2;
    float posY = windowWidth / 2;
    bool cclicked  = false;
    float cvelocity = 0;
    const float cgravity = 1000;

    // Mouse position
    float mPosX;
    float mPosY;


    InitWindow(windowWidth, windowHeight, "Hello World! ");
    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(WHITE);

            // Draw a circle
            DrawCircle(posX, posY, radius, RED);
            float dt = GetFrameTime();

            // Get mouse click position
            Vector2 mousePos = GetMousePosition();
            mPosX = mousePos.x;
            mPosY = mousePos.y;

            // Get the box points
            float l_circleX = posX - radius;
            float r_circleX = posX + radius;
            float u_circleY = posY - radius;
            float b_circleY = posY + radius;
            

            bool inCircle = mPosX >= l_circleX && mPosX <= r_circleX && mPosY >= u_circleY && mPosY <= b_circleY;
            if ((inCircle && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) || IsMouseButtonDown(MOUSE_LEFT_BUTTON)){
                posX = mPosX;
                posY = mPosY;
                cclicked = !cclicked;
            }

            if (posY <= windowHeight-radius){
                // gravity
                cvelocity += cgravity * dt;
                posY += cvelocity * dt;
            }else{
                cvelocity = 0;
            }

            
        EndDrawing();
    }
    CloseWindow();
}