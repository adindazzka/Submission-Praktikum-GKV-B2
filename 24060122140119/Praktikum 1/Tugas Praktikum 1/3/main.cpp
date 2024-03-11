// Nama : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <GL/glut.h>
void kubus(void){
    glClear(GL_COLOR_BUFFER_BIT);   
    glColor3f(0.0f, 0.0f, 0.0f); 
    glBegin(GL_QUADS);              
    glVertex2f(0.1f, 0.1f);     
    glVertex2f(0.1f, 0.3f);     
    glVertex2f(0.3f, 0.3f);     
    glVertex2f(0.3f, 0.1f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(0.1f, -0.1f);     
    glVertex2f(0.1f, -0.3f);     
    glVertex2f(0.3f, -0.3f);     
    glVertex2f(0.3f, -0.1f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(-0.1f, -0.1f);     
    glVertex2f(-0.1f, -0.3f);     
    glVertex2f(-0.3f, -0.3f);     
    glVertex2f(-0.3f, -0.1f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(-0.1f, 0.1f);     
    glVertex2f(-0.1f, 0.3f);     
    glVertex2f(-0.3f, 0.3f);     
    glVertex2f(-0.3f, 0.1f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(-0.3f, -0.1f);     
    glVertex2f(-0.3f, 0.1f);     
    glVertex2f(-0.5f, 0.1f);     
    glVertex2f(-0.5f, -0.1f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(0.3f, -0.1f);     
    glVertex2f(0.3f, 0.1f);     
    glVertex2f(0.5f, 0.1f);     
    glVertex2f(0.5f, -0.1f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(-0.2f, 0.3f);     
    glVertex2f(-0.2f, 0.5f);     
    glVertex2f(0.2f, 0.5f);     
    glVertex2f(0.2f, 0.3f);     
    glEnd();
    glFlush();
    glBegin(GL_QUADS);              
    glVertex2f(0.2f, -0.3f);     
    glVertex2f(0.2f, -0.5f);     
    glVertex2f(-0.2f, -0.5f);     
    glVertex2f(-0.2f, -0.3f);     
    glEnd();
    glFlush();
}
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_KUBUS_BERTINGKAT");
    glutDisplayFunc(kubus);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}

