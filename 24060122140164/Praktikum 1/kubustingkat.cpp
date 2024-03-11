#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //Persegi 1
    glBegin(GL_QUAD_STRIP);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f) ;
    glVertex2f(-0.72, -0.12);
    glVertex2f(-0.42, -0.12);
    glVertex2f(-0.72, -0.42);
    glVertex2f(-0.42, -0.42);
    glEnd();
    
    //Persegi 2
    glBegin(GL_QUAD_STRIP);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);//orange/brown
    glVertex2f(-0.4, -0.12);
    glVertex2f(-0.1, -0.12);
    glVertex2f(-0.4, -0.42);
    glVertex2f(-0.1, -0.42);
    glEnd();
    
    //Persegi 3
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.0f, 1.0f);//Blue
    glVertex2f(-0.08, -0.12);
    glVertex2f(0.24, -0.12);
    glVertex2f(-0.08, -0.42);
    glVertex2f(0.24, -0.42);
    glEnd();
    
    //Persegi 4
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.5f, 0.5f, 5.0f);//baby Blue
    glVertex2f(0.26, -0.12);
    glVertex2f(0.56, -0.12);
    glVertex2f(0.26, -0.42);
    glVertex2f(0.56, -0.42);
    glEnd();
    
    //Persegi 5
    glBegin(GL_QUAD_STRIP);
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac
    glVertex2f(-0.9, -0.1);
    glVertex2f(-0.6, -0.1);
    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.6, 0.2);
    glEnd();
    
    //Persegi 5
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.1, 0.2, 0.4); // Warna abu-abu
    glVertex2f(-0.55, -0.1);
    glVertex2f(-0.25, -0.1);
    glVertex2f(-0.55, 0.2);
    glVertex2f(-0.25, 0.2);
    glEnd();
    
    //Persegi 6
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glVertex2f(-0.2, -0.1);
    glVertex2f(0.1, -0.1);
    glVertex2f(-0.2, 0.2);
    glVertex2f(0.1, 0.2);
    glEnd();
   
   //Persegi 7
    glBegin(GL_QUAD_STRIP);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glVertex2f(0.15, -0.1);
    glVertex2f(0.45, -0.1);
    glVertex2f(0.15, 0.2);
    glVertex2f(0.45, 0.2);
    glEnd();
    
    //Persegi 7
    glBegin(GL_QUAD_STRIP);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    glVertex2f(0.5, -0.1);
    glVertex2f(0.8, -0.1);
    glVertex2f(0.5, 0.2);
    glVertex2f(0.8, 0.2);
    glEnd();
    
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
