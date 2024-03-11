#include <GL/glut.h>
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // House Base (GL_QUADS)
    glColor3f(0.1f, 0.4f, 0.4f);
    glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glEnd();

    // Roof (GL_TRIANGLES)
    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.5, 0.5);
    glEnd();

    // Door (GL_QUADS)
    glColor3f(0.4f, 0.2f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(-0.1, -0.5);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.1, 0.0);
    glVertex2f(-0.1, 0.0);
    glEnd();

    // Window 1 (GL_QUADS)
    glColor3f(0.3f, 0.7f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.3, -0.2);
    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.4, -0.1);
    glEnd();

    // Window 2 (GL_QUADS)
    glColor3f(0.3f, 0.7f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(0.3, -0.2);
    glVertex2f(0.4, -0.2);
    glVertex2f(0.4, -0.1);
    glVertex2f(0.3, -0.1);
    glEnd();

    glFlush();
}




int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Rumah Kita");
	glutInitWindowSize(640, 480);
    glutDisplayFunc(display);
   
    glutMainLoop();

    return 0;
}
