// Nama : Adinda Rizka Hamdasati
// NIM  : 24060122140139
// Lab  : Grafika dan Komputasi Visual B2

#include <GLUT/glut.h>

void Mobil() {
    //Badan mobil
    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    
    glColor3f(1.0f, 0.6f, 0.6f);
    glBegin(GL_POLYGON);
    glVertex2f(0.55f, -0.2f);
    glVertex2f(0.55f, 0.25f);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.4f, 0.055f);
    glVertex2f(-0.7f, 0.055f);
    glVertex2f(-0.75f, 0.005f);
    glVertex2f(-0.75f, -0.2f);
    glEnd();
    
    //Badan bawah mobil
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.55f, -0.2f);
    glVertex2f(-0.75f, -0.2f);
    glVertex2f(-0.75f, -0.25f);
    glEnd();

    //Roda
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(-0.4f, -0.25f, 0.0f);
    glutSolidSphere(0.125, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.35f, -0.25f, 0.0f);
    glutSolidSphere(0.125, 20, 20);
    glPopMatrix();
    
    //Jendela mobil
    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(-0.36f, 0.055f);
    glVertex2f(-0.18f, 0.275f);
    glVertex2f(0.15f, 0.275f);
    glVertex2f(0.15f, 0.055f);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f(0.15f, 0.055f);
    glVertex2f(0.15f, 0.275f);
    glVertex2f(0.485f, 0.275f);
    glVertex2f(0.525f, 0.235f);
    glVertex2f(0.525f, 0.055f);
    glEnd();
    
    //Velg roda mobil
    glPushMatrix();
    glTranslatef(-0.4f, -0.25f, 0.0f);
    glutSolidSphere(0.075, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.35f, -0.25f, 0.0f);
    glutSolidSphere(0.075, 20, 20);
    glPopMatrix();
    
    //Lampu depan mobil
    glColor3f(0.9f, 0.9f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.74f, -0.005f);
    glVertex2f(-0.69f, 0.045f);
    glVertex2f(-0.62f, 0.045f);
    glVertex2f(-0.62f, -0.005f);
    glEnd();
    
    //Lampu belakang mobil
    glColor3f(0.9f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.5f, -0.025f);
    glVertex2f(0.5f, 0.025f);
    glVertex2f(0.55f, 0.025f);
    glVertex2f(0.55f, -0.025f);
    glEnd();
    
    //Garis tepi jendela mobil
    glLineWidth(4);
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.36f, 0.055f);
    glVertex2f(-0.18f, 0.275f);
    glVertex2f(0.485f, 0.275f);
    glVertex2f(0.525f, 0.235f);
    glVertex2f(0.525f, 0.055f);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(0.15f, 0.275f);
    glVertex2f(0.15f, 0.055f);
    glEnd();
    
    glPopMatrix();
}

void Display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    Mobil();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(720, 720);
    glutCreateWindow("Mobil");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    
    glutDisplayFunc(Display);
    glutMainLoop();
    
    return 0;
}
