#include <GL/glut.h>
#include <cmath>

const float PI = 3.14;

void Lingkaran() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    for (int i = 0; i <= 360; i++) {
        float angle = i * PI / 180;
        glVertex2f(0.8 * cos(angle), 0.8 * sin(angle));
    }
    glEnd();
    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lingkaran");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutDisplayFunc(Lingkaran);
    glutMainLoop();

    return 0;
}
