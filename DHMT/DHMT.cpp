#include <math.h>
#include <iostream>
#include <stdio.h>
//#include "C:\Users\Administrator\Desktop\DHMT\Dependencies\glew\glew.h"
//#include "C:\Users\Administrator\Desktop\DHMT\Dependencies\freeglut\freeglut.h"
//#include "C:\Users\Administrator\Desktop\DHMT\Dependencies\SDL\SDL.h"

#include "C:\Users\DELL\Desktop\DHMT\Dependencies\glew\glew.h"
#include "C:\Users\DELL\Desktop\DHMT\Dependencies\freeglut\freeglut.h"
#include "C:\Users\DELL\Desktop\DHMT\Dependencies\SDL\SDL.h"
//----------------------------------------------------LAB1----------------------------------------------------
//bai1
/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(5.0);

	glBegin(GL_POINTS);
	glVertex3f(200.0, 120.0, 0.0);
	glVertex3f(440.0, 120.0, 0.0);
	glVertex3f(440.0, 360.0, 0.0);
	glVertex3f(200.0, 360.0, 0.0);
	glEnd();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Point");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/

//bai2
/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);


	glBegin(GL_TRIANGLES);
	glVertex2i(160,80);
	glVertex2i(480, 80);
	glVertex2i(320, 400);

	glEnd();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/

//bai3
/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);

}
void triangle()
{
	glBegin(GL_TRIANGLES);
		glColor3f(1.0, 0.0, 0.0);
		glVertex2i(160, 80);
		glVertex2i(480, 80);
		glVertex2i(320, 400);
	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	triangle();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/

//bai4
/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);

}
void triangle()
{
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(160, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(480, 80);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(320, 400);
	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	triangle();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/

//bai5

/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //clear black
									  //glShadeModel(GL_FLAT);
}

void hinhVuong(GLint x, GLint y, GLint a)
{
	glBegin(GL_POLYGON);
	//glColor3f(1.0, 0.0, 0.0);
	glVertex2i(x, y);
	//glColor3f(0.0, 7.0, 0.0);
	glVertex2i(x + a, y);
	//glColor3f(0.0, 0.0, 3.0);
	glVertex2i(x + a, y + a);
	//glColor3f(9.0, 8.0, 3.0);
	glVertex2i(x, y + a);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	GLint size = 200; //Ä‘á»™ dÃ i cáº¡nh
	GLint x = (screenWidth - size) / 2; //canh vÃ o giá»¯a theo x
	GLint y = (screenHeight - size) / 2; //canh vÃ o giá»¯a theo y
	hinhVuong(x, y, size);
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/

//bai6

/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //clear black
									  //glShadeModel(GL_FLAT);
}

void hinhChuNhat(GLint x, GLint y, GLint width, GLint height)
{
	glBegin(GL_POLYGON);
	//glColor3f(1.0, 0.0, 0.0); // để màu
	glVertex2i(x, y);
	//glColor3f(0.0, 7.0, 0.0);
	glVertex2i(x + width, y);
	//glColor3f(0.0, 0.0, 3.0);
	glVertex2i(x + width, y + height);
	//glColor3f(9.0, 8.0, 3.0);
	glVertex2i(x, y + height);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	GLint w = 400; //chiều rộng
	GLint h = 200; //chiều cao
	GLint x = (screenWidth - w) / 2; //canh vào giữa theo x
	GLint y = (screenHeight - h) / 2; //canh vào giữa theo y
	hinhChuNhat(x, y, w, h);
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khởi tạo glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khởi tao chế độ vẽ hệ màu RBG
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

*/

//bai7
/*const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //clear black
									  //glShadeModel(GL_FLAT);
}

void hinhChuNhat(GLint x, GLint y, GLint width, GLint height)
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0); // Ä‘á»ƒ mÃ u
	glVertex2i(x, y);
	glColor3f(0.0, 7.0, 0.0);
	glVertex2i(x + width, y);
	glColor3f(0.0, 0.0, 3.0);
	glVertex2i(x + width, y + height);
	glColor3f(9.0, 8.0, 3.0);
	glVertex2i(x, y + height);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	GLint w = 400; //chiá»u rá»™ng
	GLint h = 200; //chiá»u cao
	GLint x = (screenWidth - w) / 2; //canh vÃ o giá»¯a theo x
	GLint y = (screenHeight - h) / 2; //canh vÃ o giá»¯a theo y
	hinhChuNhat(x, y, w, h);
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

*/

///bai8
/*const int screenWidth = 250;
const int screenHeight = 250;

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0); //clear white

	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
								  //glColor3f(1.0, 1.0, 1.0); //white
	glColor3f(0.0, 0.0, 0.0); //black

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_TRIANGLE_STRIP);
	//glVertex2i(50, 50); //v0
	//glVertex2i(200, 50); //v2
	//glVertex2i(100, 150); //v1
	//
	////glVertex2i(300, 100); //v3
	//glVertex2i(270, 150); //v4
	////glVertex2i(350, 250); //v5

	////glVertex2i(50, 50); //v0
	//glVertex2i(100, 150); //v2
	//glVertex2i(200, 150); //v1
	//
	//glVertex2i(150, 250); //v3
	//glVertex2i(200, 100); //v4
	//glVertex2i(30, 100);
	////glVertex2i(450, 150); //v5
	//---------------------------------------------------------------

*/

//bai9 
/*const int screenWidth = 640;
const int screenHeight = 480;
const double R = 150;
const double pi = 3.14;


struct  GLdoublePoint
{
	GLdouble x;
	GLdouble y;
};

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0); //clear white
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	glPointSize(5.0);
	glColor3f(0.0, 0.0, 0.0); //black

	glBegin(GL_POINTS);
	GLdoublePoint V1, V2, V3, V4, V5, V0;

	V0.x = screenWidth / 2;
	V0.x = screenHeight / 2;
	V1.x = V0.x;
	V1.y = V0.y + R;
	V2.x = V0.x + R*sin(2 * pi / 5);
	V2.y = V0.y + R*cos(2 * pi / 5);
	V3.x = V0.x + R*sin(pi / 5);
	V3.y = V0.y - R*cos(pi / 5);
	V4.x = V0.x - R*sin(pi / 5);
	V4.y = V0.y - R*cos(pi / 5);
	V5.x = V0.x - R*sin(2 * pi / 5);
	V5.y = V0.y + R*cos(2 * pi / 5);

	glVertex2d(V1.x, V1.y);
	glVertex2d(V2.x, V2.y);
	glVertex2d(V3.x, V3.y);
	glVertex2d(V4.x, V4.y);
	glVertex2d(V5.x, V5.y);

	glEnd();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/
//bai10
/*#define pi 3.141592653
#define Steps 40

void glCirle(GLint x, GLint y, GLint radius)
{
	GLfloat twicePi = (GLfloat) 2.0f * pi;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(x, y); //tÃ¢m
	for (int i = 0; i <= Steps; i++) //váº½
	{
		glVertex2i((GLint)(x + (radius*cos(i*twicePi / Steps)) + 0.5),
			(GLint)(y + (radius*sin(i*twicePi / Steps)) + 0.5));
	}
	glEnd();
}


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0); //clear white
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	glColor3f(1.0, 1.0, 1.0); //White
	glCirle(320, 240, 150);

	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
												  //glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	//init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/  ///bai10
//bai11
/*#define pi 3.141592653
#define Steps 40
void glCirle(GLint x, GLint y, GLint radius)
{
	GLfloat twicePi = (GLfloat) 2.0f * pi;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(x, y); //tÃ¢m
	for (int i = 0; i <= Steps; i++) //váº½
	{
		glVertex2i((GLint)(x + (radius*cos(i*twicePi / Steps)) + 0.5),
			(GLint)(y + (radius*sin(i*twicePi / Steps)) + 0.5));
	}
	glEnd();
}


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0); //clear white
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	glColor3f(1.0, 1.0, 1.0); //White
	GLfloat red = 1.0f;
	GLfloat green = 1.0f;
	GLfloat blue = 1.0f;
	for (int r = 200; r > 0; r -= 30)
	{
		glColor3f(red, green, blue);
		glCirle(320, 240, r);
		red -= 0.1f;
		green -= 0.2f;
		blue -= 0.3f;
	}

	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
												  //glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	//init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
*/
//bai12
/*#define pi 3.141592653
#define Steps 40
#define Max_Stars 300

const int screenWidth = 640;
const int screenHeight = 480;

struct  star
{
	GLint x, y;
	GLint radius;
	GLint velocity;
	GLfloat intensity;
};

star sky[Max_Stars];

void glCirle(GLint x, GLint y, GLint radius)
{
	GLfloat twicePi = (GLfloat) 2.0f * pi;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(x, y); //tÃ¢m
	for (int i = 0; i <= Steps; i++) //váº½
	{
		glVertex2i((GLint)(x + (radius*cos(i*twicePi / Steps)) + 0.5),
			(GLint)(y + (radius*sin(i*twicePi / Steps)) + 0.5));
	}
	glEnd();
}

void skyInit()
{
	for (int i = 0; i < Max_Stars; i++)
	{
		sky[i].x = rand() % screenWidth;
		sky[i].y = rand() % screenHeight;
		sky[i].radius = 1 + rand() % 3;
		sky[i].intensity = sky[i].radius / 3.0f;
		sky[i].velocity = sky[i].radius * 2 + rand() % 3;
	}
}

void skyDraw()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	for (int i = 0; i < Max_Stars; i++)
	{
		glColor3f(sky[i].intensity, sky[i].intensity, sky[i].intensity);
		glCirle(sky[i].x, sky[i].y, sky[i].radius);
	}
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //clear black
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	glColor3f(1.0, 1.0, 1.0); //White
	glPushMatrix();
	skyDraw();
	glPopMatrix();
	glutSwapBuffers();
}

void update()
{
	for (int i = 0; i < Max_Stars; i++)
	{
		sky[i].x += sky[i].velocity;
		if (sky[i].x >= screenWidth)
		{
			sky[i].x = 0;
			sky[i].y = rand() % screenHeight;
			sky[i].radius = 1 + rand() % 3;
			sky[i].intensity = sky[i].radius / 3.0f;
			sky[i].velocity = sky[i].radius * 2 + rand() % 3;
		}
	}
	Sleep(50);
	glutPostRedisplay();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	skyInit();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(update);
	glutMainLoop();
	return 0;
}

*/

//bai13
/*const int screenWidth = 250;
const int screenHeight = 250;
static GLfloat spin = 0.0;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //clear black
	glShadeModel(GL_FLAT);
}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //clear color buffer
	glPushMatrix();
	glRotatef(spin, 0, 0, 1);
	glColor3f(1, 1, 1);
	glRectf(-25, -25, 25, 25);
	glPopMatrix();
	glutSwapBuffers();
}

void spinDislay(void)
{
	spin += 2;
	if (spin > 360)
		spin -= spin;
	glutPostRedisplay();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50, 50, -50, 50, -1, 1);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
			glutIdleFunc(spinDislay);
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN)
			glutIdleFunc(NULL);
		break;
	default:
		break;
	}

}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); //khá»Ÿi táº¡o glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //khá»Ÿi tao cháº¿ Ä‘á»™ váº½ há»‡ mÃ u RBG
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}

*/
//======================================================LAB2=================================

//bai2
/*const int screenWidth = 250;
const int screenHeight = 250;


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glShadeModel(GL_SMOOTH);
}



void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(4.0, 0.0, 0.0);
	glutSolidTeapot(0.5);
	glFlush();
}


void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glRotatef(180.0, 0.0, 1.0, 0.0); // them dong nay de xoay 180 do
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

*/

//bai3
/*#include<math.h>
#include<iostream>

void initGlut(int argc, char **argv);
void displayFunc(void);
void idleFunc(void);
void reshapeFunc(int width, int height);
void mouseFunc(int button, int state, int x, int y);
void mouseMotionFunc(int x, int y);
void keyboardFunc(unsigned char key, int x, int y);
void specialFunc(int key, int x, int y);

void countFrames(void);
void randerBitMapString(float x, float y, float z, void*font, char*string);
bool bUsePredefinedCamera = true;
bool bFullsreen = false;
int nWindowID;
float viewerPosition[3] = { 0.0,0.0,-50.0 };
float viewerDirection[3] = { 0.0,0.0,0.0 };
float viewerUp[3] = { 0.0,1.0,0.0 };
float navigationRotation[3] = { 0.0,0.0,0.0 };
char pixelstring[30];
int cframe = 0;
int time = 0;
int timebase = 0;
int mousePressedX = 0, mousePressedY = 0;
float lastXOffset = 0.0, lastYOffset = 0.0, lastZOffset = 0.0;
int leftMouseButtonActive = 0, middleMouseButtonAcive = 0, rightMouseButtonActive = 0;
int shiftActive = 0, altActive = 0, ctrlActive = 0;
bool init = false;

void displayFunc(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, 1.33, 1.0, 100000.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	GLfloat lightpos[4] = { 5.0,15.0,10.0,1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightpos);
	glTranslatef(viewerPosition[0], viewerPosition[1], viewerPosition[2]);
	glRotatef(navigationRotation[0], 1.0f, 0.0f, 0.0f);
	glRotatef(navigationRotation[1], 0.0f, 1.0f, 0.0f);
	glutSolidTeapot(10.0);
	countFrames();
	glutSwapBuffers();

}

void initGlut(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	nWindowID = glutCreateWindow("simpleGLUT");
	glutDisplayFunc(displayFunc);
	glutReshapeFunc(reshapeFunc);
	glutKeyboardFunc(keyboardFunc);
	glutSpecialFunc(specialFunc);
	glutMouseFunc(mouseFunc);
	glutMotionFunc(mouseMotionFunc);
	glutIdleFunc(idleFunc);
}

void idleFunc(void)
{
	glutPostRedisplay();
}

void reshapeFunc(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75.0, 1.33, 1.0, 1000.0);
	glMatrixMode(GL_MODELVIEW);
}

void mouseFunc(int button, int state, int x, int y)
{
	switch (glutGetModifiers())
	{
	case GLUT_ACTIVE_SHIFT:
		shiftActive = 1;
	case GLUT_ACTIVE_ALT:
		altActive = 1;
	case GLUT_ACTIVE_CTRL:
		ctrlActive = 1;
	default:
		shiftActive = 0;
		altActive = 0;
		ctrlActive = 0;
		break;
	}
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {
			leftMouseButtonActive += 1;
		}
		else
			leftMouseButtonActive -= 1;
	else if (button == GLUT_MIDDLE_BUTTON)
		if (state == GLUT_DOWN) {
			middleMouseButtonAcive += 1;
			lastXOffset = 0.0;
			lastYOffset = 0.0;
		}
		else
			middleMouseButtonAcive -= 1;
	else if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {
			rightMouseButtonActive += 1;
			lastZOffset = 0.0;
		}
		else
			rightMouseButtonActive -= 1;
	mousePressedX = x;
	mousePressedY = y;
}

void mouseMotionFunc(int x, int y)
{
	float xOffset = 0.0, yOffset = 0.0, zOffset = 0.0;
	if (leftMouseButtonActive) {
		navigationRotation[0] += ((mousePressedY - y)*180.0f) / 200.0f;
		navigationRotation[1] += ((mousePressedX - x)*180.0f) / 200.0f;
		mousePressedY = y;
		mousePressedX = x;
	}
	else if (middleMouseButtonAcive) {
		xOffset = (mousePressedX + x);
		if (!lastXOffset == 0.0) {
			viewerPosition[0] -= (xOffset - lastXOffset) / 8.0;
			viewerDirection[0] -= (xOffset - lastXOffset) / 8.0;
		}
		lastXOffset = xOffset;
		yOffset = (mousePressedY + y);
		if (!lastYOffset == 0.0) {
			viewerPosition[1] -= (yOffset - lastYOffset) / 8.0;
			viewerDirection[1] -= (yOffset - lastYOffset) / 8.0;
		}
		lastYOffset = yOffset;

	}
	else if (rightMouseButtonActive)
	{
		zOffset = (mousePressedX + x);
		if (!lastZOffset == 0.0) {
			viewerPosition[2] -= (zOffset - lastZOffset) / 8.0;
			viewerDirection[2] -= (zOffset - lastZOffset) / 8.0;
		}
		lastZOffset = zOffset;
	}
}

void keyboardFunc(unsigned char key, int x, int y)
{
	switch (key)
	{
#ifdef WIN32
	case'\033':
		exit(0);
		break;
#endif
	case 'f':
		bFullsreen = !bFullsreen;
		if (bFullsreen)
			glutFullScreen();
		else {
			glutSetWindow(nWindowID);
			glutPositionWindow(100, 100);
			glutReshapeWindow(640, 480);

		}
		break;

	}
}

void specialFunc(int key, int x, int y) {
	printf("key pressed: %d\n", key);
}

void countFrames(void)
{
	time = glutGet(GLUT_ELAPSED_TIME);
	cframe++;
	if (time - timebase > 50)
	{
		printf(pixelstring, "fps:%4.2f", cframe*1000.0 / (time - timebase));
		timebase = time;
		cframe = 0;
	}
	glPushMatrix();
	glLoadIdentity();
	glDisable(GL_LIGHTING);
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	gluOrtho2D(0, 200, 0, 200);
	glMatrixMode(GL_MODELVIEW);
	randerBitMapString(5, 5, 0.0, GLUT_BITMAP_HELVETICA_10, pixelstring);
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
}

void randerBitMapString(float x, float y, float z, void *font, char *string)
{
	char *c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++)
	{
		glutBitmapCharacter(font, *c);
	}
}

void main(int argc, char**argv)
{
	printf("simpleGLUT\n\tGordon Wetzstein [gordon.wetzstein@medien.uni-weimar.de]\n\n");
	printf("keys:\n\tf\t -toggle fullscreen\n\tesc\t - exit\n\n");
	printf("mouse:\n\tleft button\t- rotation\n\tmiddle button\t-panning\n\tright button\t -zoom in and out\n");
	initGlut(argc, argv);
	glutMainLoop();
}


/*





//bai1
/*#include <Math.h>
#define PI 3.2f

char title[] = "Bouncing Ball (2D)";
int windowWidth = 640;
int windowHeight = 480;
int windowPosX = 50;
int windowPosY = 50;


GLfloat ballRadius = 0.5f;
GLfloat ballX = 0.0f;

GLfloat ballY = 0.0f;
GLfloat ballXMax, ballXMin, ballYMax, ballYMin;
GLfloat xSpeed = 0.02f;
GLfloat ySpeed = 0.007f;
int refreshMillis = 30;

GLdouble clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop;

void initGL()
{
	glClearColor(0.0, 2.0,1.0,1.0);

}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(ballX, ballY, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(4.0f,0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	int numSegments = 100;
	GLfloat angle;
	for (int i = 0; i <= numSegments; i++)
	{
		angle = i * 2.0f * PI / numSegments;
		glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
	}
	glEnd();
	glutSwapBuffers();


	ballX += xSpeed;
	ballY += ySpeed;

	if (ballX > ballXMax) {
		ballX = ballXMax;
		xSpeed = -xSpeed;
	}
	else if (ballX < ballXMin) {
		ballX = ballXMin;
		xSpeed = -xSpeed;
	}
	if (ballY > ballYMax)
	{
		ballY = ballYMax;
		ySpeed = -ySpeed;
	}
	else if (ballY < ballYMin) {
		ballY = ballYMin;
		ySpeed = -ySpeed;
	}

}
void reshape(GLsizei width, GLsizei height)
{
	if (height == 0) height = 1;
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (width >= height) {
		clipAreaXLeft = -1.0 * aspect;
		clipAreaXRight = 1.0 * aspect;
		clipAreaYTop = 1.0;
		clipAreaYBottom = -1.0;
	}
	else
	{
		clipAreaXLeft = -1.0;
		clipAreaXRight = 1.0;
		clipAreaYBottom = -1.0 / aspect;
		clipAreaYTop = 1.0 / aspect;
	}
	gluOrtho2D(clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop);
	ballXMin = clipAreaXLeft + ballRadius;
	ballXMax = clipAreaXRight - ballRadius;
	ballYMin = clipAreaYBottom + ballRadius;
	ballYMax = clipAreaYTop - ballRadius;
}
void Timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(refreshMillis, Timer, 0);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE);

	glutInitWindowSize(windowWidth, windowHeight);
	glutInitWindowPosition(20, 10);
	glutCreateWindow(title);

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(0, Timer, 0);

	initGL();
	glutMainLoop();
	return 0;
}
*/

//bai4
/*
void DisplayFunc(void)
{
	static float alpha = 0;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -10);
	glRotatef(30, 1, 0, 0);
	glRotatef(alpha, 0, 1, 0);
	glBegin(GL_QUADS);

	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);

	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);
	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);

	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);

	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);

	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);
	glColor3f(1, 0, 0); glVertex3f(1,-1, -1);

	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);

	glEnd();
	alpha = alpha + 0.1;
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();

}
void ReshapeFunc(int width, int height)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(30, width / (float)height, 5, 15);
	glViewport(0, 0, width, height);
	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Spinning cude");
	glClearColor(0, 0, 0, 0);
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(&DisplayFunc);
	glutReshapeFunc(&ReshapeFunc);
	glutKeyboardFunc(&KeyboardFunc);
	glutMainLoop();
	return 0;
}
*/

//======================================================LAB3=================================
//traidat

static int year = 0, day = 0;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST); // bật chức năng cho phép loại bỏ một phần của

	glShadeModel(GL_FLAT);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix(); // lưu lại ma trận hiện hành
	glColor3f(0.0, 1.0, 0.0); // thiết lập màu vẽ là màu đỏ
	glutWireSphere(1.0, 20, 16); // vẽ mặt trời là một lưới cầu có tâm tại

	glRotatef((GLfloat)year, 0.0, 1.0, 0.0); // quay một góc tương ứng với thời gian trong năm
	glTranslatef(2.0, 0.0, 0.0); // tịnh tiến đến vị trí hiện tại của trái	đất trên quỹ đạo quanh mặt trời
	glRotatef((GLfloat)day, 0.0, 1.0, 0.0); // quay trái đất tương ứng với	thời gian trong ngày
	glColor3f(0, 0, 1.0); // thiết lập màu vẽ là màu blue
	glutWireSphere(0.2, 10, 8); // vẽ trái đất
	glPopMatrix(); // phục hồi lại ma trận hiện hành cũ: tương ứng với quay	lại vị trí ban đầu

	glutSwapBuffers();
	
		day = (day + 1) % 360;
	
	year = (year - 1) % 360;
	
	glutPostRedisplay();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h); // thay đổi kích thướcviewport

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0); // thực hiệnphép chiếu phối cảnh

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); // thiết lập view
}

void keyboard(unsigned char key, int x, int y)

{
	///*switch (key)
	//{
	//case 'q':    day = (day + 10) % 360;
	//	glutPostRedisplay();
	//	break;
	//
	//case 'e':    year = (year + 10) % 360;
	//	glutPostRedisplay();
	//	break;
	//case 'r':    year = (year - 10) % 360;
	//	glutPostRedisplay();
	//	break;
	//default:    break;*/
	//
	//}
}
static bool rotate = false;

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);

	glutMainLoop();
	return 0;
}






