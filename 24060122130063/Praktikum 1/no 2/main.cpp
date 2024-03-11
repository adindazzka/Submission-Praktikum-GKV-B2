/*	Nama: Keisya Intan Nabila 24060122130063
	Tugas : praktikum 1 tugas no 2, program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
	GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP. *
	Lab : B2*/

#include <GL/glut.h>
void abstrakButterfly (void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	//fungsi GL_LINE_STRIP
	glLineWidth(10.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.48f, 0.18f, 0.0f); 
	glVertex2f(-0.2, 0.0);
	glColor3f(0.48f, 0.18f, 0.0f); //warna dark red oranye
	glVertex2f(-0.5, 0.3);
	glColor3f(0.48f, 0.18f, 0.0f);
	glVertex2f(0.5, 0.3);
	glColor3f(0.48f, 0.18f, 0.0f);
	glVertex2f(-0.5, -0.3);
	glColor3f(0.48f, 0.18f, 0.0f);
	glVertex2f(0.5, -0.3);
	glColor3f(0.48f, 0.18f, 0.0f);
	glVertex2f(0.2, 0.0);
	glEnd();
	
	//fungsi GL_LINE_LOOP
	glLineWidth(10.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.48f, 0.18f, 0.0f); //warna dark red oranye
	glVertex2f(-0.2, 0.0); 
	glVertex2f(-0.5, 0.3);
	glVertex2f(0.5, 0.3);
	glVertex2f(-0.5, -0.3);
	glVertex2f(0.5, -0.3);
	glVertex2f(0.2, 0.0);
	glEnd();

	
	//fungsi GL_TRIANGLE_FAN (kanan)
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(0.2,0.0);
	glColor3f(0.94f, 0.20f, 0.13f); //pastel red oranye
	glVertex2f(0.5,0.3);
    glVertex2f(0.6,0.3);
 	glVertex2f(0.7,0.25); 
    glVertex2f(0.8,0.0);
    glVertex2f(0.7,-0.25);
    glVertex2f(0.6,-0.3);
    glColor3f(0.48f, 0.18f, 0.0f);
    glVertex2f(0.5,-0.3);
    glEnd();
    
    //fungsi GL_TRIANGLE_FAN (kiri)
	glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(-0.2,0.0);
	glColor3f(0.94f, 0.20f, 0.13f); //pastel red oranye
	glVertex2f(-0.5,0.3);
    glVertex2f(-0.6,0.3);
 	glVertex2f(-0.7,0.25);
    glVertex2f(-0.8,0.0); 
    glVertex2f(-0.7,-0.25);
    glVertex2f(-0.6,-0.3);
    glColor3f(0.48f, 0.18f, 0.0f);
    glVertex2f(-0.5,-0.3);
    glEnd();
    
    //fungsi GL_TRIANGLE_FAN (kanan bawah)
	glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(0.2,0.0);
	glColor3f(0.94f, 0.19f, 0.13f); //pastel red oranye
	glVertex2f(0.5,-0.3);
	glVertex2f(0.5,-0.5);
 	glVertex2f(0.35,-0.5);
    glVertex2f(-0.1,-0.7); 
    glVertex2f(-0.35,-0.3);
    glVertex2f(-0.6,-0.3);
    glColor3f(0.48f, 0.18f, 0.0f);
    glVertex2f(-0.5,-0.3);
    glEnd();
	
	//fungsi GL_TRIANGLE_FAN (kiri bawah)
	glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(-0.2,0.0);
	glColor3f(0.94f, 0.19f, 0.13f); //pastel red oranye
	glVertex2f(-0.5,-0.3);
	glVertex2f(-0.5,-0.5);
 	glVertex2f(-0.35,-0.5);
    glVertex2f(0.1,-0.7); 
    glVertex2f(0.35,-0.3);
    glVertex2f(0.6,-0.3);
    glColor3f(0.48f, 0.18f, 0.0f);
    glEnd();
	
	// fungsi GL_TRIANGLE_STRIP (kanan)
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.99f, 0.77f, 0.53f); // yellow oranye
	glVertex2f(0.2, 0.8);
	glColor3f(0.70f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(-0.1, -0.1);
	glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(0.5, 0.1);
	glEnd();
	
	// fungsi GL_TRIANGLE_STRIP (kiri)
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.99f, 0.77f, 0.53f); // yellow oranye
	glVertex2f(-0.2, 0.8);
	glColor3f(0.70f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(0.1, -0.1);
	glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
	glVertex2f(-0.5 , 0.1);
	glEnd();
	
	// fungsi GL_QUADS
	glBegin(GL_QUADS);
	glVertex2f(-0.1,0.1);
    glVertex2f(0.1,0.1);
    glVertex2f(0.1,-0.1);
	glVertex2f(-0.1,-0.1);
	glEnd();
	
	// fungsi GL_QUAD_STRIP (kiri)
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.61f, 0.04f, 0.05f); //dark red
	glColor3f(0.99f, 0.77f, 0.53f); // yellow oranye
	glVertex2f(0.0,0.6);
    glVertex2f(-0.01,0.5);
    glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
    glVertex2f(0.0,-0.7);
    glVertex2f(-0.1,0.1);
    glEnd();
    
    // fungsi GL_QUAD_STRIP (kanan)
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.61f, 0.04f, 0.05f); //dark red
	glColor3f(0.99f, 0.77f, 0.53f); // yellow oranye
	glVertex2f(0.0,0.6);
    glVertex2f(0.01,0.5);
    glColor3f(0.48f, 0.18f, 0.0f); //dark red oranye
    glVertex2f(0.0,-0.9);
    glVertex2f(0.1,0.1);
    glEnd();
	
	glFlush();
	
}

int main (int argc, char *argv[]){
	glutInit(&argc, argv);
    glutInitWindowSize(700, 520);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("{2} Abstrak");
    glutDisplayFunc(abstrakButterfly);
    glClearColor(0.0f, 0.12f, 0.34f, 0.0f); // warna pale brown
    glutMainLoop();
	return 0;
}
