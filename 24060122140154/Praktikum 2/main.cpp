#include <GL/glut.h>
#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

/* GLUT callback Handlers */

static void 
resize(int width, int height)
{
    const float ar = (float) width / (float) height;
    
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0 * ar, 2.0 * ar, -2.0, 2.0, -2.0, 2.0);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void 
display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(0,0,1);

    // Body
    glPushMatrix();
        glTranslated(0,0,0);
        glScaled(2.0, 0.5, 1.0); // Panjang dan Lebar badan mobil
        glutSolidCube(1.0);
    glPopMatrix();

    // Roof (Atap)
    glBegin(GL_POLYGON);
        glColor3d(0, 0, 1);
        glVertex3f(-0.7f, 0.0f, -0.4f); // Kiri depan
        glVertex3f(0.7f, 0.0f, -0.4f);  // Kanan depan
        glVertex3f(0.4f, 0.7f, 0.0f);   // Kanan atas
        glVertex3f(-0.4f, 0.7f, 0.0f);  // Kiri atas
    glEnd();

    // Front Wheel
    glPushMatrix();
        glColor3d(0,1,1);
        glTranslated(-0.8,-0.2,-0.6);
        glutSolidTorus(0.1, 0.2, slices, stacks);
    glPopMatrix();

    // Back Wheel
    glPushMatrix();
        glColor3d(0,1,1);
        glTranslated(0.8,-0.2,-0.6);
        glutSolidTorus(0.1, 0.2, slices, stacks);
    glPopMatrix();

    glutSwapBuffers();
}


static void 
key(unsigned char key, int x, int y)
{
    switch (key) 
    {
        case 27 : 
        case 'q':
            exit(0);
            break;
    }

    glutPostRedisplay();
}

static void 
idle(void)
{
    glutPostRedisplay();
}

/* Program entry point */

int 
main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("OpenGL Mobil Atap Trapesium Kecil di Atas Tengah");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_DEPTH_TEST);

    glutMainLoop();

    return EXIT_SUCCESS;
}

