// Nama : Adinda Rizka Hamdasati
// NIM  : 24060122140139

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GLUT/glut.h>
#include <GLUT/glut.h>

double rotAngle = 10;
double translateX = 0.0;
double translateY = 0.0;

void init()
{
    glClearColor(0, 0, 0, 0);
    glClearDepth(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 1, 1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(
            0.0, 0.0, 5.0,
            0.0, 0.0, 0.0,
            0.0, 1.0, 0.0); 
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotated(rotAngle, 0, 1, 0);
    glTranslated(translateX, translateY, 0.0);
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.0, 0.1, 0.1);
    glutSolidTeapot(1);
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}

void keyboard(unsigned char k, int x, int y)
{
    switch (k)
    {
        case 'a':
            rotAngle += 5;
            break;
        case 'l':
            rotAngle -= 5;
            break;
        case 'w':
            translateY += 0.1;
            break;
        case 's':
            translateY -= 0.1;
            break;
        case 'd':
            translateX += 0.1;
            break;
        case 'f':
            translateX -= 0.1;
            break;
        case 'q':
            exit(0);
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);
    glutCreateWindow("GLUT Example");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();
    return 0;
}
