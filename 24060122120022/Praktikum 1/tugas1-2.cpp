/*  Nama         : Muhammad Daffa Aradhana Adriansyah
	NIM 		 : 24060122120022
    Nama File    : tugas1-2.cpp
    Deskripsi    : Membentuk program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
					GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
*/

#include <gl/glut.h>

void primitif(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    // fungsi GL_POINT :
    glPointSize(8.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 0, 0); // Merah
    glVertex2f(-0.5f, 0.5f);
    glColor3ub(0, 255, 0); // Hijau
    glVertex2f(0.0f, 0.0f);
    glColor3ub(0, 0, 255); // Biru
    glVertex2f(0.5f, -0.5f);
    glEnd();

    // fungsi GL_LINES :
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0); // Kuning
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(0.8f, 0.8f);
    glColor3ub(255, 0, 255); // Magenta
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(0.8f, -0.8f);
    glEnd();
		
	//fungsi GL_LINE_STRIP :
	glLineWidth(6.0f);
	
	glBegin(GL_LINE_STRIP);
	glColor3ub(150,75,180);
	glVertex2f(-0.9, 0.5);
	glVertex2f(-0.7, 0.5);
	
	glColor3ub(255, 75, 173);
	glVertex2f(-0.9, 0.8);
	glVertex2f(-0.7, 0.8);
	
	glColor3ub(255, 80, 105);
	glVertex2f(-0.9, 0.8);
	glVertex2f(-0.7, 0.5);
	glEnd();

	//fungsi GL_LINE_LOOP :
	glLineWidth(8.0f);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 185, 203); 
	glVertex2f(-0.9, 0.1);
	
	glColor3ub(247, 202, 215); 
	glVertex2f(-0.75, 0.45);
	
	glColor3ub(247, 234, 220); 
	glVertex2f(-0.6, 0.1);
	
	glColor3ub(182, 206, 184); 
	glVertex2f(-0.9, 0.3);
	
	glColor3ub(173, 193, 175); 
	glVertex2f(-0.6, 0.3);
	glEnd();

	
    //fungsi GL_TRIANGLE_FAN :
    glLineWidth(5.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0); //first triangle
	glVertex2f(-0.1, 0.7);
	glVertex2f(0.2, 0.3);
	glVertex2f(-0.1, 0.3);
	glColor3ub(0,0,255); //second triangle
	glVertex2f(-0.1, 0.7);
	glVertex2f(0.2, 0.7);
	glVertex2f(-0.1, 0.3);
    glEnd();
    
	//fungsi GL_TRIANGLE_STRIP :
	glLineWidth(6.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(255,128,0); //first triangle
	glVertex2f(-0.90, -0.70);
	glVertex2f(-0.60, -0.70);
	glVertex2f(-0.60, -0.30);
	glColor3ub(0,0,255); //second triangle
	glVertex2f(-0.90, -0.30);
	glVertex2f(-0.90, -0.70);
	glVertex2f(-0.60, -0.70);
	glEnd();
	
	//fungsi GL_QUADS :
	glLineWidth(4.0f);
	
	glBegin(GL_QUADS);
	glColor3ub(255,15,144);
	glVertex2f(0.03, -0.65);
	glVertex2f(0.25, -0.65);
	glVertex2f(0.25, -0.40);
	glVertex2f(0.03, -0.40);
	
	glColor3ub(0,56,140);
	glVertex2f(0.08, -0.60);
	glColor3ub(103,56,136);
	glVertex2f(0.2, -0.60);
	glColor3ub(239,79,145);
	glVertex2f(0.2, -0.30);
	glColor3ub(199,157,215);
	glVertex2f(0.08, -0.30);
	glEnd();
	
	//fungsi GL_QUAD_STRIP:
	glBegin(GL_QUAD_STRIP);
	glColor3ub(255,255,255);
	glVertex3f(0.60, 0.30, 0.0);
	glVertex3f(0.60, 0.00, 0.0);
	
	glColor3ub(255,0,0);
	glVertex3f(0.90, 0.30, 0.0);
	glVertex3f(0.90, 0.00, 0.0);
	glVertex3f(0.60, 0.00, 0.0);
	glVertex3f(0.60, 0.30, 0.0);	

	glEnd();
	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("2D Primitif");
    glutDisplayFunc(primitif);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
