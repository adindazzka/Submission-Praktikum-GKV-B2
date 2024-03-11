// NAMA : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <gl/glut.h>

void trianglefan() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glVertex3f(0.2, 0.2, 0.0);
glVertex3f(0.6, 0.1, 0.0);
glVertex3f(0.8, 0.3, 0.0);
glVertex3f(0.7, 0.6, 0.0);
glVertex3f(0.4, 0.8, 0.0);
glEnd();
glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_TRIANGLE_FAN");
    glutDisplayFunc(trianglefan);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}
