///*	Nama: Keisya Intan Nabila 24060122130063
//	Tugas : praktikum 2 tugas Mobil dari objek primitif sekreatif mungkin
//	Lab : B2*/
//	
#include <gl/glut.h>
#include <math.h>

//pembuatan lingkaran
const double PI = 3.142857143;
int i,radius,jumTitik,xTengah,yTengah;

//gerakan otomatis
int gerak = 0;
bool atas = true;

void Mobil (void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_QUADS);// isi jalan
	glColor3f(0.43f, 0.43f, 0.43f);
	glVertex2f(-50.0, 0.0);
	glVertex2f(-50.0, -7.0);
	glVertex2f(100.0, -7.0);
	glVertex2f(100.0, 0.0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);// garis atas jalan
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(50.0f);
	glVertex2f(-50.0, 0.0);
	glVertex2f(100.0, 0.0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);// garis bawah jalan
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(50.0f);
	glVertex2f(-50.0, -7.0);
	glVertex2f(100.0, -7.0);
	glEnd();
	
	//strip jalan
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(-30.0, -3.5);
	glVertex2f(-25.0, -3.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(-20.0, -3.5);
	glVertex2f(-15.0, -3.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(-10.0, -3.5);
	glVertex2f(-5.0, -3.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(0.0, -3.5);
	glVertex2f(5.0, -3.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(10.0, -3.5);
	glVertex2f(15.0, -3.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(20.0, -3.5);
	glVertex2f(25.0, -3.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.92f, 0.92f, 0.92f);
	glLineWidth(20.0f);
	glVertex2f(30.0, -3.5);
	glVertex2f(35.0, -3.5);
	glEnd();
	
	
	//mobil
	glPushMatrix();

	glTranslatef(gerak, 0, 0);
	 //body mobil
	glColor3f(0.812f, 0.09f, 0.267f);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0,5.0);
    glVertex2f(-10.0,4.0);
    glVertex2f(-10.0,3.0);
    glVertex2f(-10.0,2.0);
    glVertex2f(-10.0,4.0);
    glVertex2f(-10.0,0.0);
    glVertex2f(-10.0,-1.0);
    glVertex2f(-9.0,-2.0);
    glVertex2f(-8.0,-3.0);
    glVertex2f(-7.0,-3.0);
    glVertex2f(-6.0,-3.0);
    glVertex2f(-5.0,-3.0);
    glVertex2f(-4.0,-3.0);
    glVertex2f(0.0,-3.0);
    glVertex2f(1.0,-3.0);
    glVertex2f(10.0,-3.0);
    glVertex2f(14.5,-3.0);
    glVertex2f(14.0,-2.0);
    glVertex2f(14.0, 1.5);
    glVertex2f(14.0, 3.0);
    glVertex2f(13.0, 4.0);
    glVertex2f(9.0, 4.0);
    glVertex2f(4.0, 10.0);
    glVertex2f(-4.0, 10.0);
    glVertex2f(-5.5, 10.0);
    glVertex2f(-6.5, 9.5);
    glVertex2f(-7.2, 8.8);
    glVertex2f(-8.0, 7.9);
    glVertex2f(-9.5, 6.0);
    glEnd();
   
   //lampu sein depan
    glBegin(GL_POLYGON);
    glColor3f( 0.96f, 0.55f, 0.33f);
    glVertex2f(14.0,2.0);
    glVertex2f(12.0,2.0);
    glVertex2f(11.0,1.9);
    glVertex2f(11.0,0.1);
    glVertex2f(12.0,0.0);
    glColor3f(0.94f, 0.42f, 0.30f);
    glVertex2f(14.0,0.0);
    glEnd();
   
    //kaca pintu depan
    glBegin(GL_POLYGON);
    glColor3f(0.596f, 0.882f, 0.929f);
    glVertex2f(0.0,9.0);
    glVertex2f(0.0,8.0);
    glVertex2f(0.0,7.0);
    glVertex2f(0.0,6.0);
    glVertex2f(0.0,5.0);
    glVertex2f(0.0,4.0);
    glVertex2f(1.0,4.0);
    glVertex2f(2.0,4.0);
    glVertex2f(3.0,4.0);
    glVertex2f(5.0,4.0);
    glVertex2f(5.0,6.0);
    glVertex2f(4.5,7.0);
    glVertex2f(4.0,8.0);
    glVertex2f(3.0,9.0);
    glVertex2f(0.0,9.0);
    glEnd();
    
    //kaca belakang
    glBegin(GL_POLYGON);
    glColor3f(0.596f, 0.882f, 0.929f);
    glVertex2f(-1.0, 9.0);
    glVertex2f(-5.0,9.0);
    glVertex2f(-6.0,8.0);
    glVertex2f(-7.0,7.0);
    glVertex2f(-8.0,6.0);
    glVertex2f(-8.0,5.0);
    glVertex2f(-1.0,5.0);
    glEnd();
    
    //pintu
     glBegin(GL_POLYGON);
     glColor3f(0.639f, 0.071f, 0.208f);
     glVertex2f(0.0,4.0);
     glVertex2f(0.0,1.0);
     glVertex2f(0.2,0.2);
     glVertex2f(1.0,0.0);
     glVertex2f(4.0,0.0);
     glVertex2f(4.8,0.2);
     glVertex2f(5.0,1.0);
     glVertex2f(5.0,4.0);
     glVertex2f(2.0,4.0);
     glVertex2f(0.0,4.0);
     glEnd();
     
     //pegangan pintu 
     glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(3.0,3.0);
     glVertex2f(3.0,3.2);
     glVertex2f(4.5,3.2);
     glVertex2f(4.5,3.0);
     glEnd();
     
     //kaca depan
     glBegin(GL_POLYGON);
     glColor3f(0.596f, 0.882f, 0.929f);
     glVertex2f(4.2 ,9.0);
     glVertex2f(5.0 ,8.0);
     glVertex2f(5.7 ,7.0);
     glVertex2f(6.9 ,6.0);
     glVertex2f(7.5 ,5.0);
     glVertex2f(8.0 ,4.0);
     glVertex2f(9.1 ,4.0);
     glVertex2f(5.1 ,9.2);
     glEnd();
   
	//atap bawaan kanan
     glBegin(GL_LINE_STRIP);
     glLineWidth(20.0f);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.0 ,10.0);
     glVertex2f(0.0 ,11.0);
     glEnd();
     
     //atap bawaan kiri
     glBegin(GL_LINE_STRIP);
     glLineWidth(20.0f);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-4.0 ,10.0);
     glVertex2f(-4.0 ,11.0);
     glEnd();
	
	//atap
     glBegin(GL_QUADS);
     glColor3f(0.439f, 0.047f, 0.349f);
     glVertex2f(-5.0 ,12.0);
     glVertex2f(-5.0 ,11.0);
     glVertex2f(1.0 ,11.0);
     glVertex2f(1.0 ,12.0);
     glEnd();
	
          
    //ban depan
    glColor3f(0.0,0.0,0.0);
    glTranslatef(7.0, -2.0, 0.0);
    glBegin(GL_POLYGON);
    radius = 250;
    jumTitik = 100;
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
       glColor3f(0.0,0.0,0.0);
       glTranslatef(-10.0, -0.5, 0.0);
       glBegin(GL_POLYGON);
       radius = 250;
       jumTitik = 100;
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

 glutTimerFunc(300,timer,0);
}

	

int main(int argc, char *argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Mobil Pixel");
	glutDisplayFunc(Mobil);
	gluOrtho2D(-30., 30., -30.0, 30.0);
	glutTimerFunc(1,timer,0);
	glClearColor(0.431f, 0.698f, 0.89f, 0.0f);
	glutMainLoop();
	return 0;
}


