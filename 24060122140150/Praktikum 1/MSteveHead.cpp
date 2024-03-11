//NAMA	:GIGIH HAIDAR FALAH
//LAB	:B2
//NIM	:24060122140150
//PRAKTIKUM1

#include <GL/glut.h>

void SteveHead() {
	
    // BaseHead
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.8, 0.576);  // Equivalent to FFCC93
    glVertex2f(-0.4, 0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(-0.4, -0.4);
    glEnd();
    
    //Hair
    glBegin(GL_QUADS);
    glColor3f(0.474, 0.333, 0.278);  // Equivalent to 795547
    glVertex2f(-0.4, 0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, 0.2);
    glVertex2f(-0.4, 0.2);
    glEnd();
    
    //HairRight
    glBegin(GL_QUADS);
    glColor3f(0.474, 0.333, 0.278);  // Equivalent to 795547
    glVertex2f(0.4, 0.2);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.3, 0.1);
    glVertex2f(0.4, 0.1);
    glEnd();
    
    //HairLeft
    glBegin(GL_QUADS);
    glColor3f(0.474, 0.333, 0.278);  // Equivalent to 795547
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.3, 0.1);
    glVertex2f(-0.4, 0.1);
    glEnd();
    
    //EyesLeft    
	glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);  // Dark brown color
    glVertex2f(-0.3, 0.0);
    glVertex2f(-0.2, 0.0);
    glVertex2f(-0.2, -0.1);
    glVertex2f(-0.3, -0.1);
    glEnd();
    //PupilLeft
    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.5f, 0.8f);  // Blue eye color
    glVertex2f(-0.2, 0.0);
    glVertex2f(-0.1, 0.0);
    glVertex2f(-0.1, -0.1);
    glVertex2f(-0.2, -0.1);
    glEnd();
    
    
    //EyesLeft    
	glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);  // Dark brown color
    glVertex2f(0.3, 0.0);
    glVertex2f(0.2, 0.0);
    glVertex2f(0.2, -0.1);
    glVertex2f(0.3, -0.1);
    glEnd();
    //PupilLeft
    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.5f, 0.8f);  // Blue eye color
    glVertex2f(0.2, 0.0);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.2, -0.1);
    glEnd();
    
    //Beard
    glBegin(GL_QUADS);
    glColor3f(0.474, 0.333, 0.278);  // Equivalent to 795547
    glVertex2f(-0.2, -0.2);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.2, -0.4);
    glVertex2f(-0.2, -0.4);
    glEnd();
    
    //NoseUp    
	glBegin(GL_QUADS);
    glColor3f(0.898, 0.451, 0.451);  // Equivalent to E57373
    glVertex2f(-0.1, -0.1);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.1, -0.2);
    glVertex2f(-0.1, -0.2);
    glEnd();
    //NoseDown
    glBegin(GL_QUADS);
    glColor3f(0.933, 0.604, 0.604);  // Equivalent to EE9A9A
    glVertex2f(-0.1, -0.2);
    glVertex2f(0.1, -0.2);
    glVertex2f(0.1, -0.3);
    glVertex2f(-0.1, -0.3);
    glEnd();
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    SteveHead();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutCreateWindow("SteveHead");
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);  
    glutMainLoop();
    return 0;
}

