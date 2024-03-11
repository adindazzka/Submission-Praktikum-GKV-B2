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

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Kepala luar (GL_QUADS)
    glColor3f(1.0f, 0.71f, 0.76f); // Light Pink
    glBegin(GL_QUADS);
    glVertex2f(-0.18, 0.18); // Atas kiri
    glVertex2f(0.18, 0.18); // Atas kanan
    glVertex2f(0.18, -0.18); // Bawah kanan
    glVertex2f(-0.18, -0.18); // Bawah kiri
    glEnd();
    
    //Kepala dalam (GL_QUADS)
    glColor3f(0.86f, 0.44f, 0.58f); // Dark Pink
    glBegin(GL_QUADS);
    glVertex2f(0.10, 0); // Atas kiri
    glVertex2f(-0.10, 0); // Atas kanan
    glVertex2f(-0.10, -0.10); // Bawah kanan
    glVertex2f(0.10, -0.10); // Bawah kiri
    glEnd();
    
    //Telinga (GL_TRIANGLE_FAN)
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.71f, 0.76f); // Light Pink
    glVertex2f(-0.1, 0.25); // Atas kanan
    glVertex2f(-0.05, 0.18); // Atas kiri
    glVertex2f(-0.15, 0.18); // Kanan atas
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.71f, 0.76f); // Light Pink
    glVertex2f(0.1, 0.25); // Atas kanan
    glVertex2f(0.05, 0.18); // Atas kiri
    glVertex2f(0.15, 0.18); // Kanan atas
    glEnd();
    
    // Mata kotak luar (GL_QUADS)
    glColor3f(1.0f, 1.0f, 1.0f); // Hitam
    glBegin(GL_QUADS);
    glVertex2f(-0.1, 0.1); // Atas kiri
    glVertex2f(-0.05, 0.1); // Atas kanan
    glVertex2f(-0.05, 0.05); // Bawah kanan
    glVertex2f(-0.1, 0.05); // Bawah kiri

    glVertex2f(0.1, 0.1); // Atas kiri
    glVertex2f(0.05, 0.1); // Atas kanan
    glVertex2f(0.05, 0.05); // Bawah kanan
    glVertex2f(0.1, 0.05); // Bawah kiri
    glEnd();
    
    // Mata kotak dalam (GL_QUADS)
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glBegin(GL_QUADS);
    glVertex2f(-0.09, 0.09); // Atas kiri
    glVertex2f(-0.06, 0.09); // Atas kanan
    glVertex2f(-0.06, 0.06); // Bawah kanan
    glVertex2f(-0.09, 0.06); // Bawah kiri

    glVertex2f(0.09, 0.09); // Atas kiri
    glVertex2f(0.06, 0.09); // Atas kanan
    glVertex2f(0.06, 0.06); // Bawah kanan
    glVertex2f(0.09, 0.06); // Bawah kiri
    glEnd();
    
    // Hidung (GL_POINTS)
    glPointSize(15.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-0.05,-0.05,-0.05);
	glEnd();
    
	glPointSize(15.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.05,-0.05,-0.05);
	glEnd();
	
	// Mulut (GL_LINES)
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glBegin(GL_LINES);
    glVertex2f(-0.03, -0.14); // Kiri bawah
    glVertex2f(0.03, -0.14); // Kanan bawah
    glEnd();
    
    // Tubuh perut babi (GL_QUAD_STRIP)
	glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.18, -0.18); // Bawah kiri kepala
    glVertex2f(-0.25, -0.33); // Bawah kiri badan
    glVertex2f(0.18, -0.18); // Bawah kanan kepala
    glVertex2f(0.25, -0.33); // Bawah kanan badan
    glEnd();
    
    // Tangan kiri (GL_LINE_STRIP)
	glColor3f(0.0f, 0.0f, 0.0f); // Hitam
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.18, -0.20); // Siku kiri atas
	glVertex2f(-0.30, -0.25); // Siku kiri bawah
	glVertex2f(-0.28, -0.28); // Ujung jari kelingking
	glEnd();

	// Tangan kanan (GL_LINE_STRIP)
	glColor3f(0.0f, 0.0f, 0.0f); // Hitam
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.18, -0.20); // Siku kanan atas
	glVertex2f(0.30, -0.25); // Siku kanan bawah
	glVertex2f(0.28, -0.28); // Ujung jari kelingking
	glEnd();
	
	// Kaki babi (GL_TRIANGLE_STRIP)
	glColor3f(1.0f, 0.71f, 0.76f); // Light Pink
	glBegin(GL_TRIANGLE_STRIP);
	// Kaki kiri
	glVertex2f(-0.20, -0.33); // Titik pertama di kaki kiri
	glVertex2f(-0.18, -0.41); // Titik kedua di kaki kiri
	glVertex2f(-0.12, -0.33); // Titik pertama di kaki kanan
	glVertex2f(-0.10, -0.41); // Titik kedua di kaki kanan
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	// Kaki kanan
	glVertex2f(0.20, -0.33); // Titik pertama di kaki kiri
	glVertex2f(0.18, -0.41); // Titik kedua di kaki kiri
	glVertex2f(0.12, -0.33); // Titik pertama di kaki kanan
	glVertex2f(0.10, -0.41); // Titik kedua di kaki kanan
	glEnd();
	
	//Segitiga tengah perut (GL_LINE_LOOP)
	glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.06, -0.28); // Kiri bawah
    glVertex2f(0.06, -0.28); // Kanan bawah
    glVertex2f(0.0, -0.21); // Atas
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Warna latar belakang putih
    gluOrtho2D(-0.5, 0.5, -0.5, 0.5); // Rentang proyeksi ortografis
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("BABI");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}
