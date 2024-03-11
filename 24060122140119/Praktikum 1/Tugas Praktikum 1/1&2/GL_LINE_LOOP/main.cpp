// Nama : Raka Maulana Yusuf
// NIM  : 24060122140119
#include <GL/glut.h>
void lineloop(void)
{
    glClear( GL_COLOR_BUFFER_BIT );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glColor3f( 0.0f, 0.0f, 0.0f );
    glBegin(GL_LINE_LOOP);
      glVertex2f(-1.0,0.0);
      glVertex2f(0.0,-1.0);
      glVertex2f(1.0,0.0);
      glVertex2f(0.0,1.0);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("GL_LINE_LOOP");
    glutDisplayFunc(lineloop);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}
