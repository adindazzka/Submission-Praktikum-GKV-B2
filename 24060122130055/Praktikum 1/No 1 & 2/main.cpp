#include <GL/glut.h>

void Rumah(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0.95f, 0.60f, 0.75f);
    glVertex3f(-0.2f, -0.2f, 0.0f);
    glVertex3f(-0.2f, 0.2f, 0.0f);
    glVertex3f(0.2f, 0.2f, 0.0f);
    glVertex3f(0.2f, -0.2f, 0.0f);
    glEnd();
    
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.63f, 0.82f, 0.61f);
    glVertex3f(-0.2f, 0.2f, 0.0f);
    glVertex3f(-0.1f, 0.4f, 0.0f);
    glVertex3f(0.0f, 0.2f, 0.0f);
    glVertex3f(0.1f, 0.4f, 0.0f);
    glVertex3f(0.2f, 0.2f, 0.0f);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.1f, 0.4f, 0.0f);
    glVertex3f(0.0f, 0.2f, 0.0f);
    glVertex3f(0.1f, 0.4f, 0.0f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.15f, 0.3f, 0.0f);
    glVertex3f(-0.10f, 0.2f, 0.0f);
    glVertex3f(-0.05f, 0.3f, 0.0f);
    glVertex3f(0.0f, 0.2f, 0.0f);
    glVertex3f(0.05f, 0.3f, 0.0f);
    glVertex3f(0.10f, 0.2f, 0.0f);
    glVertex3f(0.15f, 0.3f, 0.0f);
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.25f, 0.25f, 0.25f);
    glVertex3f(-0.1f, -0.2f, 0.0f);
    glColor3f(1.0f, 0.4f, 0.0f);
    glVertex3f(0.1f, -0.2f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.1f, -0.1f, 0.0f);
    glColor3f(0.0f, 0.25f, 0.0f);
    glVertex3f(0.1f, -0.1f, 0.0f);
    glColor3f(1.0f, 1.25f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.02f, -0.2f, 0.0f);
    glVertex3f(-0.02f, -0.1f, 0.0f);
    glVertex3f(0.0f, -0.07f, 0.0f);
    glVertex3f(0.02f, -0.1f, 0.0f);
    glVertex3f(0.02f, -0.2f, 0.0f);
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.57f, 0.15f, 5.63f);
    glVertex3f(-0.1f, 0.43f, 0.0f);
    glColor3f(1.57f, 1.0f, 0.63f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glVertex3f(-0.1f, 0.6f, 0.0f);
    glVertex3f(0.1f, 0.43f, 0.0f);
    glVertex3f(0.1f, 0.6f, 0.0f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Rumah");
    glutDisplayFunc(Rumah);
    glClearColor(0.22f, 0.69f, 0.87f, 0.0f);
    glutMainLoop();
    return 0;
}
