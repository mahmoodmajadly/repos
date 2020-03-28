// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

/* Copyright (c) Mark J. Kilgard, 1996. */

/* This program is freely distributable without licensing fees
   and is provided without guarantee or warrantee expressed or
   implied. This program is -not- in the public domain. */

   /* This program is a response to a question posed by Gil Colgate
	  <gcolgate@sirius.com> about how lengthy a program is required using
	  OpenGL compared to using  Direct3D immediate mode to "draw a
	  triangle at screen coordinates 0,0, to 200,200 to 20,200, and I
	  want it to be blue at the top vertex, red at the left vertex, and
	  green at the right vertex".  I'm not sure how long the Direct3D
	  program is; Gil has used Direct3D and his guess is "about 3000
	  lines of code". */

	  /* X compile line: cc -o simple simple.c -lglut -lGLU -lGL -lXmu -lXext -lX11 -lm */

#include <GL/glut.h>

double red = 1.0, green = 0.7, blue = 0.793;
int		x0 = 20, xf = 250, x00, y00;

void reshape(int w, int h)
{
	/* Because Gil specified "screen coordinates" (presumably with an
	   upper-left origin), this short bit of code sets up the coordinate
	   system to correspond to actual window coodrinates.  This code
	   wouldn't be required if you chose a (more typical in 3D) abstract
	   coordinate system. */

	glViewport(0, 0, w, h);       /* Establish viewing area to cover entire window. */
	glMatrixMode(GL_PROJECTION);  /* Start modifying the projection matrix. */
	glLoadIdentity();             /* Reset project matrix. */
	glOrtho(0, w, 0, h, -1, 1);   /* Map abstract coords directly to window coords. */
	glScalef(1, -1, 1);           /* Invert Y axis so increasing Y goes down. */
	glTranslatef(0, -h, 0);       /* Shift origin up to upper-left corner. */
}

static void display(void)
{
	int x;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(red, green, blue);  /* r */
	for (x = x0; x < xf; x += 20)
	{
		glVertex2i(x, 100);
		glVertex2i(x, 200);
	}
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1, 0.95, 0.2);  /* r */
	for (x = x0; x < xf; x += 40)
	{
		glVertex2i(x, 80);
		glVertex2i(x + 15, 80);
		glVertex2i(x + 35, 30);
		glVertex2i(x, 20);
	}
	glEnd();

	glFlush();  /* Single buffered, so needs a flush. */
}

static void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			printf("(%d,%d)", x, y);
			glBegin(GL_LINES);
			glColor3f(0.1, 0.95, 0.9);  /* r */

			{
				glVertex2i(x - 10, y - 10);
				glVertex2i(x + 10, y + 10);
				glVertex2i(x - 10, y + 10);
				glVertex2i(x + 10, y - 10);
			}
			glEnd();
			glFlush();

		}
		else
		{
				//	glClear(GL_COLOR_BUFFER_BIT);

			glBegin(GL_QUADS);
			glColor3f(0.9, 0.95, 0.3);  /* r */

			{
				glVertex2i(x, 280);
				glVertex2i(x + 15, 280);
				glVertex2i(x + 35, 230);
				glVertex2i(x, 220);
			}
			glEnd();
			glFlush();


		}
	}
	else if (button == GLUT_RIGHT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			x00 = x;
			y00 = y;
		}
		else
		{
			printf("rigt, up(%d,%d)", x, y);
			glBegin(GL_LINES);
			glColor3f(0.9, 0.25, 0.3);  /* r */

			{
				glVertex2i(x00, y00);
				glVertex2i(x, y);
			}
			glEnd();
			glFlush();


		}

	}
}
static void keyb(unsigned char ch, int x, int y)
{
	switch (ch)
	{
	case 'R': red += .05;
		if (red > 1.0) red = 1.0;
		break;
	case 'r': red -= .05;
		if (red < 0.0) red = 0.0;
		break;
	case 'G': green += .05;
		if (green > 1.0) green = 1.0;

		break;
	case 'g': green -= .05;
		if (green < 0.0) green = 0.0;

		break;
	case 'B': blue += .05;
		if (blue > 1.0) blue = 1.0;

		break;
	case 'b': blue -= .05;
		if (blue < 0.0) blue = 0.0;

		break;
	case '5': red = green = blue = .5;
		break;
	case 'x': x0 += 5;
		xf += 1;
		if (xf > 850) {
			xf = 250; x0 = 20;
		}
		if (x0 > xf) x0 = 20;


		break;
	}
	display();
}
void main(int argc, char * argv[])
{
	// glutInit(&argc, argv);
	glutInit(&argc, argv);
	//	glutInitWindowPosition(100, 150);
	glutInitWindowSize(870, 500);
	glutCreateWindow("single triangle");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyb);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutMainLoop();
	//  return 0;             /* ANSI C requires main to return int. */
}

