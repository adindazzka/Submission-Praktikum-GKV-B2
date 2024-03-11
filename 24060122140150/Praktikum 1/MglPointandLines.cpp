//NAMA	:GIGIH HAIDAR FALAH
//LAB	:B2
//NIM	:24060122140150
//PRAKTIKUM1

#include <GL/glut.h>

void DrawPointAndLine(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Bikin Point 
    glPointSize(100.0f);  
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f);  // Set Warna Point
    glVertex2f(0.2, 0.0);
    glEnd();

    // Bikin Lines
    glLineWidth(20.0f);  // Set Lebar Garis
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  // Set Warna Garis
    glVertex2f(0.0, -0.2);
    glVertex2f(0.0, 0.2);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Point and Line");
    glutDisplayFunc(DrawPointAndLine);
    glClearColor(1.0f, 0.39f, 0.28f, 1.0f); 
    glutMainLoop();

    return 0;
}

