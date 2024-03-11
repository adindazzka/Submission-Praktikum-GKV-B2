///*	Nama: Keisya Intan Nabila 24060122130063
//	Tugas : praktikum 2 tugas membuat lingkaran
//	Lab : B2*/
//	
#include <gl/glut.h>
#include <math.h>

//pembuatan lingkaran
const double PI = 3.142857143;
int i,radius,jumTitik,xTengah,yTengah;

void Lingkaran (void){
	glClear(GL_COLOR_BUFFER_BIT);
    //ban depan
    glColor3f(0.92f, 0.10f, 0.14f);
    //glTranslatef(1.0, -2.0, 0.0);
    glBegin(GL_POLYGON);
    radius = 200;
    jumTitik = 40;
    xTengah = 90;
    yTengah = -90;
      
       for (i=0;i<=360;i++){
              float sudut=i*(2*PI/jumTitik);
              float x=xTengah+radius*cos(sudut);
              float y=yTengah+radius*sin(sudut);
              glVertex2f(x/100,y/100);
       }
        glEnd();
              
    //ban belakang
       glColor3f(0.92f, 0.10f, 0.14f);
       glTranslatef(-7.0, -0.5, 0.0);
       glBegin(GL_POLYGON);
       radius = 200;
       jumTitik = 40;
       xTengah = -90;
       yTengah = -90;
      
       for (i=0;i<=360;i++)
       {
              float sudut=i*(2*PI/jumTitik);
              float x=xTengah+radius*cos(sudut);
              float y=yTengah+radius*sin(sudut);
              glVertex2f(x/100,y/100);
       }
      
        glEnd();
        glFlush();
        
}
	

int main(int argc, char *argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Lingkaran");
	glutDisplayFunc(Lingkaran);
	gluOrtho2D(-10., 10., -10.0, 10.0);
	glClearColor(0.431f, 0.698f, 0.89f, 0.0f);
	glutMainLoop();
	return 0;
}


