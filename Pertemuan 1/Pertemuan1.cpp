#include <GL/glut.h>
#include <windows.h>

void Tampilan (void){
	glClear(GL_COLOR_BUFFER_BIT);
	//Gambar jajar genjang warna magenta
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_QUADS);
		glVertex2f(-0.8, -0.6);
		glVertex2f(-0.4, 0.6);
		glVertex2f(0.8, 0.6);
		glVertex2f(0.4, -0.6);
		glEnd();
	glEnd();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(400,100);
	glutInitWindowSize(400,400);
	glutCreateWindow("2000018286-Riyan Adi Saputro-Postest1");
	glutDisplayFunc(Tampilan);
	glutMainLoop();
}
