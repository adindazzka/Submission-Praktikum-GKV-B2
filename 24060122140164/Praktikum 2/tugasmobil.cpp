#include <GL/glut.h>
#include <cmath>

void RenderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    
    // Body of the Car 
	glPushMatrix();
	glBegin(GL_QUADS);
	
	glColor3f(0.0f, 0.0f, 1.0f);  // Dark Blue
	glVertex2f(-0.35, 0.1);

	glColor3f(0.0f, 0.0f, 0.5f);  // Medium Blue
	glVertex2f(0.3, 0.1);

	glColor3f(0.5f, 0.0f, 0.5f);  // Purple
	glVertex2f(0.2, -0.1);

	glColor3f(0.5f, 0.0f, 0.5f);  // Purple
	glVertex2f(-0.4, -0.1);
	glEnd();
	glPopMatrix();
    
    //lamp 1
    glPushMatrix();
    glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(-0.352, 0.1, -0.1, 0.09);
    glPopMatrix();
    
    //lamp 2
    glPushMatrix();
    glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(-0.357, 0.08, -0.12, 0.07);
    glPopMatrix();
    
     //lamp 3
    glPushMatrix();
    glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(-0.364, 0.06, -0.14, 0.05);
    glPopMatrix();
	
	 //lamp 4
    glPushMatrix();
    glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(-0.370, 0.04, -0.16, 0.03);
    glPopMatrix();
	
		//glass
	glPushMatrix();
	glColor3f(0.1f, 0.0f, 0.1f);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.3, 0.1);
		glVertex2f(0.3, 0.18);
		glVertex2f(0.3, 0.1);
	glEnd();
	glPopMatrix();
	
	
	//roof of the car
	glPushMatrix();
	glColor3f(0.0f, 0.1f, 0.5f);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.3, 0.1);
		glVertex2f(0.1, 0.2);
		glVertex2f(0.3, 0.1);
	glEnd();
	glPopMatrix();
	
	//door line
	glPushMatrix();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
       	glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.05, 0.1, 0);
        glVertex3f(0.05, -0.1, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
       	glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.05, 0.1, 0);
        glVertex3f(0.3, 0.1, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
       	glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.05, 0.1, 0);
        glVertex3f(-0.3, 0.1, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
       	glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.02, 0.01, 0);
        glVertex3f(-0.01, 0.01, 0);
    glEnd();
    glPopMatrix();
    
    //road
    glPushMatrix();
    glColor3f(0.3f, 0.2f, 0.0f);
    glRectf(-100, -0.2, 100, -100);
    glPopMatrix();
    

    
    //wheel rear
    
	glPushMatrix();
    glTranslatef(0.2, -0.1, -0.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    #define PI 3.1415926536898
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);  
    GLint circle_points = 100;  
    for (int i = 0; i <= circle_points; i++) {
        float angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * 0.12, sin(angle) * 0.12); 
    }
    glEnd();

    //wheel velg
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);  
    for (int i = 0; i <= circle_points; i++) {
        float angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * 0.05, sin(angle) * 0.05);  
	}
    glEnd();

    glPopMatrix();
    
      
    //wheel front
    glPushMatrix();
    glTranslatef(-0.27, -0.1, -0.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    #define PI 3.1415926536898
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);  
   // GLint circle_points = 100;  
    for (int i = 0; i <= circle_points; i++) {
        float angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * 0.12, sin(angle) * 0.12); 
    }
    glEnd();

    //wheel velg
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);  
    for (int i = 0; i <= circle_points; i++) {
        float angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * 0.05, sin(angle) * 0.05);  
	}
    glEnd();

    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("2D Car with Tires");
    glutDisplayFunc(RenderScene);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

