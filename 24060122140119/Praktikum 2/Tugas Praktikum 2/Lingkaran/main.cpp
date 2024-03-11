// Nama : Raka Maulanna Yusuf
// NIM : 24060122140119
// Deskripsi : Tugas Membuat Lingkaran Praktikum 2 GKV 


#include "stdlib.h"
#include "gl/glut.h"
#include "math.h"

const double PI = 3.141592653589793;
int i;

void back(){
glBegin(GL_QUADS);
glColor3f(1,1,1);
  glVertex2d (-150,150);
  glVertex2d(150,150);
  glVertex2d(150,-150);
  glVertex2d (-150,-150);
glEnd();
}


void lingkaran(int radius, int jumlah_titik, int x_tengah, int y_tengah) {
 glBegin(GL_POLYGON);
 for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
  glVertex2f(x,y);
 }
 glEnd();
}

void Draw() {
 glClear(GL_COLOR_BUFFER_BIT);
 back();
 glColor3f(0.0, 1.0, 0.0);
 lingkaran(40,70,0,0);
 glColor3f(1.0, 0.0, 0.0);
 lingkaran(40,80,60,60);
 glColor3f(0.0, 0.0, 1.0);
 lingkaran(40,70,-60,-60);
 glFlush();
}


int main(int argc, char **argv) {
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(640, 480);
 glutInitWindowPosition(200, 200);
 glutCreateWindow("Lingkaran");
 gluOrtho2D(-150., 150., -150., 150.);
 glutDisplayFunc(Draw);
 glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
 glutMainLoop();
 return 0;
}
