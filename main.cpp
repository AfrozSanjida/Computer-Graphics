#include<bits/stdc++.h>

#include<GL/glu.h>

#include<GL/glut.h>

#include <windows.h>

#include <iostream>

#include <math.h>

#include <stdlib.h>

#include<GL/gl.h>

#include<cstdio>

#include<time.h>



# define PI           3.14159265358979323846

using namespace std;







void memorial() {

    glBegin(GL_TRIANGLES); ///triangle of top part

    glColor3ub(166, 166, 166); /// color of triangle



    glVertex2f(-0.01f, 0.7f);

    glVertex2f(0.01f, 0.7f);

    glVertex2f(0.0f, 0.75f);



    glEnd();



    glBegin(GL_TRIANGLES);  /// triangle of middle part

    glColor3ub(204, 204, 204);/// color triangle



    glVertex2f(-0.2f, -0.1f);

    glVertex2f(0.2f, -0.1f);

    glVertex2f(0.0f, 0.7f);



    glEnd();




    glBegin(GL_TRIANGLES); /// triangle of lower portion (red)

    glColor3ub(150, 40, 27);/// color triangle



    glVertex2f(-0.2f, -0.1f);

    glVertex2f(0.2f, -0.1f);

    glVertex2f(0.0f, 0.0f);



    glEnd();



glBegin(GL_QUADS); /// draw a square (4 point)

glColor3ub(128, 128, 128);/// color triangle



glVertex2f(0.0f, 0.0f);

glVertex2d(0.125f, 0.2f);

glVertex2f(0.0f, 0.4f);

glVertex2f(-0.125f, 0.2f);

glEnd();



glBegin(GL_POLYGON); /// Draw  line in Square using polygon 6 points.

glColor3ub(166, 166, 166);/// color triangle



glVertex2f(-0.115f, 0.215f);

glVertex2f(-0.125f, 0.2f);

glVertex2f(-0.115f, 0.185f);

glVertex2f(0.115f, 0.185f);

glVertex2f(0.125f, 0.2f);

glVertex2f(0.115f, 0.215f);



glEnd();



glBegin(GL_QUADS); ///side border of central triangles right side

glColor3ub(230, 230, 230);/// color triangle



glVertex2f(0.2f, -0.1f);

glVertex2f(0.21f, -0.1f);

glVertex2f(0.01f, 0.7f);

glVertex2f(0.00f, 0.7f);



glEnd();



glBegin(GL_QUADS); ///side border of central triangles left side

glColor3ub(230, 230, 230);/// color triangle



glVertex2f(-0.2f, -0.1f);

glVertex2f(-0.21f, -0.1f);

glVertex2f(-0.01f, 0.7f);

glVertex2f(-0.00f, 0.7f);



glEnd();



glBegin(GL_TRIANGLES); /// triangle of right side 1

glColor3ub(204, 204, 204);/// color triangle



glVertex2f(0.21f, -0.1f);

glVertex2f(0.3f, -0.1f);

glVertex2f(0.06f, 0.5f);



glEnd();

glBegin(GL_QUADS); ///side border of right side triangle 1

glColor3ub(230, 230, 230);/// color triangle



glVertex2f(0.3f, -0.1f);

glVertex2f(0.31f, -0.1f);

glVertex2f(0.055f, 0.52f);

glVertex2f(0.054f, 0.5f);



glEnd();



glBegin(GL_TRIANGLES);///triangle of left side 1

glColor3ub(204, 204, 204);/// color triangle



glVertex2f(-0.21f, -0.1f);

glVertex2f(-0.3f, -0.1f);

glVertex2f(-0.06f, 0.5f);



glEnd();







glBegin(GL_QUADS);///side border of left side  triangle  1

glColor3ub(230, 230, 230);/// color triangle



glVertex2f(-0.3f, -0.1f);

glVertex2f(-0.31f, -0.1f);

glVertex2f(-0.055f, 0.52f);

glVertex2f(-0.054f, 0.5f);



glEnd();



glBegin(GL_TRIANGLES); /// triangle of right side 2

glColor3ub(204, 204, 204);



glVertex2f(0.31f, -0.1f);

glVertex2f(0.4f, -0.1f);

glVertex2f(0.1f, 0.4f);



glEnd();



glBegin(GL_TRIANGLES); /// triangle of left side 2

glColor3ub(204, 204, 204);



glVertex2f(-0.31f, -0.1f);

glVertex2f(-0.4f, -0.1f);

glVertex2f(-0.1f, 0.4f);



glEnd();



glBegin(GL_QUADS);///side border of right side triangle 2


glColor3ub(230, 230, 230);



glVertex2f(0.4f, -0.1f);

glVertex2f(0.41f, -0.1f);

glVertex2f(0.095f, 0.42f);

glVertex2f(0.1f, 0.4f);



glEnd();



glBegin(GL_QUADS); ///side border of left side triangle 2


glColor3ub(230, 230, 230);



glVertex2f(-0.4f, -0.1f);

glVertex2f(-0.41f, -0.1f);

glVertex2f(-0.095f, 0.42f);

glVertex2f(-0.1f, 0.4f);



glEnd();



glBegin(GL_TRIANGLES);/// triangle of right side 3

glColor3ub(204, 204, 204);



glVertex2f(0.41f, -0.1f);

glVertex2f(0.5f, -0.1f);

glVertex2f(0.167f, 0.3f);



glEnd();



glBegin(GL_TRIANGLES);/// triangle of left side 2

glColor3ub(204, 204, 204);



glVertex2f(-0.41f, -0.1f);

glVertex2f(-0.5f, -0.1f);

glVertex2f(-0.167f, 0.3f);



glEnd();



glBegin(GL_QUADS); ///side border of right side triangle 3

glColor3ub(230, 230, 230);



glVertex2f(0.5f, -0.1f);

glVertex2f(0.51f, -0.1f);

glVertex2f(0.1568f, 0.316f);

glVertex2f(0.16f, 0.3f);



glEnd();



glBegin(GL_QUADS);///side border of left side triangle 3

glColor3ub(230, 230, 230);



glVertex2f(-0.5f, -0.1f);

glVertex2f(-0.51f, -0.1f);

glVertex2f(-0.1568f, 0.316f);

glVertex2f(-0.16f, 0.3f);



glEnd();



glBegin(GL_TRIANGLES);/// triangle of right side 4

glColor3ub(204, 204, 204);



glVertex2f(0.51f, -0.1f);

glVertex2f(0.6f, -0.1f);

glVertex2f(0.17f, 0.3f);



glEnd();



glBegin(GL_TRIANGLES); /// triangle of left side 4

glColor3ub(204, 204, 204);



glVertex2f(-0.51f, -0.1f);

glVertex2f(-0.6f, -0.1f);

glVertex2f(-0.17f, 0.3f);



glEnd();



glBegin(GL_QUADS);///side border of right side triangle 4

glColor3ub(230, 230, 230);



glVertex2f(0.6f, -0.1f);

glVertex2f(0.615f, -0.1f);

glVertex2f(0.15f, 0.33f);

glVertex2f(0.167f, 0.3f);



glEnd();



    glBegin(GL_QUADS);///side border of left side triangle 4

glColor3ub(230, 230, 230);



glVertex2f(-0.6f, -0.1f);

glVertex2f(-0.615f, -0.1f);

glVertex2f(-0.15f, 0.33f);

glVertex2f(-0.167f, 0.3f);



glEnd();



glBegin(GL_TRIANGLES);/// triangle of right side 5


glColor3ub(204, 204, 204);



glVertex2f(0.61f, -0.1f);

glVertex2f(0.7f, -0.1f);

glVertex2f(0.29f, 0.2f);



glEnd();



glBegin(GL_TRIANGLES);/// triangle of left side 5


glColor3ub(204, 204, 204);



glVertex2f(-0.61f, -0.1f);

glVertex2f(-0.7f, -0.1f);

glVertex2f(-0.29f, 0.2f);



glEnd();



glBegin(GL_QUADS);///side border of right side triangle 5

glColor3ub(230, 230, 230);



glVertex2f(0.7f, -0.1f);

glVertex2f(0.718f, -0.1f);

glVertex2f(0.25f, 0.24f);

glVertex2f(0.275f, 0.21f);



glEnd();



glBegin(GL_QUADS); ///side border of left side triangle 5

glColor3ub(230, 230, 230);



glVertex2f(-0.7f, -0.1f);

glVertex2f(-0.718f, -0.1f);

glVertex2f(-0.25f, 0.24f);

glVertex2f(-0.275f, 0.21f);



glEnd();





glBegin(GL_TRIANGLES);/// triangle of right side 6

glColor3ub(204, 204, 204);



    glVertex2f(0.71f, -0.1f);

    glVertex2f(0.8f, -0.1f);

    glVertex2f(0.3f, 0.2f);



glEnd();



glBegin(GL_TRIANGLES);/// triangle of left side 6



glColor3ub(204, 204, 204);

glVertex2f(-0.71f, -0.1f);

    glVertex2f(-0.8f, -0.1f);

    glVertex2f(-0.3f, 0.2f);



glEnd();



glBegin(GL_QUADS);///side border of right side triangle 6



glColor3ub(230, 230, 230);

glVertex2f(0.8f,-0.1f);

    glVertex2f(0.82f, -0.1f);

    glVertex2f(0.25f,0.241f);

    glVertex2f(0.265f, 0.221f);



glEnd();



glBegin(GL_QUADS);///side border of left side triangle 6

glColor3ub(230, 230, 230);



glVertex2f(-0.8f,-0.1f);

    glVertex2f(-0.82f, -0.1f);

    glVertex2f(-0.25f,0.241f);

    glVertex2f(-0.265f, 0.221f);



glEnd();





}



void day()

{

    glLoadIdentity();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glScalef(.7,.7,0);/// scale for make smaller

    memorial();///

    glPopMatrix();

    glFlush();

}



void national_memorialD() {

day();

}



int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitWindowSize(1200, 720);

    glutInitWindowPosition(50, 50);

    glutCreateWindow("National Martyrs Memorial");

    glutDisplayFunc(national_memorialD);

    glutMainLoop();

    return 0;

}
