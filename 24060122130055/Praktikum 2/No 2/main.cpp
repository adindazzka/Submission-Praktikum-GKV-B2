#include <GL/glut.h>
#include <math.h>
const double PI = 3.141592653589793;
int i, radius, jumlahTitik, xTengah, yTengah;
GLfloat angle = 0.0f;
int awal = 1;

void timer(int value){
	glutPostRedisplay();
	glutTimerFunc(awal, timer, 0);
}

void Mobil(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.20f, 0.44f);
	glVertex2f(-0.50f, -0.75f);
	glVertex2f(-0.80f, -0.75f);
	glVertex2f(-0.80f, -0.6f);
	glVertex2f(-0.50f, -0.6f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.20f, 0.44f);
	glVertex2f(0.20f, -0.75f);
	glVertex2f(-0.20f, -0.75f);
	glVertex2f(-0.20f, -0.6f);
	glVertex2f(0.20f, -0.6f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.20f, 0.44f);
	glVertex2f(0.80f, -0.75f);
	glVertex2f(0.50f, -0.75f);
	glVertex2f(0.50f, -0.6f);
	glVertex2f(0.80f, -0.6f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.70f, -0.6f);
	glVertex2f(0.70f, -0.6f);
	glVertex2f(0.70f, -0.4f);
	glVertex2f(-0.70f, -0.4f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.67f, -0.4f);
	glVertex2f(0.70f, -0.4f);
	glVertex2f(0.70f, -0.3f);
	glVertex2f(-0.67f, -0.3f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.63f, -0.3f);
	glVertex2f(0.70f, -0.3f);
	glVertex2f(0.70f, -0.25f);
	glVertex2f(-0.63f, -0.25f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.59f, -0.25f);
	glVertex2f(0.70f, -0.25f);
	glVertex2f(0.70f, -0.2f);
	glVertex2f(-0.59f, -0.2f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.35f, -0.2f);
	glVertex2f(0.67f, -0.2f);
	glVertex2f(0.67f, -0.15f);
	glVertex2f(-0.35f, -0.15f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.25f, -0.15f);
	glVertex2f(0.67f, -0.15f);
	glVertex2f(0.67f, -0.1f);
	glVertex2f(-0.25f, -0.1f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.22f, -0.1f);
	glVertex2f(0.64f, -0.1f);
	glVertex2f(0.64f, -0.05f);
	glVertex2f(-0.22f, -0.05f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.18f, -0.05f);
	glVertex2f(0.64f, -0.05f);
	glVertex2f(0.64f, 0.0f);
	glVertex2f(-0.18f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.15f, 0.0f);
	glVertex2f(0.61f, 0.0f);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(-0.15f, 0.05f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.12f, 0.05f);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.61f, 0.1f);
	glVertex2f(-0.12f, 0.1f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.09f, 0.1f);
	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.57f, 0.15f);
	glVertex2f(-0.09f, 0.15f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.06f, 0.15f);
	glVertex2f(0.57f, 0.15f);
	glVertex2f(0.57f, 0.2f);
	glVertex2f(-0.06f, 0.2f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(-0.03f, 0.2f);
	glVertex2f(0.54f, 0.2f);
	glVertex2f(0.54f, 0.25f);
	glVertex2f(-0.03f, 0.25f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.54f, 0.25f);
	glVertex2f(0.54f, 0.3f);
	glVertex2f(0.0f, 0.3f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.51f, 0.57f, 0.79f);
	glVertex2f(0.03f, 0.3f);
	glVertex2f(0.51f, 0.3f);
	glVertex2f(0.51f, 0.35f);
	glVertex2f(0.03f, 0.35f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.63f, -0.5f);
	glVertex2f(0.70f, -0.5f);
	glVertex2f(0.70f, -0.45f);
	glVertex2f(0.63f, -0.45f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.63f, -0.4f);
	glVertex2f(0.70f, -0.4f);
	glVertex2f(0.70f, -0.28f);
	glVertex2f(0.63f, -0.28f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.52f, 0.0f);
	glVertex2f(0.52f, 0.1f);
	glVertex2f(0.03f, 0.1f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.08f, 0.1f);
	glVertex2f(0.47f, 0.1f);
	glVertex2f(0.47f, 0.2f);
	glVertex2f(0.08f, 0.2f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.70f, -0.45f);
	glVertex2f(-0.50f, -0.45f);
	glVertex2f(-0.50f, -0.4f);
	glVertex2f(-0.70f, -0.4f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.67f, -0.4f);
	glVertex2f(-0.50f, -0.4f);
	glVertex2f(-0.50f, -0.3f);
	glVertex2f(-0.67f, -0.3f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.1f, -0.15f);
	glVertex2f(0.58f, -0.15f);
	glVertex2f(0.58f, -0.1f);
	glVertex2f(-0.1f, -0.1f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(0.55f, -0.15f);
	glVertex2f(0.55f, 0.0f);
	glVertex2f(-0.05f, 0.0f);
	glEnd();
	
	glPushMatrix();
	glTranslatef(0.0f, -0.005f, 0.0f);
	glRotatef(angle, 0.05f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.52f, 0.0f);
	glVertex2f(0.52f, 0.1f);
	glVertex2f(0.03f, 0.1f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.08f, 0.1f);
	glVertex2f(0.47f, 0.1f);
	glVertex2f(0.47f, 0.2f);
	glVertex2f(0.08f, 0.2f);
	glEnd();
	glPopMatrix();
	
	glBegin(GL_QUADS);
	glColor3f(0.94f, 0.43f, 0.66f);
	glVertex2f(0.40f, -0.3f);
	glVertex2f(0.55f, -0.3f);
	glVertex2f(0.55f, -0.24f);
	glVertex2f(0.40f, -0.24f);
	glEnd();
	
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	radius = 20;
	jumlahTitik = 40;
	xTengah = -35;
	yTengah = -70;
	for (i=0; i<=360; i++){
        float sudut = i * (2 * PI / jumlahTitik);
        float x = xTengah + radius * cos(sudut);
        float y = yTengah + radius * sin(sudut);
		glVertex2f(x/100, y/100);
	}
	glEnd();
	
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	radius = 20;
	jumlahTitik = 40;
	xTengah = 35;
	yTengah = -70;
	for (i=0; i<=360; i++){
        float sudut = i * (2 * PI / jumlahTitik);
        float x = xTengah + radius * cos(sudut);
        float y = yTengah + radius * sin(sudut);
		glVertex2f(x/100, y/100);
	}
	glEnd();
	glutSwapBuffers();
	angle += 0.1f;
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Mobil");
	glutDisplayFunc(Mobil);
	glutTimerFunc(0, timer, 0);
	glClearColor(0.76f, 0.87f, 0.60f, 0.0f);
	glutMainLoop();
	return 0;
}
