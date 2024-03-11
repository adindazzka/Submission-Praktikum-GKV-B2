//NAMA	:GIGIH HAIDAR FALAH
//LAB	:B2
//NIM	:24060122140150
//PRAKTIKUM1


#include <GL/glut.h>

void FullGLObject() {
    // GL_LINE_STRIP
    glLineWidth(5.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);  // Red color
    glVertex2f(-0.9, 0.8);
    glVertex2f(-0.8, 0.9);
    glVertex2f(-0.7, 0.8);
    glVertex2f(-0.6, 0.9);
    glEnd();

    // GL_LINE_LOOP
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 1.0f, 0.0f); 
    glVertex2f(-0.5, 0.7);
    glVertex2f(-0.4, 0.8);
    glVertex2f(-0.3, 0.7);
    glVertex2f(-0.4, 0.6);
    glEnd();

    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 1.0f);  // Blue color
    glVertex2f(0.1, 0.3);
    glVertex2f(0.3, 0.8);
    glVertex2f(0.5, 0.3);
    
    glEnd();

    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 1.0f, 0.0f);  // Yellow color
    glVertex2f(0.5, 0.8);
    glVertex2f(0.7, 0.3);
    glVertex2f(0.9, 0.8);
    
    glEnd();

    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);  // Magenta color
    glVertex2f(-0.8, -0.1);
    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.3, -0.8);
    glVertex2f(-0.8, -0.8);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 1.0f, 1.0f);  // Cyan color
    glVertex2f(0.3, -0.1);
    glVertex2f(0.4, -0.8);
    glVertex2f(0.6, -0.1);
    glVertex2f(0.8, -0.8);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    FullGLObject();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutCreateWindow("2.FullGLObject");
    glutDisplayFunc(display);
	glClearColor(1.0f, 0.39f, 0.28f, 1.0f);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);  // Set the coordinate system
    glutMainLoop();
    return 0;
}

