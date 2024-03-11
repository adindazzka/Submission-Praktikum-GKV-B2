#include <GL/glut.h>
#include <math.h>

const double PI = 3.141592653589793;
int i, radius, jumlahTitik, xTengah, yTengah;
void Lingkaran() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_LINE_LOOP);
	radius = 60;
	jumlahTitik = 40;
	xTengah = 0;
	yTengah = 0;
	for (i=0; i<=360; i++){
        float sudut = i * (2 * PI / jumlahTitik);
        float x = xTengah + radius * cos(sudut);
        float y = yTengah + radius * sin(sudut);
		glVertex2f(x/100, y/100);
	}
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Lingkaran");
	glutDisplayFunc(Lingkaran);
    glClearColor(0.4f, 0.78f, 0.805f, 0.0f);
	glutMainLoop();
	return 0;
}
