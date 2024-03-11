/* Ananda Putra Bayu
   24060122140125
   B2
*/

#include <gl/glut.h>
#include <cmath>

float carRotation = 0.0;

void Mobil() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix(); // Push the current matrix to the stack

    // Translasi mobil
    glTranslatef(0.0, 0.0, 0.0);
    glRotatef(carRotation, 0.0, 0.0, 1.0); // Rotasi mo

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
    
    glPopMatrix(); // Pop the matrix from the stack
     
	glFlush();
}
	
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Warna background putih
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // meng-set window coordinates
}

void update(int value) {
    carRotation += 1.0; // Tambahan sudut rotasi mobil

    if (carRotation > 360) {
        carRotation -= 360;
    }

    glutPostRedisplay(); // Me-refresh display
    glutTimerFunc(16, update, 0); // Menetapkan fungsi update untuk dipanggil lagi setelah 16 milidetik
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Mobil");
	
	glutDisplayFunc(Mobil);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Warna background putih
	glutTimerFunc(25, update, 0); // Menetapkan fungsi update untuk dipanggil setiap 25 milidetik
	glutMainLoop();
	return 0;
}
