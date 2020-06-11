#include <GL/gl.h>

#include <GL/glut.h>

void display(void)

{

    glClear (GL_COLOR_BUFFER_BIT);


    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (100,400);
    glVertex2d (500,500);
    glVertex2d (100,600);
    glVertex2d (0,1000);
    glVertex2d (-100,600);
    glVertex2d (-500,500);
    glVertex2d (-100,400);
    glVertex2d (0,0);

    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (-400,100);
    glVertex2d (-500,500);
    glVertex2d (-600,100);
    glVertex2d (-1000,0);
    glVertex2d (-600,-100);
    glVertex2d (-500,-500);
    glVertex2d (-400,-100);
    glVertex2d (0,0);

    glEnd();

    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (100,-400);
    glVertex2d (500,-500);
    glVertex2d (100,-600);
    glVertex2d (0,-1000);
    glVertex2d (-100,-600);
    glVertex2d (-500,-500);
    glVertex2d (-100,-400);
    glVertex2d (0,0);

    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (400,100);
    glVertex2d (500,500);
    glVertex2d (600,100);
    glVertex2d (1000,0);
    glVertex2d (600,-100);
    glVertex2d (500,-500);
    glVertex2d (400,-100);
    glVertex2d (0,0);

    glEnd();

    glutSwapBuffers ();

}

void init (void)

{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(-1200.0, 1200.0, -1200.0, 1200.0, -1200.0, 1200.0);

}



int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_DOUBLE| GLUT_RGB);

    glutInitWindowSize (500, 500);

    glutInitWindowPosition (100, 100);

    glutCreateWindow ("star");

    init ();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;

}
