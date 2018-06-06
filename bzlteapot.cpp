#include "ctrlpoints.h"
using namespace std;

GLfloat roate = 0.0;// set rote of roate ying yu bu hao  bu zhuang le 设置旋转速率
GLfloat rote = 0.0;//shezhi旋转角度
GLfloat anglex = 0.0;//X 轴旋转
GLfloat angley = 0.0;//Y 轴旋转
GLfloat anglez = 0.0;//Z 轴旋转
GLint WinW = 400;
GLint WinH = 400;
GLfloat oldx;//当左键按下时记录鼠标坐标
GLfloat oldy;

void
initlights(void)
{

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

}

void
display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef(-90.0, 0.0, 0.0, 0.0);
    glRotatef(rote, 0.0f, 1.0f, 0.0f);
    glRotatef(anglex,1.0,0.0,0.0);
    glRotatef(angley,0.0,1.0,0.0);
    glRotatef(anglez,0.0,0.0,1.0);
	for( int i = 0; i < 32; ++i )
	{
		glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4,
        0, 1, 12, 4, &ctrlpoints[4*i][0][0]);
		glEvalMesh2(GL_LINE, 0, 20, 0, 20);
	}

    rote += roate;
    //glRotatef(angle, 0.0, 1.0, 0.0);
    //angle += 1.0f;
    glutSwapBuffers();
    glPopMatrix();
    glFlush();
}

void
myinit(void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_DEPTH_TEST);

    glEnable(GL_MAP2_VERTEX_3);
    glEnable(GL_AUTO_NORMAL);
    glEnable(GL_NORMALIZE);
    glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0);
    initlights();       /* for lighted version only */
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            roate = 0;
            rote = 0;
            oldx = x;//当左键按下时记录鼠标坐标
            oldy = y;
            cout << "left" << endl;
        }

    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            roate += 1.0f;
            cout << "right" << endl;
        }

    }

}
void motion(int x, int y)
{
    GLint deltax = oldx - x;
    GLint deltay = oldy - y;
    anglex  += 360 * (GLfloat)deltax / (GLfloat)WinW;//根据屏幕上鼠标滑动的距离来设置旋转的角度
    angley += 360 * (GLfloat)deltay / (GLfloat)WinH;
    anglez += 360 * (GLfloat)deltay / (GLfloat)WinH;
    oldx = x;//记录此时的鼠标坐标，更新鼠标坐标
    oldy = y;//若是没有这两句语句，滑动是旋转会变得不可控
    glutPostRedisplay();
    glutPostRedisplay();
}

void myReshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-4.0, 4.0, -4.0 * (GLfloat) h / (GLfloat) w,
            4.0 * (GLfloat) h / (GLfloat) w, -4.0, 4.0);
    else
        glOrtho(-4.0 * (GLfloat) w / (GLfloat) h,
            4.0 * (GLfloat) w / (GLfloat) h, -4.0, 4.0, -4.0, 4.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

static void key(unsigned char k, int x, int y)
{
  switch (k) {
  case 27:  /* Escape */
    exit(0);
    break;
  default:
    return;
  }
  glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow(argv[0]);
    myinit();
    glutReshapeFunc(myReshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(key);
    glutMainLoop();
    return 0;
}