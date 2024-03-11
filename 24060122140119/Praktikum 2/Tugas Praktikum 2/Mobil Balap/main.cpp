// Nama : Raka Maulanna Yusuf
// NIM : 24060122140119
// Deskripsi : Tugas Membuat Objek 2D "Mobil" Praktikum 2 GKV


#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


GLint b=300;
float  counter=600.0;

void initOpenGl()
{
    glClearColor(1.0,1.0,1.0, 1.0); 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
    glMatrixMode(GL_MODELVIEW);
}

void ban(int x, int y, float size)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(0,0,0);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(x+size*20*cos(th),y+size*20*sin(th));
   }

   glEnd();
}

void mobilbalap()
{
   // bagian bawah
   glLoadIdentity();
   counter = counter - 0.5;
   glTranslated(counter,100,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,160);
   glVertex2f(450,160);
   glVertex2f(450,100);
   glEnd();
   
   // bagian atas depan
   glBegin(GL_POLYGON);
   glVertex2f(150,160);
   glVertex2f(200,200);
   glVertex2f(250,200); 
   glVertex2f(250,160); 
   glEnd();
	
   // bagian atas belakang
   glBegin(GL_POLYGON);
   glVertex2f(300,160); 
   glVertex2f(300,200); 
   glVertex2f(350,200);
   glVertex2f(400,160);
   glEnd();

   // spoiler
   glBegin(GL_POLYGON);
   glVertex2f(400,160);
   glVertex2f(400,200);
   glVertex2f(450,200);
   glVertex2f(450,160);
   glEnd();

   // ban
   ban(200,100,1.8); // depan
   ban(380,100,1.8); // belakang
}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,0.0,0.0);
  mobilbalap();
  glutSwapBuffers();
  glFlush();


}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Mobil Balap");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
