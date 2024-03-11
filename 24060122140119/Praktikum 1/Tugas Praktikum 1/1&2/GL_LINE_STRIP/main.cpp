// NAMA : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <GL/glut.h>
void linestrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6, 6, -6, 6, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-4.00, 0.00);
    glVertex2f(-3.00, 2.00);
    glVertex2f(-2.00, 0.00);
    glVertex2f(-1.00, 2.00);
    glVertex2f(0.0, 0.00);
    glVertex2f(1.00, 2.00);
    glVertex2f(2.00, 0.00);
    glVertex2f(3.00, 2.00);
    glVertex2f(4.00, 0.00);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); 
    glutCreateWindow("GL_LINE_STRIP");
    glutDisplayFunc(linestrip);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

