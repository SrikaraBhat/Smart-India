
#include "sri.h"


void keyboard(unsigned char key,int x,int y)
{
	static int k=0;
	k++;
	if(key=='n'||key=='N')
	{
		if(flagu==1)
		{
			PlaySound(TEXT("p12.wav"),NULL,SND_FILENAME|SND_ASYNC);
			createNewWindow();
		}
	}
}

void callwindow()
{
	createNewWindow2();
}


void mydisplay()
{

	glClearColor(0.0,0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,100,0,100);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(4);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glColor3f(0.0,1.0,0.0);
	glRasterPos2f(32.0,90.0);
	for(n=0;n<strlen(str1);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[n]);
	glutPostRedisplay();

glColor3f(0.0,1.0,0.0);
	glRasterPos2f(37.0,85.0);
	for(n=0;n<strlen(str2);n++)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[n]);
	glutPostRedisplay();

glColor3f(0.0,1.0,0.0);
	glRasterPos2f(40.0,5.0);
	for(n=0;n<strlen(str16);n++)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str16[n]);
	glutPostRedisplay();

glColor3f(1.0,0.0,1.0);
	glRasterPos2f(23.0,75.0);
	for(n=0;n<strlen(str3);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[n]);
	glutPostRedisplay();
		

glColor3f(0.0,1.0,1.0);
	glRasterPos2f(30.0,65.0);
	for(n=0;n<strlen(str4);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[n]);
	glutPostRedisplay();

glColor3f(1.0,0.0,1.0);
	glRasterPos2f(40.0,55.0);
	for(n=0;n<strlen(str5);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[n]);
	glutPostRedisplay();

glColor3f(1.0,0.0,0.0);
	glRasterPos2f(45.0,50.0);
	for(n=0;n<strlen(str6);n++)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str6[n]);
	glutPostRedisplay();

glColor3f(1.0,1.0,0.0);
	glRasterPos2f(40.0,45.0);
	for(n=0;n<strlen(str7);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[n]);
	glutPostRedisplay();
	
glColor3f(1.0,0.0,0.0);
	glRasterPos2f(10.0,25.0);
	for(n=0;n<strlen(str8);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[n]);
	glutPostRedisplay();

glColor3f(0.0,1.0,1.0);
	glRasterPos2f(10.0,20.0);
	for(n=0;n<strlen(str9);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[n]);
	glutPostRedisplay();
	

glColor3f(0.0,1.0,1.0);
	glRasterPos2f(10.0,15.0);
	for(n=0;n<strlen(str10);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[n]);
	glutPostRedisplay();
	

glColor3f(1.0,1.0,0.0);
	glRasterPos2f(10.0,10.0);
	for(n=0;n<strlen(str11);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[n]);
	glutPostRedisplay();

glColor3f(1.0,0.0,0.0);
	glRasterPos2f(70.0,25.0);
	for(n=0;n<strlen(str12);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[n]);
	glutPostRedisplay();

glColor3f(0.0,1.0,1.0);
	glRasterPos2f(70.0,20.0);
	for(n=0;n<strlen(str13);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[n]);
	glutPostRedisplay();
	

glColor3f(1.0,1.0,0.0);
	glRasterPos2f(70.0,15.0);
	for(n=0;n<strlen(str14);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[n]);
	glutPostRedisplay();

/*glColor3f(1.0,1.0,0.0);
	glRasterPos2f(70.0,10.0);
	for(n=0;n<strlen(str15);n++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[n]);
	glutPostRedisplay();*/
	glFlush();
}

void createNewWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	//glClear(GL_COLOR_BUFFER_BIT);
	glutInitWindowSize(1366,726);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(firstWindow);
	secondWindow=glutCreateWindow("Bull Cart");
	glutDisplayFunc(cart123);
	//cart123();
	initSecondWindow();
	glutKeyboardFunc(keyboard);
	
}


void createNewWindow2()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	//glClear(GL_COLOR_BUFFER_BIT);
	glutInitWindowSize(1366,726);
	glutInitWindowPosition(0,0);
	//glutDestroyWindow(secondWindow);
	third=glutCreateWindow("Village and Modi");
	//glutDestroyWindow(secondWindow);
	glutDisplayFunc(drawhouse123);
	initdrawhouse();
	glutKeyboardFunc(keyboard);	
}

void createNewWindow3()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	//glClear(GL_COLOR_BUFFER_BIT);
	glutInitWindowSize(1366,726);
	glutInitWindowPosition(0,0);
	//glutDestroyWindow(firstWindow);
	secondWindow=glutCreateWindow("Building");
	glutDisplayFunc(building);
	initthirdWindow();
	glutKeyboardFunc(keyboard);
	
}


void createNewWindow4()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1366,726);
	glutInitWindowPosition(0,0);
	secondWindow=glutCreateWindow("Satelite");
	PlaySound(TEXT("message.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutDisplayFunc(rocket);
	initforthwindow();
	glutKeyboardFunc(keyboard);
}


void rectb(float a,float b,float c,float d,float e,float f,float g,float h)
{
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();

}


void recty(float a,float b,float c,float d,float e,float f,float g,float h)
{
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
}


void building()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//PlaySound(TEXT("p13.wav"),NULL,SND_FILENAME|SND_ASYNC);
	//glClear(GL_COLOR_BUFFER_BIT);
	// first building(base)
	glClear(GL_COLOR_BUFFER_BIT);
	rectb(1,0,11,0,11,2,1,2);
	recty(3,1,4.5,1,4.5,1.5,3,1.5);
	recty(3,0.3,4.5,0.3,4.5,0.7,3,0.7);
	recty(8,1,9.5,1,9.5,1.5,8,1.5);
	recty(8,0.3,9.5,0.3,9.5,0.7,8,0.7);
	glFlush();
	Sleep(1000);

	rectb(11,0,14,0,14,2,11,2);
	recty(12,0.2,13.2,0.2,13.2,0.6,12,0.6);
	recty(12,0.9,13.2,0.9,13.2,1.3,12,1.3);
	glFlush();
	Sleep(1000);

	rectb(14,0,23,0,23,3.5,14,2);
	recty(15,0.5,16.5,0.5,16.5,1,15,1);
	recty(17.8,0.2,19.3,0.2,19.3,0.6,17.8,0.6);
	recty(17.8,0.9,19.3,0.9,19.3,1.3,17.8,1.3);
	recty(20.2,0.2,21.6,0.2,21.6,0.6,20.2,0.6);
	recty(20.2,0.9,21.6,0.9,21.6,1.3,20.2,1.3);
	recty(20.2,1.6,21.6,1.6,21.6,2.2,20.2,2.2);
	glFlush();
	Sleep(1000);

	//base complete
	
	rectb(1.2,2,4,2,4,5.9,1.4,6.1);
	recty(2,2.3,3.5,2.3,3.5,2.7,2,2.8);
	recty(2,3.2,3.5,3.1,3.5,3.6,2,3.7);
	recty(2,4,3.5,3.9,3.5,4.4,2,4.5);
	recty(2,5,3.5,4.9,3.5,5.4,2,5.5);
	
	rectb(4,2,4.7,2,4.8,5.6,4,5.9);
	recty(4.2,2.5,4.6,2.5,4.6,2.7,4.2,2.7);
	recty(4.2,3.2,4.6,3.2,4.6,3.4,4.2,3.4);
	recty(4.2,4,4.6,4,4.6,4.2,4.2,4.2);
	recty(4.2,4.8,4.6,4.8,4.6,5,4.2,5);
	
	glFlush();
	Sleep(1000);

	rectb(1.4,6.1,4,5.9,4.1,9.1,1.48,9.4);
	recty(2,6.5,3.5,6.4,3.5,6.9,2,7);
	recty(2,7.5,3.5,7.4,3.5,7.9,2,8);
	recty(2,8.5,3.5,8.4,3.5,8.9,2,9);

	rectb(4.8,5.6,4,5.9,4.1,9.1,4.89,8.9);
	recty(4.2,6.5,4.6,6.4,4.6,6.6,4.2,6.7);
	recty(4.2,7.3,4.6,7.2,4.6,7.4,4.2,7.5);
	recty(4.2,8.1,4.6,8,4.6,8.2,4.2,8.3);
	glFlush();
	Sleep(1000);

	rectb(1.48,9.4,4.1,9.1,4.2,11.7,1.6,11.8);
	recty(2,10,3.5,9.9,3.5,10.4,2,10.5);
	recty(2,11,3.5,10.9,3.5,11.4,2,11.5);
	

	rectb(4.1,9.1,4.89,8.9,5,11.5,4.2,11.7);
	recty(4.3,9.7,4.7,9.6,4.7,9.8,4.3,9.9);
	recty(4.3,10.6,4.7,10.5,4.7,10.7,4.3,10.8);

	glFlush();
	Sleep(1000);
	
	rectb(1.6,11.8,4.2,11.7,4.3,14.5,1.7,14.6);
	recty(2,12.5,3.5,12.4,3.5,12.9,2,13);
	recty(2,13.5,3.5,13.4,3.5,13.9,2,14);


	rectb(5,11.5,4.2,11.7,4.2,14.5,5,14);
	recty(4.3,12.5,4.7,12.4,4.7,12.6,4.3,12.7);
	recty(4.3,13.3,4.7,13.2,4.7,13.4,4.3,13.5);
	glFlush();
	Sleep(1000);
	
	// 2nd building
	rectb(4.7,2,7.6,2,7.7,5.5,4.8,5.6);
	
	recty(5.5,2.3,7,2.2,7,2.6,5.5,2.7);
	recty(5.5,3.3,7,3.2,7,3.6,5.5,3.7);
	recty(5.5,4.3,7,4.2,7,4.6,5.5,4.7);
	glFlush();	
	Sleep(1000);

	//shade
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(10.5,2);
	glVertex2f(10.8,2);
	glVertex2f(11,14);
	glEnd();

	rectb(7.6,2,10.5,2,10.6,5.3,7.7,5.5);
	recty(8.3,2.3,9.8,2.2,9.8,2.6,8.3,2.7);
	recty(8.3,3,9.8,2.9,9.8,3.3,8.3,3.4);
	recty(8.3,3.7,9.8,3.6,9.8,4,8.3,4.1);
	recty(8.3,4.4,9.8,4.3,9.8,4.7,8.3,4.8);
	//glFlush();
	Sleep(1000);
	
	
	rectb(7.7,5.5,10.6,5.3,10.8,8.4,7.8,8.7);
	recty(8.5,5.8,10,5.7,10,6.1,8.5,6.2);
	recty(8.5,6.8,10,6.7,10,7.1,8.5,7.2);
	recty(8.5,7.8,10,7.7,10,8.1,8.5,8.2);
	//glFlush();
	//Sleep(1000);

	rectb(7.8,8.7,10.8,8.4,10.9,11,8,11.4);
	recty(8.6,9.3,10.1,9.2,10.1,9.6,8.6,9.7);
	recty(8.6,10.3,10.1,10.2,10.1,10.6,8.6,10.7);
	//glFlush();
	Sleep(1000);

	
	//3rd building
	rectb(8,11.4,10.9,11,11,14,8.1,14.4);
	recty(8.7,12.2,10.2,12.1,10.2,12.5,8.7,12.6);
	recty(8.7,13.2,10.2,13.1,10.2,13.5,8.7,13.6);
	glFlush();
	Sleep(1000);
	
	//between 3rd and 4th
	rectb(14.2,2,15.6,2.3,15.2,5.1,14.1,4);
	recty(14.5,2.2,15.4,2.4,15.3,2.6,14.4,2.4);
	recty(14.4,2.8,15.3,3,15.2,3.2,14.3,3);
	recty(14.3,3.4,15.2,3.6,15.1,3.8,14.2,3.6);
	glFlush();
	Sleep(1000);

	rectb(15.6,2.3,17.1,2.5,16.5,5.2,15.2,5.1);
	recty(15.9,2.6,16.8,2.8,16.7,3,15.8,2.8);
	recty(15.8,3.2,16.8,3.4,16.7,3.6,15.7,3.4);
	recty(15.7,3.8,16.6,4,16.5,4.2,15.6,4);
	recty(15.6,4.3,16.5,4.5,16.4,4.7,15.5,4.5);
	glFlush();
	
	// 4th  one

	rectb(18.1,2.7,21.9,3.3,20.9,10.5,17.2,8.5);
	recty(18.6,3.1,21.4,3.7,21.3,4.1,18.5,3.5);
	recty(18.4,4.1,21.2,4.7,21.1,5.1,18.3,4.5);
	recty(18.2,5.1,21,5.7,20.9,6.1,18.1,5.5);
	recty(18,6.1,20.8,6.7,20.7,7.1,17.9,6.5);
	recty(18,7.1,20.8,7.7,20.7,8.1,17.9,7.5);
	recty(17.8,7.9,20.6,8.8,20.5,9.2,17.7,8.3);

	glFlush();
	Sleep(1000);

	rectb(20.9,10.5,20.2,15,17,13,17.6,8.7);
	recty(17.8,9.3,20.2,10.6,20.1,11,17.7,9.7);
	recty(17.8,10.3,20.2,11.6,20.1,12,17.7,10.7);
	recty(17.8,11.3,20.2,12.6,20.1,13,17.7,11.7);
	recty(17.8,12.3,20.2,13.6,20.1,14,17.7,12.7);
	glFlush();
	Sleep(1000);

	rectb(18.1,2.7,17.1,2.5,16.4,5.7,17.6,6.3);
	recty(17.3,2.8,18,3,17.9,3.2,17.2,3);
	recty(17.1,3.5,17.8,3.7,17.7,3.9,17,3.7);
	recty(16.9,4.2,17.6,4.4,17.5,4.6,16.8,4.4);
	recty(16.8,4.9,17.5,5.1,17.4,5.3,16.7,5.1);


	rectb(17.6,6.3,16.4,5.7,15.7,9.3,17.4,10);
	recty(16.6,6.1,17.5,6.5,17.4,6.7,16.5,6.3);
	recty(16.4,6.8,17.3,7.2,17.2,7.4,16.3,7);
	recty(16.2,7.5,17.1,7.9,17,8.1,16.1,7.7);


	rectb(17.6,8.7,17.4,10,15.7,9.3,16,8);
	recty(16.2,8.2,17.1,8.6,17,8.8,16.1,8.4);
	recty(16.1,8.8,17.1,9.2,17,9.4,16,9);
	glFlush();

	Sleep(5500);
	createNewWindow4();

}

void initdrawhouse(void)
{
	
	glClearColor(1.0,0.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,90,0,90);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(4);
}

void initSecondWindow(void)
{
	
	glClearColor(0.878,1.00,1.00,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,25,0,25);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(4);
}

void initthirdWindow()
{	
	glClearColor(0.0,0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,20,0,17);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(4);
}

void initforthwindow()
{
	
	glClearColor(0.0,0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,43,0,23);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(4);
}


void drawhouse123()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	drawhouse();
	glFlush();
}

void cart123()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	cart();
}

void cart()
{
	glPointSize(4);
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(25,0);
		glColor3f(0.373,0.620,0.627);
		glVertex2f(25,25);
		glColor3f(0.01,0.123,0.14);
		glVertex2f(0,25);
	glEnd();
	i+=0.01;
	//wheel
	if(i<0)
	{
		glColor3f(0.0,0.0,0.0);
	rect(32+i,34+m,32+i,34.2+m,33+i,34.2+m,33+i,34+m);
	rect(33+i,34+m,33+i,34.2+m,33.8+i,35+m,34+i,35+m);
	rect(34+i,35+m,33.8+i,35+m,33.8+i,36+m,34+i,36+m);
	rect(32+i,34+m,32+i,34.2+m,31.2+i,35+m,31+i,35+m);
	rect(31.2+i,35+m,31+i,35+m,31+i,36+m,31.2+i,36+m);
	rect(31.2+i,36+m,31+i,36+m,32+i,37+m,32+i,36.8+m);
	rect(32+i,37+m,33+i,37+m,33+i,36.8+m,32+i,36.8+m);
	rect(34+i,36+m,33.8+i,36+m,33+i,36.8+m,33+i,37+m);
	rect(32+i,35+m,33+i,35+m,33+i,36+m,32+i,36+m);
	rect(32.4+i,34.2+m,32.6+i,34.2+m,32.6+i,35+m,32.4+i,35+m);
	rect(33.8+i,35.4+m,33.8+i,35.6+m,33+i,35.6+m,33+i,35.4+m);
	rect(32.4+i,36+m,32.6+i,36+m,32.6+i,37+m,32.4+i,37+m);
	rect(32+i,35.4+m,32+i,35.6+m,31.2+i,35.6+m,31.2+i,35.4+m);
	//carrier
	glBegin(GL_LINE_LOOP);
		glVertex2f(29.6+i,35.6+m);
		glVertex2f(35+i,35.6+m);
		glVertex2f(34.5+i,39.5+m);
		glVertex2f(29.3+i,39.3+m);
	glEnd();
	//rect(29.6,35.6,35,35.6,34.5,39.5,29.3,39.3);
	glBegin(GL_LINE_LOOP);
		glVertex2f(36.2+i,38+m);
		glVertex2f(35.9+i,37.2+m);
		glVertex2f(35.6+i,37.2+m);
		glVertex2f(35.6+i,36+m);
		glVertex2f(35.5+i,35.6+m);
		glVertex2f(35.6+i,35.4+m);
		glVertex2f(35.6+i,35.7+m);
		glVertex2f(35.7+i,36+m);
		glVertex2f(36+i,37.4+m);
	glEnd();
	//bull
	glBegin(GL_LINE_STRIP);
		glVertex2f(41.5+i,37.7+m);
		glVertex2f(39.6+i,39.1+m);
		glVertex2f(39.2+i,39.1+m);
		glVertex2f(39.4+i,38.1+m);
		glVertex2f(37.1+i,38.6+m);
		glVertex2f(36.5+i,38.3+m);
		glVertex2f(36.2+i,38+m);
		glVertex2f(36.1+i,37.5+m);
		glVertex2f(36.2+i,36.3+m);

		glVertex2f(36+i,35.9+m);
		glVertex2f(36.2+i,34.5+m);
		glVertex2f(36.3+i,34.2+m);
		glVertex2f(36.2+i,34+m);
		glVertex2f(36.9+i,34.1+m);
		glVertex2f(36.6+i,34.5+m);
		glVertex2f(36.5+i,35.8+m);
		glVertex2f(36.9+i,36+m);
		glVertex2f(37.3+i,37+m);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(37.2+i,36.5+m);
		glVertex2f(37.2+i,36+m);
		glVertex2f(36.9+i,35.5+m);
		glVertex2f(37.3+i,34.6+m);
		glVertex2f(37.3+i,34.1+m);
		glVertex2f(38+i,34.4+m);
		glVertex2f(37.7+i,34.7+m);
		glVertex2f(37.3+i,35.5+m);
		glVertex2f(37.6+i,36+m);
		glVertex2f(39.6+i,36.5+m);
		glVertex2f(39.6+i,36+m);
		glVertex2f(39.6+i,35.3+m);
		glVertex2f(39.5+i,34.4+m);
		glVertex2f(39.4+i,34+m);
		glVertex2f(39.8+i,33.9+m);
		glVertex2f(39.8+i,34.2+m);
		glVertex2f(40.1+i,35.4+m);
		glVertex2f(40.3+i,36+m);
		glVertex2f(40.3+i,36.5+m);
		glVertex2f(40.1+i,37+m);
		glVertex2f(40.2+i,36+m);
		glVertex2f(40.4+i,36+m);
		glVertex2f(40.3+i,35.3+m);
		glVertex2f(40.6+i,34.3+m);
		glVertex2f(40.5+i,34+m);
		glVertex2f(41.1+i,34.2+m);
		glVertex2f(40.9+i,34.4+m);
		glVertex2f(40.6+i,35.3+m);
		glVertex2f(40.8+i,36+m);
		
		glVertex2f(41.9+i,36.8+m);
		glVertex2f(41.6+i,36.9+m);
		glVertex2f(41.3+i,37.4+m);
		glVertex2f(40.8+i,37.5+m);
		glVertex2f(40.5+i,37.9+m);
		glVertex2f(41.2+i,38.1+m);
		glVertex2f(41.5+i,37.8+m);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(41.9+i,36.8+m);
		glVertex2f(42.1+i,36.5+m);
		glVertex2f(42.3+i,36.2+m);
		glVertex2f(42.8+i,36.8+m);
		glVertex2f(42.7+i,36.7+m);
		glVertex2f(42.6+i,37.2+m);
		glVertex2f(42.7+i,37.8+m);
		glVertex2f(42.3+i,38.4+m);
		glVertex2f(41.6+i,38.1+m);
		glVertex2f(41.5+i,37.7+m);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(41.5+i,37.7+m);
		glVertex2f(41.3+i,37.5+m);
	glEnd();

	//kodu
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(41.5+i,37.7+m);
		glVertex2f(41.2+i,39.9+m);
		glVertex2f(42+i,38.2+m);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(42.3+i,38.4+m);
		glVertex2f(41.8+i,40.2+m);
		glVertex2f(42.1+i,38.2+m);
	glEnd();

	glBegin(GL_POINTS);
	glVertex2f(42+i,37.5+m);
	glEnd();

	rect(42.1+i,36.5+m,42.3+i,36.2+m,42.8+i,36.8+m,42.7+i,36.7+m);
	rect(30.6+i,39.4+m,31+i,39.4+m,31.4+i,35.7+m,31+i,35.7+m);
	rect(33+i,39.4+m,33.4+i,39.4+m,33.7+i,35.7+m,33.4+i,35.7+m);
	rect(28.5+i,36.9+m,28.5+i,36.7+m,37+i,36.7+m,37+i,36.9+m);
	rect(28.5+i,38.3+m,28.5+i,38.1+m,37.1+i,38.6+m,37.1+i,38.8+m);
	glutPostRedisplay();
	glFlush();
	}
	else
	{
		i=50;
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glColor3f(0,0.0,0.0);
		glVertex2f(25,0);
		glColor3f(0,0.0,1.0);
		glVertex2f(25,25);
		glColor3f(0,0.0,0.0);
		glVertex2f(0,25);
	glEnd();
	glFlush();
		//S
		glColor3f(1.0,0.0,0.0);
		rect(5,19,3,19,3,18.8,5,18.8);
		rect(3,19,3.2,19,3.2,17.5,3,17.5);
		rect(3,17.5,3,17.7,5,17.7,5,17.5);
		rect(5,17.7,4.8,17.7,4.8,15.8,5,15.8);
		rect(5,15.8,5,16,3,16,3,15.8);
		glFlush();
		Sleep(1000);


		//M
		glColor3f(0.0,1.0,1.0);
		rect(5.2,16,5.4,16,5.4,18.5,5.2,19);
		rect(5.2,19,5.4,18.5,6.3,17.3,6.3,17.5);
		rect(6.3,17.3,6.3,17.5,7.3,19,7.1,18.5);
		rect(7.1,16,7.3,16,7.3,19,7.1,18.5);
		glFlush();
		Sleep(1000);

		//A
		glColor3f(0,1,0);
		rect(7.5,16,7.7,16,8.5,18.7,8.5,19);
		rect(8.5,19,8.5,18.7,9.3,16,9.5,16);
		rect(8,17.5,8.1,17.4,8.9,17.4,9,17.5);
		glFlush();
		Sleep(1000);

		//R
		glColor3f(1,0.0,1.0);
		rect(9.8,16,10,16,10,19,9.8,19);
		rect(9.8,19,11.7,19,11.7,18.8,9.8,18.8);
		rect(11.7,19,11.5,19,11.5,17.5,11.7,17.5);
		rect(11.7,17.5,11.7,17.7,9.8,17.7,9.8,17.5);
		rect(9.8,17.5,9.8,17.3,11.5,16,11.7,16);
		glFlush();
		Sleep(1000);

		//T
		glColor3f(0.824,0.412,0.118);
		rect(12,19,12,18.8,14,18.8,14,19);
		rect(12.9,19,13.1,19,13.1,16,12.9,16);
		glFlush();
		//glutPostRedisplay();
		//glutDisplayFunc(drawhouse);	
		Sleep(1000);
		glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(10,11);
		glVertex2f(15,11);
		glVertex2f(15,12);
		glVertex2f(10,12);
	glEnd();
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(10,12);
		glVertex2f(15,12);
		glVertex2f(15,13);
		glVertex2f(10,13);
	glEnd();
		glColor3f(1.0,1.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(10,13);
		glVertex2f(15,13);
		glVertex2f(15,14);
		glVertex2f(10,14);
	glEnd();

		// ashoka chakra

		glBegin(GL_LINE_LOOP);
		glColor3f(0.0,0.0,1.0);
		glVertex2f(12.3,12);
		glVertex2f(12.5,12);
		glVertex2f(12.6,12);
		glVertex2f(12.8,12.1);
		glVertex2f(13,12.3);
		glVertex2f(13,12.5);
		glVertex2f(13,12.6);
		glVertex2f(12.8,12.85);
		glVertex2f(12.7,13);
		glVertex2f(12.5,13);
		glVertex2f(12.3,13);
		glVertex2f(12.2,12.85);
		glVertex2f(12,12.6);
		glVertex2f(12,12.5);
		glVertex2f(12,12.3);
		glVertex2f(12.2,12.1);
	glEnd();
	

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(13,12.5);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.5,12);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12,12.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.5,13);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(13,12.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.8,12.1);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.8,12.85);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.2,12.85);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.2,12.1);
	glEnd();

	//sensitive

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.9,12.2);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.6,12);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(13,12.3);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(13,12.6);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.6,13);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.3,13);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12,12.6);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12,12.3);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(12.5,12.5);
		glVertex2f(12.3,12);
	glEnd();
		glFlush();
	Sleep(1000);
		//india
		//I
		glColor3f(0.0,0.0,1.0);
		rect(9.7,4.7,10.5,4.7,10.5,5,9.7,5);
		rect(10,5,10.1,5,10.1,9,10,9);
		rect(9.7,9,10.5,9,10.5,8.7,9.7,8.7);
		glFlush();
		
		//N
		glColor3f(0.678,1.00,0.184);
		rect(10.8,4.7,11,4.7,11,9,10.8,9);
		rect(11,8,11,9,11.7,4.7,11.9,4.7);
		rect(11.7,4.7,11.9,4.7,11.9,8.9,11.7,8.9);
		glFlush();

		//D

		glColor3f(1.0,0.0,1.0);
		rect(12.1,4.7,12.3,4.7,12.3,8.9,12.1,8.9);
		rect(12.3,8.7,12.3,8.9,13.2,8.9,13.2,8.7);
		rect(13.2,8.7,13,8.7,13,4.7,13.2,4.7);
		rect(13.2,4.5,13.2,4.7,12.4,4.7,12.4,4.5);
		glFlush();

		//I
		glColor3f(0.133,0.545,0.196);
		rect(13.4,4.7,14.2,4.7,14.2,5,13.4,5);
		rect(13.7,5,13.9,5,13.9,9,13.7,9);
		rect(13.4,9,14.2,9,14.2,8.7,13.4,8.7);
		glFlush();
		//A
		glColor3f(0.855,0.647,0.125);
		rect(14.4,4.7,14.6,4.7,14.6,8.9,14.4,8.9);
		rect(14.6,8.9,14.6,8.7,15.2,8.7,15.2,8.9);
		rect(15.2,4.7,15.4,4.7,15.4,8.9,15.2,8.9);
		rect(14.6,7,14.6,7.2,15.2,7,15.2,7.2);
		glFlush(); 
		Sleep(1000);
		callwindow();
 }	
 //callwindow();
}

void rect(float l,float m,float n,float o,float p,float q,float r,float s)
{
	glBegin(GL_POLYGON);	
	//glColor3f(0.0,0.0,0.0);
		glVertex2f(l,m);
		glVertex2f(n,o);
		glVertex2f(p,q);
		glVertex2f(r,s);
	glEnd();
}

void myinit(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,40,0,40);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(4);
}
 

void tris(float a,float b,float c,float d,float e,float f)
{
	//glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
	glEnd();
}

void rects(float a,float b,float c,float d,float e,float f,float g,float h)
{
	//glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
}

void school()
{
	glColor3f(1.0,0.498,0.314);
	rects(0,30,9,29.9,15,22.5,0,17.5);
	glColor3f(1.0,0.498,0.314);
	tris(9.1,30.1,16,30.2,15,22.5);
	glColor3f(0.0,0.0,0.0);
	tris(9,29.9,9.1,30.1,15,22.5);
	tris(16,30.2,16.1,30.4,15,22.5);
	glColor3f(1.0,0.498,0.314);
	rects(16.1,30.4,15,22.5,32.5,22.5,32.5,31.2);
	glColor3f(1.0,0.498,0.314);
	rects(30,22.5,32.5,22.5,33.5,31.5,32.5,31.2);
	glColor3f(1.0,0.498,0.314);
	tris(33.5,31.5,32.5,30,34,30);

	//orange
	glColor3f(1.0,0.271,0.000);
	rects(32.5,25,34,25,34,30,32.5,30);
	glColor3f(1.0,1.0,1.0);
	rects(32.5,25,34,25,34,19,32.5,19);
	glColor3f(0.0,1.0,0.0);
	rects(34,19,34,12.5,32.5,12.5,32.5,19);
	//steps
	glColor3f(1.0,0.498,0.314);
	rects(0,2.5,15,15,15,13,0,1);
	glColor3f(1.0,0.498,0.314);
	rects(15,15,15,13,32.5,13,32.5,15);
	glColor3f(1.0,0.498,0.314);
	rects(0,1,2.5,0,15,12.5,15,13);
	glColor3f(1.0,0.498,0.314);
	rects(15,13,32.5,13,32.5,12.5,15,12.5);

	//wall
	glColor3f(0.0,0.0,1.0);
	rects(0,2.5,0,11.2,15,17,15,15);
	glColor3f(0.0,0.0,1.0);
	rects(15,17,15,15,32.5,15,32.5,17.5);
	glColor3f(0.902,0.902,0.980);
	rects(0,11.2,0,17.5,15,22.5,15,17);
	glColor3f(0.902,0.902,0.980);
	rects(15,17,32.5,17.5,32.5,22.5,15,22.5);

	//piller1

	glColor3f(0.0,1.0,0.0);
	rects(17.5,15,18.5,15,18.5,17.5,17.5,17.5);
	glColor3f(1.0,1.0,1.0);
	rects(17.5,17.5,18.5,17.5,18.5,20,17.5,20);
	glColor3f(1.0,0.271,0.000);
	rects(18.5,20,17.5,20,17.5,22.5,18.5,22.5);

	//piller2
	glTranslatef(3.5,0,0);
	glColor3f(0.0,1.0,0.0);
	rects(17.5,15,18.5,15,18.5,17.5,17.5,17.5);
	glColor3f(1.0,1.0,1.0);
	rects(17.5,17.5,18.5,17.5,18.5,20,17.5,20);
	glColor3f(1.0,0.271,0.000);
	rects(18.5,20,17.5,20,17.5,22.5,18.5,22.5);
	glTranslatef(-3.5,0,0);

	//piller3
	glTranslatef(7.5,0,0);
	glColor3f(0.0,1.0,0.0);
	rects(17.5,15,18.5,15,18.5,17.5,17.5,17.5);
	glColor3f(1.0,1.0,1.0);
	rects(17.5,17.5,18.5,17.5,18.5,20,17.5,20);
	glColor3f(1.0,0.271,0.000);
	rects(18.5,20,17.5,20,17.5,22.5,18.5,22.5);
	glTranslatef(-7.5,0,0);

	//piller4
	glTranslatef(11.5,0,0);
	glColor3f(0.0,1.0,0.0);
	rects(17.5,15,18.5,15,18.5,17.5,17.5,17.5);
	glColor3f(1.0,1.0,1.0);
	rects(17.5,17.5,18.5,17.5,18.5,20,17.5,20);
	glColor3f(1.0,0.271,0.000);
	rects(18.5,20,17.5,20,17.5,22.5,18.5,22.5);
	glTranslatef(-11.5,0,0);

	//piller5
	glTranslatef(-2.5,0,0);
	glColor3f(0.0,1.0,0.0);
	rects(17.5,15,18.5,15,18.5,17.5,17.5,17.5);
	glColor3f(1.0,1.0,1.0);
	rects(17.5,17.5,18.5,17.5,18.5,20,17.5,20);
	glColor3f(1.0,0.271,0.000);
	rects(18.5,20,17.5,20,17.5,22.5,18.5,22.5);
	glTranslatef(2.5,0,0);




	//piller6
	glColor3f(0.0,1.0,0.0);
	rects(15,15,14.6,14.6,14.6,17,15,17.5);
	glColor3f(1.0,1.0,1.0);
	rects(14.6,17,15,17.5,15,20,14.6,19.5);
	glColor3f(1.0,0.271,0.000);
	rects(15,20,14.6,19.5,14.6,22.3,15,22.5);

	//piller7
	glColor3f(0.0,1.0,0.0);
	rects(12.5,12.9,13,13.4,13,16.2,12.5,16);
	glColor3f(1.0,1.0,1.0);
	rects(13,16.2,12.5,16,12.5,19,13,19.5);
	glColor3f(1.0,0.271,0.000);
	rects(12.5,19,13,19.5,13,21.9,12.5,21.6);

	//piller8
	glColor3f(0.0,1.0,0.0);
	rects(11.5,12,11,11.5,11,15,11.5,15.5);
	glColor3f(1.0,1.0,1.0);
	rects(11,15,11.5,15.5,11.5,18,11,17.5);
	glColor3f(1.0,0.271,0.000);
	rects(11.5,18,11,17.5,11,21.25,11.5,21.5);

	//piller9
	glColor3f(0.0,1.0,0.0);
	rects(3.2,4.9,4.2,6.1,4.2,10,3.2,9.5);
	glColor3f(1.0,1.0,1.0);
	rects(4.2,10,3.2,9.5,3.2,13.5,4.2,14);
	glColor3f(1.0,0.271,0.000);
	rects(3.2,13.5,4.2,14,4.2,19,3.2,18.5);
	
	glColor3f(0.0,1.0,0.0);
	rects(7.5,8.8,8.3,9.3,8.3,12.5,7.5,12);
	glColor3f(1.0,1.0,1.0);
	rects(8.3,12.5,7.5,12,7.5,16.5,8.3,17);
	glColor3f(1.0,0.271,0.000);
	rects(7.5,16.5,8.3,17,8.3,20.2,7.5,20);
	
	//hemchu
	glLineWidth(1.0);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(0,25);
		glVertex2f(4.4,19);	
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(2.5,29.4);
		glVertex2f(9.2,21);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(6.2,29.6);
		glVertex2f(13.1,21);	
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(0,26);
		glVertex2f(10,29.4);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0,22.5);
		glVertex2f(11.5,26);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0,19);
		glVertex2f(14.3,24);	
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(11.5,30.5);
		glVertex2f(14.5,24.2);
		glVertex2f(14.4,30.2);	
		
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(12.5,30);
		glVertex2f(14,27);
		glVertex2f(14,30.2);	
		
	glEnd();

	/*glBegin(GL_LINES);
		glVertex2f(10,28);
		glVertex2f(15.5,28);	
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(11,27);
		glVertex2f(16,27);	
	glEnd();*/

	glBegin(GL_LINES);
		glVertex2f(18,30.2);
		glVertex2f(17,22.5);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(21.2,30.8);
		glVertex2f(20,22.5);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(25.2,22.5);
		glVertex2f(26.2,30.4);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(29.5,31.2);
		glVertex2f(28,22.5);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(22.5,22.5);
		glVertex2f(23.8,30.4);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(15.6,25);
		glVertex2f(32.5,25);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(32.5,27.5);
		glVertex2f(16,27.5);	
	glEnd();

	glFlush();
}

void drawhouse()
{
	
	glClearColor(0.0,1.0,1.0,1.0);
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//house

	glBegin(GL_POLYGON);
	glColor3f(1.0,0.498,0.314);
		glVertex2f(0,77);
		//glColor3f();
		glVertex2f(90,77);
		glColor3f(0.0,0.749,1.0);
		glVertex2f(90,90);
		glColor3f(1.0,0.498,0.314);
		glVertex2f(0,90);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.87,0.757,1.0);
		glVertex2f(9,75);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(26,75);
		glColor3f(0.87,0.757,1.0);
		glVertex2f(17.4,80);
		//glVertex2f(10,75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.87,0.757,1.0);
		glVertex2f(9,60);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(26,60);
		glColor3f(0.87,0.757,1.0);
		glVertex2f(26,57);
		glVertex2f(9,57);
		//glVertex2f(10,75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.87,0.757,1.0);
		glVertex2f(10,60);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(25,60);
		glColor3f(0.87,0.757,1.0);
		glVertex2f(25,75);
		glVertex2f(10,75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.4745,0.4745);
		glVertex2f(15,60);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(20,60);
		glVertex2f(20,67);
		glVertex2f(15,67);
	glEnd();
	drawroad(0);	
	gadde();
	betta();
	school();
	glTranslatef(10,0,0);
	drawflag();
	glTranslatef(-10,0,0);
	tree();
	glTranslatef(5,0,0);
	tree();
	glTranslatef(-5,0,0);
	glTranslatef(10,5,0);
	tree();
	glTranslatef(-10,-5,0);
	glTranslatef(-50,10,0);
	tree();
	glTranslatef(50,-10,0);
	glTranslatef(-57,14,0);
	tree();
	glTranslatef(57,-14,0);
	glFlush();

	Sleep(4000);
	modi();
}

void rectd(float a,float b,float c,float d,float e,float f,float g,float h)
{
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
	glColor3f(0.196,0.804,0.196);
		glVertex2f(c,d);
	glColor3f(1.0,0.894,0.710);
		glVertex2f(e,f);
	glColor3f(0.133,0.545,0.341);
		glVertex2f(g,h);
	glEnd();
}


void drawroad(int a)
{
	if(a==1)
	{
		glColor3f(0.412,0.412,0.412);
		//glColor3f(0.0,0.0,0.0);
	}
	else
	{
		//stone();
		//glFlush();
		glColor3f(0.388,0.250,0.098);
		//stone();
	}

	//PlaySound(TEXT("a.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glBegin(GL_POLYGON);
		glVertex2f(0,45);
		glVertex2f(25,33);
		glVertex2f(90,33);
		if(a==0)
		glColor3f(1.0,0.647,0.00);
		glVertex2f(90,47);
		glVertex2f(25,47);
		glVertex2f(0,60);
	glEnd();
	if(a==1)
	{
		PlaySound(TEXT("p13.wav"),NULL,SND_FILENAME|SND_ASYNC);

		glColor3f(1.0,1.0,1.0);
		rect(0,52,0,53,8,48.5,7.5,48);
		rect(15,44,15,45,25,40,25,39);
		rect(35,39,35,38,45,38,45,39);
		rect(55,39,55,38,65,38,65,39);
		rect(75,39,75,38,85,38,85,39);
		glFlush();
		//tree1();
		Sleep(3000);
		kamba();
		//sabka_saath();
		Sleep(4000);
		createNewWindow3();
	}
	/*else
	{
		stone();
	}*/

	
}

void stone()
{
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);	
		glVertex2f(84,35);
	glColor3f(0.502,0.502,0.502);
		glVertex2f(85,34);
	glColor3f(0.827,0.827,0.827);
		glVertex2f(86,36);
	glColor3f(0.502,0.502,0.502);
		glVertex2f(85,36.5);
	glColor3f(0.467,0.533,0.600);
		glVertex2f(84,37);
	glEnd();
}

void gadde()
{
	glColor3f(0.741,0.718,0.420);
	rect(90,47,90,77,0,77,25,47);
	rect(0,60,25,47,25,77,0,77);
	rect(25,0,25,33,90,33,90,0);
	rect(0,0,25,0,25,33,0,45);

	rectd(0,63,25,63,0,75,-5,70);
	rectd(25,50,5,60,30,60,50,50);
	rectd(55,50,77,50,57.5,60,35,60);
	rectd(83,50,90,50,90,60,64,60);
	rectd(90,61,90,77,57,77,73,70);
	rectd(58,63,83,63,54,77,30,77);
	rectd(30,63,54,63,25,77,0,77);
	glFlush();
	//plant
	/*int k=0;
	glTranslatef(-25,-9,0);
	for(int i=0;i<7;i++)
	{
		//glTranslatef(3,-0.5,0);
		for(int j=0;j<10;j++)
		{
			int l=j*2;
		
			
			glBegin(GL_POLYGON);
				glColor3f(0.0,1.0,0.0);
				glVertex2f(36.8+l,67-k);
				glVertex2f(37.1+l,67-k);
				glVertex2f(37.3+l,68-k);
				glVertex2f(37+l,68-k);
			glEnd();
			glBegin(GL_LINE_STRIP);
				glColor3f(0.0,1.0,0.0);
				glVertex2f(37+l,68-k);
				glVertex2f(36.6+l,68.2-k);
				glVertex2f(36.5+l,68.5-k);
				glVertex2f(36.7+l,68.4-k);
				glVertex2f(37.2+l,68.3-k);
				glVertex2f(37.4+l,68.3-k);
				glVertex2f(37.45+l,68.4-k);
				glVertex2f(37.5+l,68.2-k);				
				glVertex2f(37.3+l,68-k);				
				glVertex2f(37+l,68-k);
			glEnd();
			
		}
		k+=2;
	}
	glTranslatef(25,9,0);*/
	//Sleep(2000);
}

void drawflag()
{
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(7,4);
		glVertex2f(15,4);
		glVertex2f(15,6);
		glVertex2f(7,6);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(8,6);
		glVertex2f(14,6);
		glVertex2f(14,8);
		glVertex2f(8,8);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(10.5,8);
		glVertex2f(11,8);
		glVertex2f(11,30);
		glVertex2f(10.5,30);
	glEnd();
	


	glBegin(GL_POLYGON);
	glColor3f(0.545,0.271,0.075);
		glVertex2f(7,4);
		glVertex2f(15,4);
		glVertex2f(15,6);
		glVertex2f(7,6);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.545,0.271,0.075);
		glVertex2f(8,6);
		glVertex2f(14,6);
		glVertex2f(14,8);
		glVertex2f(8,8);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545,0.271,0.075);
		glVertex2f(10.5,8);
		glVertex2f(11,8);
		glVertex2f(11,30);
		glVertex2f(10.5,30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(11,24);
		glVertex2f(16,24);
		glVertex2f(16,26);
		glVertex2f(11,26);
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(11,26);
		glVertex2f(11,28);
		glVertex2f(16,28);
		glVertex2f(16,26);
	glEnd();
	glColor3f(0,0,1);
	glBegin(GL_LINE_LOOP);
		glVertex2f(13.2,27.9);
		glVertex2f(13.8,27.9);
		glVertex2f(14,27.5);
		glVertex2f(14,26.6);
		glVertex2f(13.8,26.1);
		glVertex2f(13.2,26.1);
		glVertex2f(13,26.6);
		glVertex2f(13,27.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13.2,27.9);
	glEnd();
		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13.5,27.9);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13.8,27.9);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(14,27.5);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(14,27);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(14,26.6);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13.8,26.1);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13.5,26.1);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13.2,26.1);
	glEnd();
		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13,26.6);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13,27);
	glEnd();

		glBegin(GL_LINES);
		glVertex2f(13.5,27);
		glVertex2f(13,27.5);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0,0.647,0.0);
		glVertex2f(11,28);
		glVertex2f(11,30);
		glVertex2f(16,30);
		glVertex2f(16,28);
	glEnd();
	//sabka_saath();
}

void betta()
{
	glBegin(GL_POLYGON);	
	glColor3f(0.0,1.0,0.0);
		glVertex2f(25,77);
		glVertex2f(34,84);
	glColor3f(0.678,1.0,0.184);
		glVertex2f(35,84);
		glVertex2f(45,77);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(43,77);
		glVertex2f(54,84);
	glColor3f(0.678,1.0,0.184);
		glVertex2f(55,84);
		glVertex2f(65,77);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(64,77);
		glVertex2f(74,84);
	glColor3f(0.678,1.0,0.184);
		glVertex2f(75,84);
		glVertex2f(85,77);
	glEnd();
	cart1();
}

void cart1()
{
	i=0.0;
	glPushMatrix();

	//wheel
	if(i<90)
	{
		glColor3f(0.0,0.0,0.0);
	rect(32+i,34,32+i,34.2,33+i,34.2,33+i,34);
	rect(33+i,34,33+i,34.2,33.8+i,35,34+i,35);
	rect(34+i,35,33.8+i,35,33.8+i,36,34+i,36);
	rect(32+i,34,32+i,34.2,31.2+i,35,31+i,35);
	rect(31.2+i,35,31+i,35,31+i,36,31.2+i,36);
	rect(31.2+i,36,31+i,36,32+i,37,32+i,36.8);
	rect(32+i,37,33+i,37,33+i,36.8,32+i,36.8);
	rect(34+i,36,33.8+i,36,33+i,36.8,33+i,37);
	rect(32+i,35,33+i,35,33+i,36,32+i,36);
	rect(32.4+i,34.2,32.6+i,34.2,32.6+i,35,32.4+i,35);
	rect(33.8+i,35.4,33.8+i,35.6,33+i,35.6,33+i,35.4);
	rect(32.4+i,36,32.6+i,36,32.6+i,37,32.4+i,37);
	rect(32+i,35.4,32+i,35.6,31.2+i,35.6,31.2+i,35.4);
	//carrier
	glBegin(GL_LINE_LOOP);
		glVertex2f(29.6+i,35.6);
		glVertex2f(35+i,35.6);
		glVertex2f(34.5+i,39.5);
		glVertex2f(29.3+i,39.3);
	glEnd();
	//rect(29.6,35.6,35,35.6,34.5,39.5,29.3,39.3);
	glBegin(GL_LINE_LOOP);
		glVertex2f(36.2+i,38);
		glVertex2f(35.9+i,37.2);
		glVertex2f(35.6+i,37.2);
		glVertex2f(35.6+i,36);
		glVertex2f(35.5+i,35.6);
		glVertex2f(35.6+i,35.4);
		glVertex2f(35.6+i,35.7);
		glVertex2f(35.7+i,36);
		glVertex2f(36+i,37.4);
	glEnd();
	//bull
	glBegin(GL_LINE_STRIP);
		glVertex2f(41.5+i,37.7);
		glVertex2f(39.6+i,39.1);
		glVertex2f(39.2+i,39.1);
		glVertex2f(39.4+i,38.1);
		glVertex2f(37.1+i,38.6);
		glVertex2f(36.5+i,38.3);
		glVertex2f(36.2+i,38);
		glVertex2f(36.1+i,37.5);
		glVertex2f(36.2+i,36.3);

		glVertex2f(36+i,35.9);
		glVertex2f(36.2+i,34.5);
		glVertex2f(36.3+i,34.2);
		glVertex2f(36.2+i,34);
		glVertex2f(36.9+i,34.1);
		glVertex2f(36.6+i,34.5);
		glVertex2f(36.5+i,35.8);
		glVertex2f(36.9+i,36);
		glVertex2f(37.3+i,37);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(37.2+i,36.5);
		glVertex2f(37.2+i,36);
		glVertex2f(36.9+i,35.5);
		glVertex2f(37.3+i,34.6);
		glVertex2f(37.3+i,34.1);
		glVertex2f(38+i,34.4);
		glVertex2f(37.7+i,34.7);
		glVertex2f(37.3+i,35.5);
		glVertex2f(37.6+i,36);
		glVertex2f(39.6+i,36.5);
		glVertex2f(39.6+i,36);
		glVertex2f(39.6+i,35.3);
		glVertex2f(39.5+i,34.4);
		glVertex2f(39.4+i,34);
		glVertex2f(39.8+i,33.9);
		glVertex2f(39.8+i,34.2);
		glVertex2f(40.1+i,35.4);
		glVertex2f(40.3+i,36);
		glVertex2f(40.3+i,36.5);
		glVertex2f(40.1+i,37);
		glVertex2f(40.2+i,36);
		glVertex2f(40.4+i,36);
		glVertex2f(40.3+i,35.3);
		glVertex2f(40.6+i,34.3);
		glVertex2f(40.5+i,34);
		glVertex2f(41.1+i,34.2);
		glVertex2f(40.9+i,34.4);
		glVertex2f(40.6+i,35.3);
		glVertex2f(40.8+i,36);
		
		glVertex2f(41.9+i,36.8);
		glVertex2f(41.6+i,36.9);
		glVertex2f(41.3+i,37.4);
		glVertex2f(40.8+i,37.5);
		glVertex2f(40.5+i,37.9);
		glVertex2f(41.2+i,38.1);
		glVertex2f(41.5+i,37.8);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(41.9+i,36.8);
		glVertex2f(42.1+i,36.5);
		glVertex2f(42.3+i,36.2);
		glVertex2f(42.8+i,36.8);
		glVertex2f(42.7+i,36.7);
		glVertex2f(42.6+i,37.2);
		glVertex2f(42.7+i,37.8);
		glVertex2f(42.3+i,38.4);
		glVertex2f(41.6+i,38.1);
		glVertex2f(41.5+i,37.7);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(41.5+i,37.7);
		glVertex2f(41.3+i,37.5);
	glEnd();

	//kodu
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(41.5+i,37.7);
		glVertex2f(41.2+i,39.9);
		glVertex2f(42+i,38.2);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(42.3+i,38.4);
		glVertex2f(41.8+i,40.2);
		glVertex2f(42.1+i,38.2);
	glEnd();
	/*glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(41.9,37.4);
		glVertex2f(42.2,37.4);
		glVertex2f(41.8,37.6);
	glEnd();****/
	glBegin(GL_POINTS);
	

	glColor3f(0.0,0.0,0.0);
		glVertex2f(42+i,37.5);
		glEnd();

	rect(42.1+i,36.5,42.3+i,36.2,42.8+i,36.8,42.7+i,36.7);
	rect(30.6+i,39.4,31+i,39.4,31.4+i,35.7,31+i,35.7);
	rect(33+i,39.4,33.4+i,39.4,33.7+i,35.7,33.4+i,35.7);
	rect(28.5+i,36.9,28.5+i,36.7,37+i,36.7,37+i,36.9);
	rect(28.5+i,38.3,28.5+i,38.1,37.1+i,38.6,37.1+i,38.8);
	//glFlush();
	//glutPostRedisplay();
	glPopMatrix();
	//glFlush();
	
	}
	
	//glutPostRedisplay();
		//drawflag();
		//tree();
		//drawhouse();
		//glFlush();
	
}

void tree()
{
	
	
	glColor3f(1.0,0.8,0.0);
	rect(74,50,79,50,77.4,52,75,52);
	rect(75,52,77.4,52,77,59,75,59);
	rect(75,59,77,59,77,60.2,75,60.2);


	//glColor3f(0.68,0.133,0.133);
	rect(75,60.2,75.2,60.4,75,62.2,74.6,62.2);
	rect(75.2,60.4,75.8,60.2,77.2,60.1,76.1,61.8);
	rect(77.1,60.1,76.1,61.8,77,62,78,61);
	rect(78,61,77,62,78.4,62,78.2,63);
	rect(76.1,61.8,77,62,77,64,76.8,64);
	//rect(81,57,81,58,83,56.5,82.8,57.1);
	
	glBegin(GL_LINE_STRIP);
		glVertex2f(73,65);
		glVertex2f(72.5,59.2);
		glVertex2f(71,58);
		glVertex2f(70,60.2);
		glVertex2f(68,59.2);
		glVertex2f(68,62);
		glVertex2f(68.2,63);
		glVertex2f(67,66.2);
		glVertex2f(69,74);
		glVertex2f(71,75.2);
		glVertex2f(71.8,74);
		glVertex2f(74,77);
		glVertex2f(77,77);
		glVertex2f(80,75);
		glVertex2f(82,72);
		glVertex2f(83,65);
		glVertex2f(81,58);
		glVertex2f(80,59);
		
		
		glVertex2f(79,65);
		glVertex2f(77,66);
		// glVertex2f(81,58);
		// glVertex2f(80,59);
		
		
	glEnd();
	glFlush();
	//glTranslatef(10,0,0);



	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(73,65);
		glVertex2f(72.5,59.2);
		glVertex2f(71,58);
		glColor3f(0.0,1.0,0.0);
		glVertex2f(70,60.2);
		glVertex2f(68,59.2);
		glVertex2f(68,62);
	glColor3f(0.0,0.392,0.0);
		glVertex2f(68.2,63);
		glVertex2f(67,66.2);
		glVertex2f(69,74);
	//glColor3f(0.0,1.0,0.0);
		glVertex2f(71,75.2);
		glVertex2f(71.8,74);
		glVertex2f(74,77);
		glVertex2f(77,77);
		glVertex2f(80,75);
		glVertex2f(82,72);
		glVertex2f(83,65);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(81,58);
	//glColor3f(0.0,0.392,0.0);
		glVertex2f(80,59);
		
		
		glVertex2f(79,65);
		glVertex2f(77,66);
		// glVertex2f(81,58);
		// glVertex2f(80,59);
		
		
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(72,66);
	
	glColor3f(0.0,0.392,0.0);
		glVertex2f(72.2,60);
	//	glColor3f(0.0,1.0,0.0);
		glVertex2f(79,66);
	glEnd();


	//extra shade
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(73,65);
	glColor3f(0.0,0.392,0.0);
		glVertex2f(72.5,59.2);
		glVertex2f(71,58);
		//glColor3f(0.0,1.0,0.0);
		glVertex2f(70,60.2);
		glVertex2f(68,59.2);
		glVertex2f(68,62);
		glVertex2f(68.2,63);

	glEnd();

	/*glBegin(GL_POLYGON);
	glColor3f(0.133,0.454,0.341);
		glVertex2f(73,63);
		glColor3f(0.235,0.702,0.443);
		glVertex2f(77,65);
		glColor3f(0.180,0.545,0.341);
		glVertex2f(83,63);
	glEnd();*/
	//tree1();
	//tree2();
	//Sleep(3000);
	//modi();
	
}

void rect1(float l,float m,float n,float o,float p,float q,float r,float s,int t)
{
	if(t==1)
	{
		glColor3f(0.627,0.322,0.176);
		
	}
	else if(t==2)
	{
		glColor3f(0.0,0.0,0.8);
	}
	else if(t==3)
	{
		glColor3f(1.0,0.871,0.678);
	}
	else if(t==4)
	{
		glColor3f(0.961,1,0.980);
	}
	else if(t==5)
	{
		glColor3f(0.412,0.412,0.412);
	}
	else
	{
		glColor3f(0.0,0.0,0.0);
	}
	glBegin(GL_POLYGON);	
		glVertex2f(l,m);
		glVertex2f(n,o);
		glVertex2f(p,q);
		glVertex2f(r,s);
	glEnd();
	glBegin(GL_LINE_LOOP);	
	glColor3f(0.0,0.0,0.0);
		glVertex2f(l,m);
		glVertex2f(n,o);
		glVertex2f(p,q);
		glVertex2f(r,s);
	glEnd();

}

void modi()
{
	PlaySound(TEXT("modi12.wav"),NULL,SND_FILENAME|SND_ASYNC);
	// dias
	rect1(40,0,39.2,9.0,54,9,53,0,1);
	rect1(40,0,39,0,38,13.2,39.2,9,1);
	rect1(54,0,53,0,54,9,55.3,13.2,1);
	rect1(54,9,39.2,9,38,13.2,55.3,13.2,1);
	// modi
	rect1(55.3,13.2,54,13.2,53.8,16.8,54.2,16.2,2);
	rect1(50,13.2,54,13.2,53.8,16.8,51.1,17,2);
	rect1(47,13.2,48,13.2,48,16,46,16.9,4);
	rect1(48,13.2,50,13.2,51.1,17,48,16,4);
	rect1(47,13.2,41,13.2,41,15.8,46,16.9,2);
	rect1(39,13.2,41,13.2,41,15.8,38,15.8,2);
	rect1(38,15.8,41,15.8,42,17,39.2,16.8,2);
	rect1(51.1,17,51,19,48,16.9,48,16,3);
	rect1(48,16,48,16.9,46,16.9,46,16.8,3);
	// face 
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(44.2,26.2);
		glVertex2f(44.3,27);
		glVertex2f(47.8,28.2);
		glVertex2f(50.8,28);
		glVertex2f(52.2,27);
		glVertex2f(52.1,23);
		glVertex2f(52.2,22.8);
		glVertex2f(52.2,21.2);
		glVertex2f(52.1,21);
		glVertex2f(51,19);
		glVertex2f(48,16.9);
		glVertex2f(46,16.9);
		glVertex2f(44,20);
		glVertex2f(43.8,23);
		glVertex2f(44.2,26.2);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.871,0.678);
		glVertex2f(44.2,26.2);
		glVertex2f(44.3,27);
		glVertex2f(47.8,28.2);
		glVertex2f(50.8,28);
		glVertex2f(52.2,27);
		glVertex2f(52.1,23);
		glVertex2f(52.2,22.8);
		glVertex2f(52.2,21.2);
		glVertex2f(52.1,21);
		glVertex2f(51,19);
		glVertex2f(48,16.9);
		glVertex2f(46,16.9);
		glVertex2f(44,20);
		glVertex2f(43.8,23);
		glVertex2f(44.2,26.2);
	glEnd();
	//face done(outer layer)
	rect1(44.2,26.2,44.3,27,47.8,28.2,50,26.8,5);
	rect1(47.8,28.2,50,26.8,52.2,27,50.8,28,5);
	rect1(50,26.8,51,24,52.1,23,52.2,27,5);

		//face
		glBegin(GL_LINE_STRIP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(47.2,23.8);
		glVertex2f(49.2,23.8);
		glVertex2f(49.2,22.2);
		glVertex2f(47.2,22.2);
		glVertex2f(47.2,23.8);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(51,25);
		glVertex2f(51,21.4);
		glVertex2f(49.2,19.2);
		glVertex2f(47.6,21.6);
		//glVertex2f(51,23.9);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(43.8,23.8);
		glVertex2f(46,23.8);
		glVertex2f(46,22.2);
		glVertex2f(43.8,22.2);
		glVertex2f(43.8,23.8);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(46,22.2);
		glVertex2f(45.6,21.3);
		glVertex2f(46,20.8);
		glVertex2f(46.8,20.8);
		//glVertex2f(43.8,23.8);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1.0,0.871,0.678);
		glVertex2f(39.2,16.8);
		glVertex2f(39.2,21.6);
		glVertex2f(40.2,22);
		glVertex2f(42,21.8);
		glVertex2f(42,21);
		glVertex2f(41.8,20.8);
		glVertex2f(41.6,20);
		glVertex2f(40.2,21);
		glVertex2f(41.2,20);
		glVertex2f(41,19.2);
		glVertex2f(42,17);
		glEnd();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POINTS);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(45,22.8);
		glVertex2f(48,22.8);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(46,23.8);
		glVertex2f(47.2,23.8);
		glEnd();
		glBegin(GL_LINES);
		glVertex2f(49.2,23.8);
		glVertex2f(51,23.9);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(44.4,19.2);
		glVertex2f(45.6,20);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(39.2,19.2);
		glVertex2f(41,19.2);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(41,21.4);
		glVertex2f(42,21);
		glEnd();
		glBegin(GL_LINES);
		glVertex2f(40.9,21.2);
		glVertex2f(42,20.8);
		glEnd();
		glBegin(GL_LINES);
		glVertex2f(40.8,21);
		glVertex2f(42,20.6);
		glEnd();

		

		glBegin(GL_LINE_LOOP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(51.8,22.2);
		glVertex2f(52,21.8);
		glVertex2f(51.8,21.4);
		glVertex2f(51.4,21.8);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(51.8,22.2);
		glVertex2f(52,21.8);
		glVertex2f(51.8,21.4);
		glVertex2f(51.4,21.8);
		glEnd();
		
		//hand
		glBegin(GL_LINE_STRIP);
		glVertex2f(39.2,16.8);
		glVertex2f(39.2,21.6);
		glVertex2f(40.2,22);
		glVertex2f(42,21.8);
		glVertex2f(42,21);
		glVertex2f(41.8,20.8);
		glVertex2f(41.6,20);
		glVertex2f(40.2,21);
		glVertex2f(41.2,20);
		glVertex2f(41,19.2);
		glVertex2f(42,17);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(46.2,19.2);
		glVertex2f(48,19.2);
		glVertex2f(48.4,18.9);
		glVertex2f(48,18.6);
		glVertex2f(46.2,18.6);
		glVertex2f(45.8,18.9);
		glVertex2f(46.2,19.2);
		
		glEnd();

		glFlush();
		Sleep(500);
		sabka_saath();
		Sleep(2000);
		drawroad(1);

}

void rectr(float a,float b,float c,float d,float e,float f,float g,float h)
{
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
		glVertex2f(g,h);
	glEnd();
}

void trir(float a,float b,float c,float d,float e,float f)
{
	glBegin(GL_POLYGON);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(a,b);
		glVertex2f(c,d);
		glVertex2f(e,f);
	glEnd();
}

void rocket()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(48,0);
		glColor3f(0.0,0.0,1.0);
		glVertex2f(48,34);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0,34);
	glEnd();
	glFlush();
	x+=0.0022;
	y+=0.0022;
	if(x<22)
	{
	//rocket
	glColor3f(0.686,0.933,0.933);
	rectr(9+x,2.7+y,21.3+x,12.3+y,18.5+x,16+y,6.1+x,6.4+y);
	trir(18.5+x,16+y,23+x,16.5+y,21.3+x,12.3+y);

	//middle
	rectr(9.3+x,7.2+y,16.7+x,13.2+y,18+x,11.3+y,10.5+x,5.5+y);
	
	rectr(20+x,12+y,19+x,11.2+y,19.1+x,11.8+y,19.8+x,12.6+y);
	rectr(18.5+x,14.6+y,17.5+x,14+y,19.1+x,11.8+y,19.8+x,12.6+y);
	rectr(18+x,15+y,17+x,14.2+y,17.5+x,14+y,18.5+x,14.6+y);
	

	//rekke1
	rectr(6.6+x,7.8+y,3.3+x,6.2+y,4+x,5.8+y,6.1+x,6.4+y);
	trir(6.1+x,6.4+y,7.9+x,7.8+y,6.6+x,7.8+y);

	//rekke2
	rectr(9+x,2.7+y,7.5+x,0.7+y,7.6+x,0.3+y,10.5+x,3+y);
	trir(10.5+x,3+y,10.7+x,4.2+y,9+x,2.7+y);

	glColor3f(1,0,0);
	glBegin(GL_LINE_STRIP);
		glVertex2f(6.8+x,5.5+y);
		glVertex2f(6+x,5.6+y);
		glVertex2f(5.5+x,5.2+y);
		glVertex2f(5+x,5.5+y);
		glVertex2f(4.5+x,5+y);
		glVertex2f(4.7+x,4.6+y);
		glVertex2f(4.5+x,4.4+y);
		glVertex2f(3.5+x,4.6+y);
		glVertex2f(3.1+x,4.1+y);
		glVertex2f(3.5+x,4+y);
		glVertex2f(3.6+x,3.1+y);
		glVertex2f(3.2+x,3+y);
		glVertex2f(3.3+x,2.8+y);
		glVertex2f(4+x,2.9+y);
		glVertex2f(2.9+x,2+y);
		glVertex2f(3.7+x,2+y);
		glVertex2f(2.4+x,0.8+y);
		glVertex2f(3.3+x,0.9+y);
		glVertex2f(4+x,0.6+y);
		glVertex2f(4+x,1+y);
		glVertex2f(4.6+x,0.5+y);
		glVertex2f(4.7+x,1.1+y);
		glVertex2f(5.1+x,1.1+y);
		glVertex2f(5+x,0.7+y);
		glVertex2f(5.7+x,0.8+y);
		glVertex2f(5.8+x,1.3+y);
		glVertex2f(6.8+x,1+y);
		glVertex2f(6.7+x,1.4+y);
		glVertex2f(7.1+x,1.5+y);
		glVertex2f(7+x,2.4+y);
		glVertex2f(7.3+x,2.1+y);
		glVertex2f(7.7+x,2.5+y);
		glVertex2f(7.7+x,3+y);
		glVertex2f(7.4+x,3.2+y);
		glVertex2f(7.7+x,3+y);
		glVertex2f(8.2+x,2.8+y);
		glVertex2f(8.5+x,3.3+y);
	glEnd();
		//bottom
	rectr(8.3+x,5.6+y,8.9+x,5+y,6.2+x,2.1+y,5+x,3.6+y);
	//text
	//P
	glColor3f(0,0,1);
	rect(11.4+x,6.9+y,11.7+x,7.2+y,10.8+x,8.3+y,10.5+x,7.9+y);
	rect(10.5+x,7.9+y,11.3+x,8.6+y,11.5+x,8.4+y,10.7+x,7.7+y);
	rect(11.4+x,8.6+y,11.9+x,8+y,11.7+x,7.7+y,11.2+x,8.4+y);
	rect(11.3+x,7.5+y,11.9+x,8+y,11.8+x,8.2+y,11+x,7.5+y);
	//S
	rect(11.6+x,8.8+y,12.6+x,9.6+y,12.8+x,9.4+y,11.7+x,8.6+y);
	rect(11.6+x,8.8+y,12.2+x,8.1+y,12.4+x,8.3+y,11.9+x,8.9+y);
	rect(12.1+x,8.3+y,13+x,9+y,13.1+x,8.8+y,12.3+x,8.1+y);
	rect(13.3+x,8.5+y,13.4+x,8.4+y,12.5+x,7.7+y,12.4+x,7.8+y);
	rect(13+x,9+y,13.4+x,8.4+y,13.3+x,8.3+y,12.8+x,8.8+y);

	//L
	rect(13+x,9.8+y,13.2+x,10+y,14+x,8.9+y,13.8+x,8.7+y);
	rect(13.8+x,8.7+y,14.5+x,9.4+y,14.4+x,9.5+y,13.6+x,8.9+y);

	glTranslatef(-0.2,-0.4,0);
	//V
	rect(13.8+x,10.6+y,14.2+x,10.8+y,14.7+x,10.4+y,15+x,9.8+y);
	rect(14.7+x,10.4+y,15+x,9.8+y,14.8+x,11.3+y,14.6+x,11+y);
	glTranslatef(0.2,0.4,0);

	rect(15.1+x,10.8+y,15.4+x,11.1+y,15.5+x,10.9+y,15.2+x,10.7+y);

	//1
	rect(15.5+x,11.6+y,15.8+x,11.8+y,16.5+x,10.7+y,16.3+x,10.6+y);
	//7
	rect(16+x,12+y,16.9+x,12.6+y,16.9+x,12.3+y,16.1+x,11.8+y);
	rect(16.9+x,12.3+y,16.9+x,11.1+y,16.7+x,10.9+y,16.6+x,12.5+y);
	
	glutPostRedisplay();
	glFlush();
	}
		else
	{
		glColor3f(1.0,0.271,0.0);
		rect(2,16,2,17.3,6,17.3,6,16);
		glColor3f(1.0,0.271,0.0);
		rect(3.8,16,5,16,5,11,3.8,11);
		glColor3f(1.0,0.271,0.0);
		rect(5,11,5,9.6,2,9.6,2,11);
		glColor3f(1.0,0.271,0.0);
		rect(3.1,11,3.1,12,2,12,2,11);
		glColor3f(1.0,0.271,0.0);
		


		rect(6,9.6,8,9.6,8.8,12,6.8,12);
		glColor3f(1.0,0.271,0.0);
		rect(10,9.6,12,9.6,11,12,9.8,12);
		glColor3f(1.0,0.271,0.0);
		rect(6.8,12,11,12,10.4,14,7.2,14);
		glColor3f(1.0,0.271,0.0);
		rect(7,14,8.8,14,9,15,7.2,14);
		glColor3f(1.0,0.271,0.0);
		rect(10.4,14,9.8,14,9,15,10.2,15);
		glColor3f(1.0,0.271,0.0);
		rect(10.2,15,7.2,14,7.9,17.3,9.9,17.3);
		glColor3f(1.0,0.271,0.0);
		rect(12,9.6,9.9,17.3,9,17.3,11.3,9.6);
		glColor3f(1.0,0.271,0.0);
		rect(12.8,9.6,14.4,9.6,14.4,17.3,12.8,17.3);
		

		//HI
		glColor3f(1,1,1);
		rect(18,9.6,20,9.6,20,17.3,18,17.3);
		rect(20,15,22,15,22,13,20,13);
		rect(22,9.6,24,9.6,24,17.3,22,17.3);

		rect(25,9.6,26.4,9.6,26.4,17.3,25,17.3);

		//ND
		glColor3f(0,1,0);
		rect(30,17.3,28,17.3,28,9.6,30,9.6);
		glColor3f(0,1,0);
		rect(33,9.6,35,9.6,35,17.3,33,17.3);
		glColor3f(0,1,0);
		rect(33,9.6,33,13.2,30,17.3,30,14.4);
		

		glColor3f(0,1,0);
		rect(36,17.3,38,17.3,38,9.6,36,9.6);
		glColor3f(0,1,0);
		rect(38,16,42,16,40,17.3,38,17.3);
		glColor3f(0,1,0);
		rect(38,11.2,42,11.2,40,9.6,38,9.6);
		glColor3f(0,1,0);
		rect(39.2,11.2,42,11.2,42,12,40,12);
		glColor3f(0,1,0);
		rect(40,12,42,12,42,15,40,15);
		glColor3f(0,1,0);
		rect(40,15,42,15,42,16,39.2,16);
		glFlush();


	}
	//rectr(

	

}


void sabka_saath()
{
	glLineWidth(2.0);
	//S
	glColor3f(0.0,0.0,0.804);
	rect(60.9,24,66,24,66,24.8,60.9,24.8);
	rect(66,24.8,65,24.8,65,28,66,28);
	rect(66,28,60.9,28,60.9,27,66,27);
	rect(60.9,27,60.9,31,61.2,31,61.2,27);
	rect(61.2,30,66,30,66,31,60.9,31);

	//A
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);


	//B
	rect(72,24,72,31,73,31,73,24);
	rect(76,24,76,24.8,73,24.8,72,24);
	rect(75,24,76,24,76,26.8,75,26.8);
	rect(73,24.8,76,24.8,76,24,73,24);



	rect(75,24.8,76,24,76,26,75,27.8);
	rect(76,27.8,76,26.4,73,26.4,73,27.8);
	rect(75,27.8,76,27.8,76,31,75,31);
	rect(75,30,75,31,72,31,72,30);

	//k
	rect(79.8,24,81,24,81,31,79.8,31);
	rect(83,24,84.2,24,81,27.4,81,27.8);
	rect(81,27.8,81,27.6,84,31,83,31);

	//A
	glTranslatef(18,0,0);
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);
	glTranslatef(-18,0,0);

	//S
	glTranslatef(0,-8.2,0);
	rect(60.9,24,66,24,66,24.8,60.9,24.8);
	rect(66,24.8,65,24.8,65,28,66,28);
	rect(66,28,60.9,28,60.9,27,66,27);
	rect(60.9,27,60.9,31,61.2,31,61.2,27);
	rect(61.2,30,66,30,66,31,60.9,31);
	glTranslatef(0,8.2,0);

	//A
	glTranslatef(0,-8.2,0);
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);
	glTranslatef(0,8.2,0);

	//A
	glTranslatef(5,-8.2,0);
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);
	glTranslatef(-5,8.2,0);


	//T
	glTranslatef(-1.0,0,0);
	rect(80,15.8,80.8,15.8,80.8,22.8,80,22.8);
	rect(77.4,22,77.4,22.8,83.2,22.8,83.2,22);
	glTranslatef(1.0,0,0);

	//H
	glTranslatef(-1.0,0,0);
	rect(84.8,15.8,85.8,15.8,85.8,22.8,84.8,22.8);
	rect(88,22.8,89,22.8,89,15.8,88,15.8);
	rect(88,18.8,88,20.6,85.8,20.6,85.8,18.8);
	glTranslatef(1.0,0,0);
	glFlush();
	Sleep(1000);
	//SABKA
	glTranslatef(0.0,-16,0);
		//S
	glColor3f(0.0,0.0,0.804);
	rect(60.9,24,66,24,66,24.8,60.9,24.8);
	rect(66,24.8,65,24.8,65,28,66,28);
	rect(66,28,60.9,28,60.9,27,66,27);
	rect(60.9,27,60.9,31,61.2,31,61.2,27);
	rect(61.2,30,66,30,66,31,60.9,31);

	//A
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);


	//B
	rect(72,24,72,31,73,31,73,24);
	rect(76,24,76,24.8,73,24.8,72,24);
	rect(75,24,76,24,76,26.8,75,26.8);
	rect(73,24.8,76,24.8,76,24,73,24);



	rect(75,24.8,76,24,76,26,75,27.8);
	rect(76,27.8,76,26.4,73,26.4,73,27.8);
	rect(75,27.8,76,27.8,76,31,75,31);
	rect(75,30,75,31,72,31,72,30);

	//k
	rect(79.8,24,81,24,81,31,79.8,31);
	rect(83,24,84.2,24,81,27.4,81,27.8);
	rect(81,27.8,81,27.6,84,31,83,31);

	//A
	glTranslatef(18,0,0);
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);
	glTranslatef(-18,0,0);

	glTranslatef(0,16,0);

	//VIKAS
	//V
	glTranslatef(0,-1,0);
	rect(61.2,8.2,62.2,8.2,64,4.8,64,1.4);
	rect(64,1.4,64,4.8,65.8,8.2,66.8,8.2);
	glTranslatef(0,1,0);
	//I
	rect(67,0.4,68.5,0.4,68.5,7.2,67,7.2);
	//K
	glTranslatef(-9,-23.6,0);
	rect(79.8,24,81,24,81,31,79.8,31);
	rect(83,24,84.2,24,81,27.4,81,27.8);
	rect(81,27.8,81,27.6,84,31,83,31);
	glTranslatef(9,23.6,0);
//A
	glTranslatef(8.8,-23.6,0);
	rect(68,31,69,31,68,24,67,24);
	rect(69,31,70,31,71,24,70,24);
	rect(68,25.3,70,25.3,70,27,68,27);
	glTranslatef(-8.8,23.6,0);

	//S
	glTranslatef(20,-23.6,0);
	rect(60.9,24,66,24,66,24.8,60.9,24.8);
	rect(66,24.8,65,24.8,65,28,66,28);
	rect(66,28,60.9,28,60.9,27,66,27);
	rect(60.9,27,60.9,31,61.2,31,61.2,27);
	rect(61.2,30,66,30,66,31,60.9,31);
	glTranslatef(-20,23.6,0);
	glFlush();
	//kamba();
}

void kamba()
{
	glColor3f(1,1,0);
	tris(45,47.5,46,47.5,45.5,62);
	glColor3f(1,1,0);
	tris(67.5,47.5,68.5,47.5,68,62);
	glFlush();
	Sleep(1000);
	glColor3f(1,1,0);
	tris(88,47.5,89,47.5,88.5,62);
	glColor3f(1,1,0);
	tris(21,49,22,48,25,63);
	glFlush();
	Sleep(1000);
	glColor3f(1,1,0);
	tris(1.5,60,2.5,59,5,70);
	glFlush();
	Sleep(1000);


	glBegin(GL_LINE_STRIP);
	glVertex2f(90,63);
	glVertex2f(88.5,62);
	glVertex2f(68,62);
	glVertex2f(45.5,62);
	glVertex2f(25,63);
	glVertex2f(5,70);
	glVertex2f(0,80);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(90,62.5);
	glVertex2f(88.5,61.5);
	glVertex2f(67.5,61);
	glVertex2f(45,61);
	glVertex2f(24.5,62);
	glVertex2f(4.5,69);
	glVertex2f(0,79);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2f(90,62);
	glVertex2f(88.5,61);
	glVertex2f(67.5,60.5);
	glVertex2f(45,60.5);
	glVertex2f(24.5,61.5);
	glVertex2f(4.5,68.5);
	glVertex2f(0,78.5);
	glEnd();

	glFlush();
}



void main(int argc,char **argv)
{
	int a;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1366,726);
	glutInitWindowPosition(0,0);
	
	firstWindow=glutCreateWindow("Smart India");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
}