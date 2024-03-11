#include <GL/glut.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <math.h>

void Lingkaran(void){
    #define PI 3.1415926535898
    GLfloat radius = 0.8f; 
    GLint circle_points = 100;
    int i;
    float angle;

    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.0f); 
    glColor3f(0.0f, 0.0f, 0.0f); 

    glBegin(GL_LINE_LOOP);
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex2f(radius * cos(angle), radius * sin(angle)); 
    }
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(Lingkaran);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
