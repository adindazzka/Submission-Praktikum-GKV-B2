// Nama     : Adinda Rizka Hamdasati
// NIM      : 24060122140139
// Lab      : GKV B2

#include <GLUT/glut.h>

static int bahu = 0, siku = 0, tangan = 0,
    jempol_pertama = 0, jempol_terakhir = 0,
    telunjuk_pertama = 0, telunjuk_tengah = 0, telunjuk_terakhir = 0,
    tengah_pertama = 0, tengah_tengah = 0, tengah_terakhir = 0,
    manis_pertama = 0, manis_tengah = 0, manis_terakhir = 0,
    kelingking_pertama = 0, kelingking_tengah = 0, kelingking_terakhir = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    
    //bahu
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat) bahu, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    //siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat) siku, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    //tangan
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)tangan, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    //jempol
    glPushMatrix();
        
        //jempol ruas pertama
        glTranslatef(-0.4, 0.0, 0.6);
        glRotatef((GLfloat)jempol_pertama, 0.0, 0.0, 1.0);
        glTranslatef(0.4, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        
        //jempol ruas terakhir
        glTranslatef(0.1, 0.0, 0.0);
        glRotatef((GLfloat)jempol_terakhir, 0.0, 1.0, 0.0);
        glTranslatef(0.3, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();

    glPopMatrix();
    
    //telunjuk
    glPushMatrix();
        
        //telunjuk ruas pertama
        glTranslatef(0.5, 0.0, 0.4);
        glRotatef((GLfloat)telunjuk_pertama, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
            
        //telunjuk ruas tengah
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)telunjuk_tengah, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
            
        //telunjuk ruas terakhir
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)telunjuk_terakhir, 0.0, 0.0, 1.0);
        glTranslatef(0.1, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.2, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
                
    glPopMatrix();

    //tengah
    glPushMatrix();
        
        //tengah ruas pertama
        glTranslatef(0.55, 0.0, 0.1325);
        glRotatef((GLfloat)tengah_pertama, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.5, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        
        //tengah ruas tengah
        glTranslatef(0.3, 0.0, 0.0);
        glRotatef((GLfloat)tengah_tengah, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.5, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    
        //tengah ruas terakhir
        glTranslatef(0.25, 0.0, 0.0);
        glRotatef((GLfloat)tengah_terakhir, 0.0, 0.0, 1.0);
        glTranslatef(0.1, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.2, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    
    glPopMatrix();
    
    //manis
    glPushMatrix();
        
        //manis ruas pertama
        glTranslatef(0.5, 0.0, -0.1325);
        glRotatef((GLfloat)manis_pertama, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        
        //manis ruas tengah
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)manis_tengah, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        
        //manis ruas terakhir
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)manis_terakhir, 0.0, 0.0, 1.0);
        glTranslatef(0.1, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.2, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    
    glPopMatrix();
    
    //kelingking
    glPushMatrix();
        
        //kelingking ruas pertama
        glTranslatef(0.45, 0.0, -0.4);
        glRotatef((GLfloat)kelingking_pertama, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.3, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        
        //kelingking ruas tengah
        glTranslatef(0.1, 0.0, 0.0);
        glRotatef((GLfloat)kelingking_tengah, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.3, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        
        //kelingking ruas terakhir
        glTranslatef(0.15, 0.0, 0.0);
        glRotatef((GLfloat)kelingking_terakhir, 0.0, 0.0, 1.0);
        glTranslatef(0.1, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.2, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
            
    glPopMatrix();
    
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity();
    glTranslatef(.0, 0.0, -10.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 's':
            bahu = (bahu + 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            bahu = (bahu - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e':
            if (siku < 145){
                siku = (siku + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'E':
            if (siku > 0){
                siku = (siku - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'd':
            if (tangan < 90){
                tangan = (tangan + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'D':
            if (tangan > -90){
                tangan = (tangan - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'g':
            if (jempol_pertama < 45){
                jempol_pertama = (jempol_pertama + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'G':
            if (jempol_pertama > -25){
                jempol_pertama = (jempol_pertama - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 't':
            if (jempol_terakhir < 60){
                jempol_terakhir = (jempol_terakhir + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'T':
            if (jempol_terakhir > 0){
                jempol_terakhir = (jempol_terakhir - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'h':
            if (telunjuk_pertama < 90){
                telunjuk_pertama = (telunjuk_pertama + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'H':
            if (telunjuk_pertama > -25){
                telunjuk_pertama = (telunjuk_pertama - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'y':
            if (telunjuk_tengah < 90){
                telunjuk_tengah = (telunjuk_tengah + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'Y':
            if (telunjuk_tengah > 0){
                telunjuk_tengah = (telunjuk_tengah - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '6':
            if (telunjuk_terakhir < 90){
                telunjuk_terakhir = (telunjuk_terakhir + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '^':
            if (telunjuk_terakhir > 0){
                telunjuk_terakhir = (telunjuk_terakhir - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'j':
            if (tengah_pertama < 90){
                tengah_pertama = (tengah_pertama + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'J':
            if (tengah_pertama > -25){
                tengah_pertama = (tengah_pertama - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'u':
            if (tengah_tengah < 90){
                tengah_tengah = (tengah_tengah + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'U':
            if (tengah_tengah > 0){
                tengah_tengah = (tengah_tengah - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '7':
            if (tengah_terakhir < 90){
                tengah_terakhir = (tengah_terakhir + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '&':
            if (tengah_terakhir > 0){
                tengah_terakhir = (tengah_terakhir - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'k':
            if (manis_pertama < 90){
                manis_pertama = (manis_pertama + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'K':
            if (manis_pertama > -25){
                manis_pertama = (manis_pertama - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'i':
            if (manis_tengah < 90){
                manis_tengah = (manis_tengah + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'I':
            if (manis_tengah > 0){
                manis_tengah = (manis_tengah - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '8':
            if (manis_terakhir < 90){
                manis_terakhir = (manis_terakhir + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '*':
            if (manis_terakhir > 0){
                manis_terakhir = (manis_terakhir - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'l':
            if (kelingking_pertama < 90){
                kelingking_pertama = (kelingking_pertama + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'L':
            if (kelingking_pertama > -25){
                kelingking_pertama = (kelingking_pertama - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'o':
            if (kelingking_tengah < 90){
                kelingking_tengah = (kelingking_tengah + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 'O':
            if (kelingking_tengah > 0){
                kelingking_tengah = (kelingking_tengah - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '9':
            if (kelingking_terakhir < 90){
                kelingking_terakhir = (kelingking_terakhir + 5) % 360;
                glutPostRedisplay();
            }
            break;
        case '(':
            if (kelingking_terakhir > 0){
                kelingking_terakhir = (kelingking_terakhir - 5) % 360;
                glutPostRedisplay();
            }
            break;
        case 27:
            //exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1080, 720);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tangan 3 Dimensi"); 
    
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    
    glutMainLoop();
    return 0;
}
