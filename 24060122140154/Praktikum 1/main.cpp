#include <gl/glut.h>

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    // kepala
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.12, 0.3, 0.12, 0.01);

    // badan
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.10, 0.0, 0.10, -0.3);

    // tangan kiri
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.14, -0.0, -0.10, -0.70);

    // tangan kanan
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.1, -0.0, 0.14, -0.70);

    // kaki kiri
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.04, -0.30, -0.08, -1);

    // kaki kanan
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.04, -0.30, 0.08, -1);

    // GL_LINE_STRIP
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.9, -0.5);
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.8, -0.2);
    glVertex2f(-0.7, 0.0);
    glEnd();

    // GL_LINE_LOOP
    glColor3f(0.0f, 1.0f, 0.0f); // Hijau
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.3, -0.2);
    glVertex2f(-0.2, 0.0);
    glEnd();

    
    // GL_TRIANGLE_FAN 
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.5, 0.5);    
    glVertex2f(0.8, 0.5);    
    glVertex2f(0.7, 0.8);    
    glVertex2f(0.6, 0.6);    
    glVertex2f(0.4, 0.4);    
    glVertex2f(0.3, 0.3);    
    glVertex2f(0.4, 0.2);    
    glVertex2f(0.6, 0.2);    
    glVertex2f(0.7, 0.4);    
    glVertex2f(0.8, 0.3);
    glEnd();

    // GL_TRIANGLE_STRIP
    glColor3f(1.0f, 1.0f, 0.0f); // Kuning
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.6, -0.5);
    glVertex2f(0.9, -0.5);
    glVertex2f(0.7, -0.2);
    glVertex2f(0.8, 0.0);
    glVertex2f(0.9, 0.1);
    glEnd();

    // GL_QUADS
    glColor3f(1.0f, 0.0f, 1.0f); // Ungu
    glBegin(GL_QUADS);
    glVertex2f(-0.9, 0.4);
    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.6, 0.7);
    glVertex2f(-0.9, 0.7);
    glEnd();

    // GL_QUAD_STRIP
    glColor3f(0.5f, 0.5f, 0.5f); // Abu-abu
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.4, 0.4);
    glVertex2f(-0.1, 0.4);
    glVertex2f(-0.3, 0.7);
    glVertex2f(-0.1, 0.7);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Segi Empat dan Primitif OpenGL");
    glutDisplayFunc(SegiEmpat);
    // Hitam
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

