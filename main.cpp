#include <iostream>
#include <GL/glut.h>

void disp() {
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutCreateWindow("");
	glutDisplayFunc(disp);
	glutMainLoop();

	return 0;
}
