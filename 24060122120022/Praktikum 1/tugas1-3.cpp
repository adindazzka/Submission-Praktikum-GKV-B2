/*  Nama         : Muhammad Daffa Aradhana Adriansyah
    NIM		 : 24060122120022
    Nama File    : tugas1-3.cpp
    Deskripsi    : Membuat tampilan kubus 2D bertingkat kreatif
*/

#include <gl/glut.h>

void kubus(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3ub(0, 0, 0); //warna hitam 1
	glRectf(-0.1, 0.6, 0.05, 0.4);

	glColor3ub(0, 0, 0); //warna hitam 2
	glRectf(-0.3, 0.35, -0.15, 0.15);
	glRectf(0.1, 0.35, 0.25,0.15);
	glRectf(-0.1, 0.35, 0.05,0.15);
	
	glColor3ub(255, 0, 0); //warna merah 1
	glRectf(-0.3, 0.1, -0.15, -0.1);
	glRectf(0.1, 0.1, 0.25, -0.1);
	glRectf(-0.1, 0.1, 0.05, -0.1);
	glRectf(-0.5, 0.1, -0.35, -0.1);
	glRectf(0.3, 0.1, 0.45, -0.1);

	glColor3ub(255, 0, 0); //warna merah 2
	glRectf(-0.3, -0.15, -0.15, -0.35);
	glRectf(0.1, -0.15, 0.25,-0.35);
	glRectf(-0.1, -0.15, 0.05,-0.35);
	glRectf(0.3, -0.15, 0.45, -0.35);
	glRectf(-0.5, -0.15, -0.35, -0.35);
	glRectf(-0.7, -0.15, -0.55, -0.35);
	glRectf(0.5, -0.15, 0.65, -0.35);

	glColor3ub(255, 128, 0); //warna oranye
	glRectf(-0.1, -0.6, 0.05, -0.4);
	glRectf(0.5, -0.6, 0.65, -0.4);
	glRectf(-0.7, -0.6, -0.55, -0.4);
	glRectf(0.3, -0.6, 0.45, -0.4);	
	glRectf(0.1, -0.6, 0.25,-0.4);
	glRectf(-0.3, -0.6, -0.15, -0.4);
	glRectf(-0.5, -0.6, -0.35, -0.4);
	glRectf(0.7, -0.6, 0.85, -0.4);
	glRectf(-0.9, -0.6, -0.75, -0.4);
	
	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Bertingkat 2D");
    glutDisplayFunc(kubus);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
