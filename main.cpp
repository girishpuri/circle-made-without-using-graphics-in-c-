#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main(){
    int width = 50, height = 20, rad;
    char ch;
    cout << "Enter the radius of circles less than or equal to 12: "; cin >> rad;
    cout << "\nEnter the character by which you make a circle: "; cin >>  ch;

    // Initialise a two dimensional array
    char display[width][height];

    // Create a empty display
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
           display[i][j] = ' '; // Every element of display equal to empty
        };
    };

    // Create a circle by using parametric equations of circle
    for(int angle = 0; angle < 360; angle += 1){
        // Calculate x and y by using parametic formulas of circle
        int x = (rad * cos(angle));
        int y = (rad * sin(angle));

        // Moving cordinates toward center of the display
        int cx = height/2 + x;
        int cy = width/2 + y;

        // Character which made the circle
        display[cx][cy] = ch;
    }

    // Display all elements present in display array
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
           cout << display[i][j];
        };
        cout << endl;
    };

    return 0;
}
