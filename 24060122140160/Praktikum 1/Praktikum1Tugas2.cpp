#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    //Meja
    glColor3f(0.5, 0.5, 0.5); // Abu-abu
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.8, -0.6);
    glVertex2f(-0.6, -0.2);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.2, -0.2);
    glVertex2f(0.0, -0.6);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.4, -0.6);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.8, -0.6);
    glEnd();

    //KakiMeja
    glColor3f(0.3, 0.3, 0.3); // Abu-abu tua
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.6, -0.8);
    glVertex2f(-0.3, -0.9);
    glVertex2f(0.0, -0.8);
    glVertex2f(0.3, -0.9);
    glVertex2f(0.6, -0.8);
    glVertex2f(0.4, -0.6); 
    glEnd();
    
    //WadahMangkok
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.5, 0.0);  
    glVertex2f(0.4, -0.2); 
    glVertex2f(-0.4, -0.2); 
    glEnd();

	//TutupMangkok
	glColor3f(1.0, 1.0, 1.0); // Putih
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.6, 0.0); 
    glVertex2f(0.6, 0.0); 
    glEnd();
    
    //PeganganTutupMangkok
    glColor3f(1.0, 1.0, 1.0); // Hitam
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.1, 0.0);
	glVertex2f(0.1, 0.0); 
	glVertex2f(-0.1, 0.1);
    glVertex2f(0.1, 0.1);    
    glEnd();
    
  	//DesainMeja
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0); // Hitam
    glVertex2f(0.5, -0.2); 
    glVertex2f(0.3, -0.5);  
    glVertex2f(-0.5, -0.2); 
    glVertex2f(-0.3, -0.5); 
    glEnd();
	
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Meja Makan");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

