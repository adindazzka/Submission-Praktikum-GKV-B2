#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Jalan
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.1, 0, 0);   
	glVertex3f(-0.1, 0, 0);
	glVertex3f(-0.2, -1, 0); 
	glVertex3f(0.2, -1, 0); 
	glEnd();
	
	// Garis Jalan
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0, -0.1, 0);
	glVertex3f(0.0, -0.3, 0);    
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0, -0.5, 0);
	glVertex3f(0.0, -0.7, 0);    
	glEnd();
	
	// Gunung
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 1.0f, 0.0f); 
	glVertex3f(0, 0, 0);    
	glVertex3f(0, 0.6, 0); 
	glVertex3f(0.6, 0, 0);
	glVertex3f(0.6, 0.6, 0); 
	glVertex3f(1, 0, 0);    
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 1.0f, 0.0f); 
	glVertex3f(0, 0, 0);   
	glVertex3f(0, 0.6, 0);   
	glVertex3f(-0.6, 0, 0);  
	glVertex3f(-0.6, 0.6, 0);  
	glVertex3f(-1, 0, 0);  
	glEnd();
	
	// Rumah 1
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.6f, 0.4f);
	glVertex3f(0.4, -0.5, 0.0);
	glVertex3f(0.8, -0.5, 0.0);	
	glVertex3f(0.8, -0.8, 0.0);
	glVertex3f(0.4, -0.8, 0.0);
	glEnd();
	
	// Genteng Rumah 1
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.5f, 0.25f, 0.0f);
	glVertex3f(0.3, -0.5, 0.0);
	glVertex3f(0.6, -0.3, 0.0);
	glVertex3f(0.9, -0.5, 0.0);	
	glEnd();
	
	// Pintu Rumah 1
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.5f, 0.25f, 0.0f);
	glVertex3f(0.5, -0.6, 0.0);
	glVertex3f(0.7, -0.6, 0.0);	
	glVertex3f(0.5, -0.8, 0.0);
	glVertex3f(0.7, -0.8, 0.0);
	glEnd();
	
	// Rumah 2
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.6f, 0.4f);
	glVertex3f(-0.4, -0.5, 0.0);
	glVertex3f(-0.8, -0.5, 0.0);	
	glVertex3f(-0.8, -0.8, 0.0);
	glVertex3f(-0.4, -0.8, 0.0);
	glEnd();
	
	// Genteng Rumah 2
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.5f, 0.25f, 0.0f);
	glVertex3f(-0.3, -0.5, 0.0);
	glVertex3f(-0.6, -0.3, 0.0);
	glVertex3f(-0.9, -0.5, 0.0);	
	glEnd();
	
	// Pintu Rumah 2
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.5f, 0.25f, 0.0f);
	glVertex3f(-0.5, -0.6, 0.0);
	glVertex3f(-0.7, -0.6, 0.0);	
	glVertex3f(-0.5, -0.8, 0.0);
	glVertex3f(-0.7, -0.8, 0.0);
	glEnd();
	
	
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Gunung dan Rumah");
    glutInitWindowSize(640, 480);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
