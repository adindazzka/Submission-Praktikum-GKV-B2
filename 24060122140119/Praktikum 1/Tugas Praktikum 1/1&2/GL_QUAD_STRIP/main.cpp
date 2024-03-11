// NAMA : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <GL/glut.h>

void quadstrip() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -1.0, 1.0); 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(0.0f, 0.0f, 0.0f); 
    glBegin(GL_QUAD_STRIP);
        glVertex2f(-4.0, -2.0);
        glVertex2f(-4.0, 2.0);
        glVertex2f(-2.0, -2.0);
        glVertex2f(-2.0, 2.0);
        glVertex2f(6.0, -6.0);
        glVertex2f(6.0, 6.0);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); 
    glutCreateWindow("GL_QUAD_STRIP");
    glutDisplayFunc(quadstrip);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}



