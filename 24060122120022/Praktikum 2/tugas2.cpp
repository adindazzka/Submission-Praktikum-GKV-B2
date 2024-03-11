// Nama  	 : Muhammad Daffa Aradhana Adriansyah
// NIM 		 : 24060122120022
// Deskripsi : Tugas Praktikum 2 GKV


#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.142857143;
int i,radius,jumlah_titik,x_tengah,y_tengah;
int gerak = 0;
bool atas = true;

void cybertruck()
{  
       glClear(GL_COLOR_BUFFER_BIT);
       
      //animasi
       glPushMatrix();
       glTranslatef( gerak, 0,0);
       
       //lampu depan
       	glColor3f(255,128,0);	 
	    glBegin(GL_POLYGON);
	    glVertex2f(2.7, 0); 
	    glVertex2f(2.7,-0.1);
	    glVertex2f(2.3, 0);
	    glVertex2f(2.3, -0.1);
	    glEnd();
	    glFlush;

       //body tengah
       glColor3f(0.5,0.5,0.5);
       glBegin(GL_POLYGON);
       glVertex2f(0.5,1.0);
       glVertex2f(1.5,0.0);
       glVertex2f(1.5,-1.0);
       glVertex2f(-1.0,-1.0);
       glVertex2f(-1.0,0.0);
       glVertex2f(0.5,1.0);
              glEnd();
              glFlush();
  
       //body depan
       glColor3f(0.5,0.5,0.5);
       glBegin(GL_POLYGON);
       glVertex2f(0.5,1.0);
       glVertex2f(2.7,0.0);
       glVertex2f(2.7,-1.0);
       glVertex2f(1.5,-1.0);
              glEnd();
              glFlush();


       //body belakang
       glColor3f(0.5,0.5,0.5);
       glBegin(GL_POLYGON);
       glVertex2f(-1.0,-1.0);
       glVertex2f(-3.0,-0.8);
       glVertex2f(-3.2,0.0);
       glVertex2f(0.5,1.0);
              glEnd();
              glFlush();

       //kaca depan
       glColor3f(5.0,1.0,5.0);
       glBegin(GL_POLYGON);
       glVertex2f(0.5,0.85);
       glVertex2f(0.5,0.5);
       glVertex2f(2.3,0.0);
       glVertex2f(0.5,0.0);
              glEnd();
              glFlush();
      
       //kaca belakang
       glColor3f(5.0,1.0,5.0);
       glBegin(GL_POLYGON);
       glVertex2f(0.4,0.85);
       glVertex2f(-0.8,0.5);
       glVertex2f(-0.80,0.0);
       glVertex2f(0.4,0.0);
              glEnd();
              glFlush();

       //roda depan
       glColor3f(0.0,0.0,0.0);
       glBegin(GL_POLYGON);
      
       radius = 40;
       jumlah_titik = 60;
       x_tengah = 190;
       y_tengah = -90;
      
       for (i=0;i<=360;i++)
       {
              float sudut=i*(2*PI/jumlah_titik);
              float x=x_tengah+radius*cos(sudut);
              float y=y_tengah+radius*sin(sudut);
              glVertex2f(x/100,y/100);
       }
              glEnd();
              glFlush();

       //roda belakang
       glColor3f(0.0,0.0,0.0);
       glBegin(GL_POLYGON);
      
       radius = 40;
       jumlah_titik = 60;
       x_tengah = -90;
       y_tengah = -90;
      
       for (i=0;i<=360;i++)
       {
              float sudut=i*(2*PI/jumlah_titik);
              float x=x_tengah+radius*cos(sudut);
              float y=y_tengah+radius*sin(sudut);
              glVertex2f(x/100,y/100);
       }
              glEnd();
              glFlush();
              glPopMatrix();
}
void timer(int t)
{
    if (atas){
        gerak += 1;
    } else {
        gerak -= 1;
    }
    if (gerak > 20) {
        atas = false;
    } else if(gerak < -20){
        atas = true;
    }
 glutPostRedisplay();

 glutTimerFunc(70,timer,0);
}


int main(int argc, char** argv)
{
       glutCreateWindow("Mobil Cybertruck by Daffa");
       glClearColor(1.0,9.0,1.0,0.0);
       glutDisplayFunc(cybertruck);
       gluOrtho2D(-20., 20., -20.0, 20.0);
       glutTimerFunc(1,timer,0);
       glutMainLoop();
}
