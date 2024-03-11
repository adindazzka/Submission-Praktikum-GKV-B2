/*	Nama: Keisya Intan Nabila 24060122130063
	Tugas : praktikum 1 tugas no 3, Buat Gambar Kubus bertingkat dari objek primitif sekreatif mungkin
	Lab : B2*/
	
#include <gl/glut.h>

void kotakKotak (void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	// fungsi GL_QUADS
	glBegin(GL_QUADS);
	glColor3f(0.95f, 0.60f, 0.75f); // warna pastel magenta
	glVertex2f(0.1,0.1);
    glVertex2f(0.1,0.0);
    glVertex2f(0.2,0.0);
	glVertex2f(0.2,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.95f, 0.60f, 0.90f); // warna pastel magenta ungu
	glVertex2f(0.22,0.1);
    glVertex2f(0.22,0.0);
    glVertex2f(0.32,0.0);
	glVertex2f(0.32,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.74f, 0.54f, 0.74f); // warna pastel violet
	glVertex2f(-0.1,0.1);
    glVertex2f(-0.1,0.0);
    glVertex2f(0.0,0.0);
	glVertex2f(0.0,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.63f, 0.82f, 0.61f); // warna pastel yellow green
	glVertex2f(-0.22,0.1);
    glVertex2f(-0.22,0.0);
    glVertex2f(-0.12,0.0);
	glVertex2f(-0.12,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.97f, 0.67f, 0.50f); // warna pastel red orange
	glVertex2f(-0.15,0.22);
    glVertex2f(-0.15,0.12);
    glVertex2f(-0.05,0.12);
	glVertex2f(-0.05,0.22);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.33f, 0.45f, 0.72f); // warna light blue
	glVertex2f(0.15,0.22);
    glVertex2f(0.15,0.12);
    glVertex2f(0.25,0.12);
	glVertex2f(0.25,0.22);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.34f, 0.52f, 0.15f); // warna pea green
	glVertex2f(-0.42,0.1);
    glVertex2f(-0.42,0.0);
    glVertex2f(-0.32,0.0);
	glVertex2f(-0.32,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.67f, 0.62f, 0.0f); // warna dark yelow
	glVertex2f(-0.54,0.1);
    glVertex2f(-0.54,0.0);
    glVertex2f(-0.44,0.0);
	glVertex2f(-0.44,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.52f, 0.37f, 0.65f); // warna light violet
	glVertex2f(-0.66,0.1);
    glVertex2f(-0.66,0.0);
    glVertex2f(-0.56,0.0);
	glVertex2f(-0.56,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.61f, 0.0f, 0.36f); // warna dark magenta
	glVertex2f(-0.6,0.22);
    glVertex2f(-0.6,0.12);
    glVertex2f(-0.5,0.12);
	glVertex2f(-0.5,0.22);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.47f, 0.27f, 0.14f); // warna darker magenta red
	glVertex2f(-0.48,0.22);
    glVertex2f(-0.48,0.12);
    glVertex2f(-0.38,0.12);
	glVertex2f(-0.38,0.22);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.92f, 0.10f, 0.14f); // warna red
	glVertex2f(-0.55,0.34);
    glVertex2f(-0.55,0.24);
    glVertex2f(-0.45,0.24);
	glVertex2f(-0.45,0.34);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.94f, 0.0f); // warna yellow
	glVertex2f(0.34,0.1);
    glVertex2f(0.34,0.0);
    glVertex2f(0.44,0.0);
	glVertex2f(0.44,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.55f, 0.77f, 0.24f); // warna pea green
	glVertex2f(0.27,0.22);
    glVertex2f(0.27,0.12);
    glVertex2f(0.37,0.12);
	glVertex2f(0.37,0.22);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.74f, 0.95f); // warna light cyan
	glVertex2f(0.2,0.34);
    glVertex2f(0.2,0.24);
    glVertex2f(0.3,0.24);
	glVertex2f(0.3,0.34);
	glEnd();
	
	glFlush();
}

int main(int argc, char *argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(700, 520);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("{3} Kotak Kotak");
	glutDisplayFunc(kotakKotak);
	glClearColor(0.0f, 0.29f, 0.50f, 0.0f);
	glutMainLoop();
	return 0;
}
