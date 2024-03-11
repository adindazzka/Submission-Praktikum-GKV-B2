/* Ananda Putra Bayu
   24060122140125
   B2
*/

#include <gl/glut.h>
#include <cmath>

void Mobil() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Gambar badan mobil
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); // Warna hitam
    glVertex2f(-0.8, -0.3);
    glVertex2f(0.8, -0.3);
    glVertex2f(0.8, 0.3);
    glVertex2f(-0.8, 0.3);
    glEnd();

    // Gambar atap mobil
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.8); // Warna biru
    glVertex2f(-0.8, 0.3);
    glVertex2f(0.6, 0.3);
    glVertex2f(0.6, 0.6);
    glVertex2f(-0.8, 0.6);
    glEnd();
    
    // Gambar Lampu
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glVertex2f(0.7, 0.0);
    glVertex2f(0.8, 0.0);
    glVertex2f(0.8, 0.2);
    glVertex2f(0.7, 0.2);
    glEnd();

    // Gambar roda kiri
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 1.0, 0.0); // Warna hijau
    glVertex2f(-0.5, -0.3);
    int numSegments = 100;
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * 3.1415926f * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = -0.3 + 0.2 * cos(theta);
        float y = -0.3 + 0.2 * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    // Gambar roda kanan
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 1.0, 0.0); // Warna hijau
    glVertex2f(0.5, -0.3);
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * 3.1415926f * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = 0.5 + 0.2 * cos(theta);
        float y = -0.3 + 0.2 * sin(theta);
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
	glutCreateWindow("Mobil");
	glutDisplayFunc(Mobil);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Warna background putih
	glutMainLoop();
	return 0;
}
