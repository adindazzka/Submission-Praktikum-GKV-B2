// Nama : Adinda Rizka Hamdasati
// NIM  : 24060122140139
// Lab  : Grafika dan Komputasi Visual B2

#include <GLUT/glut.h>
#include <cmath>

void Lingkaran(float radius) {
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(5);
    glPushMatrix();
    #define PI 3.1415926535898
    glBegin (GL_LINE_LOOP);
    GLint circle_points = 100;
    int i;
    float angle;
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex2f(radius * cos(angle), radius * sin(angle));
    }
    glEnd();
    glPopMatrix();

}

void Display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    Lingkaran(0.5);
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(720, 720);
    glutCreateWindow("Lingkaran");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    
    glutDisplayFunc(Display);
    glutMainLoop();
    
    return 0;
}
