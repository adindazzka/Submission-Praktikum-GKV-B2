#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <gl/gl.h>

void RenderScene(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	   
	glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glColor3f(0.0f, 0.1f, 0.0f);
    #define PI 3.1415926536898
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);  
    GLint circle_points = 100;  
    for (int i = 0; i <= circle_points; i++) {
        float angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * 0.52, sin(angle) * 0.52); 
    }
    glEnd();
    
    glColor3f(0.8f, 0.0f, 0.7f);
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
int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Lingkaran");
	glutDisplayFunc(RenderScene);
	glClearColor(1.0f,0.0f,0.0f,1.0f);
	glutMainLoop();
	return 0;
	}
