#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void Mobil(void) {
    // Badan Mobil
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.5f, -0.1f, 0.5f, 0.2f);

    // Atas Mobil
	glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.0f, 0.2f);
        glVertex2f(0.5f, 0.2f);
		glVertex2f(0.3f, 0.4f);
        glVertex2f(-0.0f, 0.4f);   
    glEnd();

    // Ban Depan
    glPushMatrix();
	glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(-0.3f, -0.1f, 0.0f); 
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i++)
    {
        float radian = i * 3.14159 / 180;
        glVertex2f(0.1 * cos(radian), 0.1 * sin(radian));
    }
    glEnd();
    glPopMatrix();

    // Ban Belakang
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(0.3f, -0.1f, 0.0f); 
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i++)
    {
        float radian = i * 3.14159 / 180;
        glVertex2f(0.1 * cos(radian), 0.1 * sin(radian));
    }
    glEnd();
    glPopMatrix();
    
    // Lampu Depan
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(0.5f, -0.2f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.1f, 0.3f);
		glVertex2f(0.0f, 0.3f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(-0.1f, 0.2f);   
    glEnd();
    glPopMatrix();
    
    // Knalpot
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(-0.5f, -0.3f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.1f, 0.25f);
		glVertex2f(0.0f, 0.25f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(-0.05f, 0.2f);   
    glEnd();
    glPopMatrix();
    
    // Wing
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(-0.3f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.3f, 0.3f);
		glVertex2f(-0.2f, 0.3f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(-0.1f, 0.2f);   
    glEnd();
    glPopMatrix();
    
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil");
    glutDisplayFunc(Mobil);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

