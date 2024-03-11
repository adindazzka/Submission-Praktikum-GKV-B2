// NAMA : Raka Maulana Yusuf
// NIM  : 24060122140119	
#include <GL/glut.h>

void trianglestrip (void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLE_STRIP);
glVertex2f(-0.25, -0.25);
glVertex2f(0.0, 0.25);
glVertex2f(0.25, -0.25);
glVertex2f(0.5, 0.25);
glVertex2f(0.75, -0.25);
glVertex2f(1.0, 0.25);
glEnd();
glFlush();
glutSwapBuffers();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_TRIANGLE_STRIP");
    glutDisplayFunc(trianglestrip);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}
