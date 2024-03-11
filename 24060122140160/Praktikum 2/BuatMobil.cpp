#include <GL/glut.h>
#include <math.h>

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy) //membuat lingkaran untuk ban
{
    glBegin(GL_POLYGON);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 400, 0, 400);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //translasi untuk mobil
    glPushMatrix();
    glTranslatef(25, 20, 0);

    //mobil
    glColor3f(0.2f, 0.2f, 0.8f); // Biru tua
    glBegin(GL_POLYGON);
    glVertex2f(70.f, 120.f);
    glVertex2f(350.f, 120.f);
    glVertex2f(350.f, 200.f);
    glVertex2f(320.f, 200.f);
    glVertex2f(270.f, 250.f);
    glVertex2f(150.f, 250.f);
    glVertex2f(100.f, 200.f);
    glVertex2f(70.f, 200.f);
    glVertex2f(70.f, 120.f);
    glEnd();

    //kaca mobil
    glColor3f(0.8f, 0.8f, 0.8f); // Abu-abu muda
    glBegin(GL_POLYGON);
    glVertex2f(120.f, 200.f);
    glVertex2f(310.f, 200.f);
    glVertex2f(270.f, 240.f);
    glVertex2f(150.f, 240.f);
    glEnd();

    //tangki bensin
    glColor3f(0.8f, 0.8f, 0.8f); // Abu-abu muda
    circle(10.f, 10.f, 320.f, 150.f);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    circle(5.f, 5.f, 320.f, 150.f);
    glEnd();

    //ban
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    circle(25.f, 30.f, 270.f, 120.f);
    circle(25.f, 30.f, 150.f, 120.f);
    glEnd();

    //velg
    glColor3f(0.5f, 0.5f, 0.5f); // Abu-abu
    circle(15.f, 20.f, 270.f, 120.f);
    circle(15.f, 20.f, 150.f, 120.f);
    glEnd();

    //kembali ke koordinat awal
    glPopMatrix();

    //aspal
    glPushMatrix();
    glColor3f(0.1f, 0.1f, 0.1f);
    glRectf(500.0f, 110.f, 0.f, -200.f);
    glPopMatrix();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Mobil Sedan");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

