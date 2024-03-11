/*
 * FreeGLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone 
 * and torus shapes in FreeGLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <GL/glut.h>

#include <stdlib.h>
#include <gl/glut.h>

void SegiEmpat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	//kolom1
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.05,0.45,0.05,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.05,0.05,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.15,0.05,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.25,0.05,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.35,0.05,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.15,0.05,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.25,0.05,-0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.35,0.05,-0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.45,0.05,-0.35);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.05,-0.55,0.05,-0.45);
	
	//kolom-1
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.05,0.55,-0.15,0.45);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.45,-0.15,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.35,-0.15,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.25,-0.15,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.15,-0.15,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,0.05,-0.15,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.15,-0.15,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.25,-0.15,-0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.05,-0.35,-0.15,-0.25);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.05,-0.45,-0.15,-0.35);
	
	//kolom-2
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.15,0.65,-0.25,0.55);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,0.55,-0.25,0.45);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,0.45,-0.25,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,0.35,-0.25,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,0.25,-0.25,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,0.15,-0.25,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,0.05,-0.25,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,-0.15,-0.25,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.15,-0.25,-0.25,-0.15);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.15,-0.35,-0.25,-0.25);
	
	//kolom-3
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.25,0.65,-0.35,0.55);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,0.55,-0.35,0.45);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,0.45,-0.35,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,0.35,-0.35,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,0.25,-0.35,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,0.15,-0.35,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,0.05,-0.35,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.25,-0.15,-0.35,-0.05);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.25,-0.25,-0.35,-0.15);
	
	//kolom-4
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.35,0.55,-0.45,0.45);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.35,0.45,-0.45,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.35,0.35,-0.45,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.35,0.25,-0.45,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.35,0.15,-0.45,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.35,0.05,-0.45,-0.05);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.35,-0.15,-0.45,-0.05);
	
	//kolom-5	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.45,0.45,-0.55,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.45,0.35,-0.55,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.45,0.25,-0.55,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.45,0.15,-0.55,0.05);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.45,0.05,-0.55,-0.05);
	
	
	//kolom-6
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.55,0.35,-0.65,0.25);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.55,0.25,-0.65,0.15);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.55,0.15,-0.65,0.05);
	
	//kolom+1
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.05,0.55,0.15,0.45);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,0.45,0.15,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,0.35,0.15,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,0.25,0.15,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,0.15,0.15,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,0.05,0.15,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,-0.15,0.15,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,-0.25,0.15,-0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.05,-0.35,0.15,-0.25);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.05,-0.45,0.15,-0.35);
	
	//kolom+2
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.15,0.65,0.25,0.55);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,0.55,0.25,0.45);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,0.45,0.25,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,0.35,0.25,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,0.25,0.25,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,0.15,0.25,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,0.05,0.25,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,-0.15,0.25,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.15,-0.25,0.25,-0.15);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.15,-0.35,0.25,-0.25);
	
	//kolom-3
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.25,0.65,0.35,0.55);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.25,0.55,0.35,0.45);
	
	glColor3f(1.0f,1.0f,1.0f);
	glRectf(0.25,0.45,0.35,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.25,0.35,0.35,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.25,0.25,0.35,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.25,0.15,0.35,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.25,0.05,0.35,-0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.25,-0.15,0.35,-0.05);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.25,-0.25,0.35,-0.15);
	
	//kolom-4
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.35,0.55,0.45,0.45);
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(0.35,0.45,0.45,0.35);
	
	glColor3f(1.0f,1.0f,1.0f);
	glRectf(0.35,0.35,0.45,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.35,0.25,0.45,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.35,0.15,0.45,0.05);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.35,0.05,0.45,-0.05);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.35,-0.15,0.45,-0.05);
	
	//kolom-5	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.45,0.45,0.55,0.35);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.45,0.35,0.55,0.25);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.45,0.25,0.55,0.15);
	
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.45,0.15,0.55,0.05);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.45,0.05,0.55,-0.05);
	
	
	//kolom-6
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.55,0.35,0.65,0.25);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.55,0.25,0.65,0.15);
	
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.55,0.15,0.65,0.05);
	
	
	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(500,500);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("LOVE");
	glutDisplayFunc(SegiEmpat);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
}
