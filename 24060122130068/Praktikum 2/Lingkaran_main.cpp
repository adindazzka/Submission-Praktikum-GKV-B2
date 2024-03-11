#include <GL/glut.h>
#include <cmath>

const float PI = 3.14159265;

void Lingkaran() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);

    for (int i = 0; i <= 360; i++) {
        float angle = i * PI / 180;
        glVertex2f(0.8 * cos(angle), 0.8 * sin(angle));
    }
    glEnd();
    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(Lingkaran);
    glutMainLoop();

    return 0;
}

