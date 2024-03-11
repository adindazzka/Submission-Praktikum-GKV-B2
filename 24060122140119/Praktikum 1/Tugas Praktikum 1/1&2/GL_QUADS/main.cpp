// NAMA : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <GL/glut.h>

void quads() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 0.0f); 
    glBegin(GL_QUADS);
    glVertex2f(-0.25f, 0.25f);  
    glVertex2f(-0.5f, -0.25f);  
    glVertex2f(0.5f, -0.25f);   
    glVertex2f(0.25f, 0.25f);   
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); 
    glutCreateWindow("GL_QUADS");
    glutDisplayFunc(quads);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}

