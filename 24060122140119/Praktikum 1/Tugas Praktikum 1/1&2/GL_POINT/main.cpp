// NAMA : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <GL/glut.h>

void point(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0); 
    glPointSize(10.0);
    glBegin(GL_POINTS);       
    glVertex3f(-0.3, 0.2, 0.0); 
    glVertex3f(0.3, 0.2, 0.0);
    glVertex3f(-0.3, -0.2, 0.0); 
    glVertex3f(0.3, -0.2, 0.0); 
    glEnd();                  
    glFlush();                
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_POINT");
    glutDisplayFunc(point);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}

