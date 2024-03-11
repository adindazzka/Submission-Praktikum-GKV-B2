/* Ananda Putra Bayu
   24060122140125
   B2
*/


#include <gl/glut.h>
#include <cmath>
void Lingkaran(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

    // Gambar lingkaran
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 0.0); // Warna merah
    glVertex2f(0.0, 0.0); // Pusat lingkaran

    int numSegments = 100;
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * M_PI * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = 0.3 * cos(theta);
        float y = 0.4 * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Lingkaran");
	glutDisplayFunc(Lingkaran);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Warna Background Hitam
	glutMainLoop();
	return 0;
}
