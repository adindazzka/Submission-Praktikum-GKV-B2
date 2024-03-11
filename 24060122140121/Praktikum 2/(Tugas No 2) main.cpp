#include <gl/glut.h>
#include <math.h>

int gerak = 0;
bool atas = true;

const double PI = 3.142857143;
int i,radius,jumlah_titik,x_tengah,y_tengah;

void Mobil(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
    glTranslatef( gerak, 0,0); 
    
	//Body Mobil
	glColor3f(0.7f,0.0f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(6.0,3.0); 
	glVertex2f(7.5,0.0); 
	glVertex2f(7.5,-4.0); 
	glVertex2f(-4.0,-4.0); 
	glVertex2f(-8.0,-4.0); 
	glVertex2f(-8.0,-1);  
	glVertex2f(-4.0,-0.0);  
	glVertex2f(-2.1,3.0); 
    glEnd();
    glFlush();
		
	//Kaca Depan
	glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-3.8,0.2);
    glVertex2f(-2.4,2.4);
	glVertex2f(-1.5,2.4);
	glVertex2f(-1.5,0.2);
    glEnd();
    glFlush();

    //Kaca Tengah
    glTranslatef(0.5f, 0.0f, 0.0f);
    glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2.4, 2.4);  
	glVertex2f(2.4, 0.2);  
	glVertex2f(-1.5, 0.2);  
	glVertex2f(-1.5, 2.4);  
	glEnd();
	glFlush();
	      
	//Kaca Belakang
	glTranslatef(-0.5f, 0.0f, 0.0f);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(6.9, 0.2);   
	glVertex2f(5.8, 2.4);   
	glVertex2f(3.4, 2.4);   
	glVertex2f(3.4, 0.2);   
	glEnd();
	glFlush();

	//Spion
	glColor3f(0.4, 0.0, 0.0);
	glPushMatrix(); 
	glTranslatef(-0.9f, 0.7f, 0.0f); 
	glRotatef(180.0f, 0.0f, 0.0f, 1.0f); //Rotasi
	glBegin(GL_POLYGON);
	glVertex2f(-1.2, 0.0);   
	glVertex2f(-1.2, 0.8);   
	glVertex2f(0.4, 0.8);   
	glVertex2f(0.4, 0.0);   
	glEnd();
	glPopMatrix(); 
	glFlush();
	
	//Handle Pintu
	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.5f, -0.2f, 0.0f);
	glRotatef(360.0f, 0.0f, 0.0f, 1.0f); //Rotasi
	glBegin(GL_POLYGON);
	glVertex2f(2.5, -0.2);  
	glVertex2f(2.5, 0.1);  
	glVertex2f(1.4, 0.1);  
	glVertex2f(1.4, -0.2);  
	glEnd();
	glPopMatrix();
	glFlush();
	
	//Lampu Depan
	glColor3f(0.8f,0.8f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-8.0, -1.2); 
	glVertex2f(-8.0, -2.2);
	glVertex2f(-7.0, -2.2); 
	glVertex2f(-7.0, -1.2); 
	glEnd();
	glFlush();
	
	//Lampu Belakang
	glColor3f(0.8f, 0.8f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(7.5, -1.2); 
	glVertex2f(7.5, -2.2); 
	glVertex2f(7.0, -2.2); 
	glVertex2f(7.0, -1.2); 
	glEnd();
	glFlush();

	//Tangki Bensin
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	radius = 50;
	jumlah_titik = 60;
	x_tengah = 590;
	y_tengah = -70;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();
	
	//List Body Bawah
	glColor3f(0.5f,0.0f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(7.5, -4.0); 
	glVertex2f(7.5, -2.5);
	glVertex2f(-8.0, -2.5); 
	glVertex2f(-8.0, -4.0); 
	glEnd();
	glFlush();
	
	//List Ban Depan
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	radius = 190;
	jumlah_titik = 100;
	x_tengah = -350;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();

	//List Ban Belakang
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	radius = 190;
	jumlah_titik = 100;
	x_tengah = 450;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();

	// Ban Belakang Hitam
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	radius = 170;
	jumlah_titik = 60;
	x_tengah = 450;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();
	
	// Ban Belakang Abu Muda
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	radius = 120;
	jumlah_titik = 60;
	x_tengah = 450;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();
	
	// Ban Belakang Abu Tua
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_POLYGON);
	radius = 40;
	jumlah_titik = 60;
	x_tengah = 450;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();

	// Ban Depan Hitam
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	radius = 170;
	jumlah_titik = 60;
	x_tengah = -350;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();
	
	// Ban Depan Abu Muda
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	radius = 120;
	jumlah_titik = 60;
	x_tengah = -350;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
	}
	
	glEnd();
	glFlush();
	
	// Ban Depan Abu Tua
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_POLYGON);
	radius = 40;
	jumlah_titik = 60;
	x_tengah = -350;
	y_tengah = -400;
	
	for (i = 0; i <= 180; i++)
	{
	    float sudut = i * (2 * PI / jumlah_titik);
	    float x = x_tengah + radius * cos(sudut);
	    float y = y_tengah + radius * sin(sudut);
	    glVertex2f(x / 100, y / 100);
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
 	glutTimerFunc(450,timer,0);
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("MOBIL");
	glutDisplayFunc(Mobil);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
    gluOrtho2D(-15.0, 15.0, -15.0, 15.0);
    glutTimerFunc(1,timer,0);
	glutMainLoop();
	return 0;
}
