#include <GL/glut.h>
#include <cmath>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.27f, 0.48f, 0.98f, 1.0f);
    
    // body mobil
    glBegin(GL_POLYGON);
    glVertex2f(-0.3, 0.05); 
    glVertex2f(-0.28, 0.15);
    glVertex2f(-0.16, 0.17);
    glVertex2f(-0.11, 0.25);
    glVertex2f(0.12, 0.25);
    glVertex2f(0.253, 0.164);
    glVertex2f(0.36, 0.14);
    glVertex2f(0.36, 0.05);
    glEnd();
    
    // roda belakang
     glColor4f(0.3f, 0.3f, 0.3f,1.0f);
    glBegin(GL_POLYGON);
    float left_wheel_center_x = -0.17;
    float left_wheel_center_y = 0.05;
    float left_wheel_radius = 0.05;
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159 / 180;
        float x = left_wheel_center_x + left_wheel_radius * cos(angle);
        float y = left_wheel_center_y + left_wheel_radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();


    // roda depan
  glColor4f(0.3f, 0.3f, 0.3f,1.0f); 
    glBegin(GL_POLYGON);
    float right_wheel_center_x = 0.25;
    float right_wheel_center_y = 0.05;
    float right_wheel_radius = 0.05;
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159 / 180;
        float x = right_wheel_center_x + right_wheel_radius * cos(angle);
        float y = right_wheel_center_y + right_wheel_radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    
    //spoiler
    glColor4f(0.17f, 0.28f, 0.98f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.27, 0.15); 
    glVertex2f(-0.26, 0.17);
    glVertex2f(-0.28, 0.17);
    glVertex2f(-0.29, 0.18);
    glVertex2f(-0.22, 0.19);
    glVertex2f(-0.25, 0.17);
    glVertex2f(-0.24, 0.15);
    glEnd();
    
    //jendela belakang
glColor4f(0.75f, 0.8f, 0.937f, 1.0f); 
    glBegin(GL_POLYGON);
    glVertex2f(-0.15, 0.17); 
    glVertex2f(-0.09, 0.23);
    glVertex2f(-0.06, 0.23);
    glVertex2f(-0.06, 0.17);
    glEnd();
    
    //jendela depan
    glColor4f(0.75f, 0.8f, 0.937f, 1.0f); 
    glBegin(GL_POLYGON);
    glVertex2f(-0.03, 0.23); 
    glVertex2f(-0.03, 0.17);
    glVertex2f(0.19, 0.17);
    glVertex2f(0.12, 0.23);
    glEnd();
    
    //lampu depan
	glColor4f(0.937f, 0.718f, 0.004f, 1.0f);	 
    glBegin(GL_POLYGON);
    glVertex2f(0.34, 0.12); 
    glVertex2f(0.36,0.12);
    glVertex2f(0.36, 0.10);
    glVertex2f(0.34, 0.10);
    glEnd();
    
    //lampu belakang
	glColor4f(0.914f, 0.039f, 0.039f, 1.0f);	 
    glBegin(GL_POLYGON);
    glVertex2f(-0.28, 0.14); 
    glVertex2f(-0.26,0.14);
    glVertex2f(-0.26, 0.11);
    glVertex2f(-0.29, 0.11);
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(680, 680);
    glutCreateWindow("Mobil Abyan");
    glClearColor(1.0, 1.0, 1.0, 1.0); 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

