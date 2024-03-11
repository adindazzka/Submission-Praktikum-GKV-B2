#include <GL/glut.h>

void Kubus(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
	// kotak 3 tengah
    glColor3f(1.0, 0.0, 0.0);
    glRectf(-0.2, 0.2, 0.2, -0.2);

    glColor3f(0.0, 1.0, 0.0);
    glRectf(-0.4, 0.2, -0.8, -0.2);

    glColor3f(0.0, 0.0, 1.0);
    glRectf(0.4, 0.2, 0.8, -0.2);
    
    // kotak 2 atas
	glColor3f(1.0, 1.0, 1.0);
    glRectf(-0.5, 0.6, -0.1, 0.2);
    
    glColor3f(1.0, 1.0, 0.0);
    glRectf(0.1, 0.6, 0.5, 0.2);
    
    
    // kotak 2 bawah
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-0.5, -0.2, -0.1, -0.6);
    
    glColor3f(1.0, 1.0, 0.0);
    glRectf(0.1, -0.2, 0.5, -0.6);
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Bertingkat");
    glutDisplayFunc(Kubus);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}
