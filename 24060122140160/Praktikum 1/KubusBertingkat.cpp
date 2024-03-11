#include <GL/glut.h>

void Kubus(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //kubus1hijau
    glColor3f(0.0f, 1.0f, 0.0f);
    glRectf(-0.1, 0.1, 0.1, -0.1);
    
    //kubus2biru
    glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(-0.4, 0.1, -0.2, -0.1);
    
    //kubus3pink
    glColor3f(1.0f, 0.0f, 1.0f);
    glRectf(0.2, 0.1, 0.4, -0.1);
    
    //kubus4oranye
    glColor3f(1.0f, 0.5f, 0.0f);
    glRectf(-0.25, 0.3, -0.05, 0.1);
    
    //kubus5merah
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(0.25, 0.3, 0.05, 0.1);
    
    //kubus5merah
    glColor3f(0.0f, 0.1f, 0.0f);
    glRectf(-0.1, 0.3, 0.1, 0.5);
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus");
    glutDisplayFunc(Kubus);
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glutMainLoop();
    return 0;
}
