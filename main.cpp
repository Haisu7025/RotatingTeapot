#include <glut.h>
#include <cmath>

const GLfloat Pi = 3.1415926536f;

//定义点集
struct data{
    GLfloat x;
    GLfloat y;
}Point[4];

void init()  //初始化函数
{
    glClearColor(1.0, 1.0, 1.0, 0.0); //设置背景颜色
    glMatrixMode(GL_PROJECTION);       // 设置投影参数
    gluOrtho2D(0.0, 100.0, 0.0, 100.0); // 设置场景的大小
}

void draw_curve1(){
    //四个点作为控制顶点
    Point[0].x = 140.0;
    Point[0].y = 225.0;
    Point[1].x = 133.75;
    Point[1].y = 238.125;
    Point[2].x = 143.75;
    Point[2].y = 238.125;
    Point[3].x = 150.0;
    Point[3].y = 225.0;

    glColor3f(0.0, 0.0, 1.0); //设置线条颜色
    glPointSize(2); //设置点的大小

    glBegin(GL_LINES);
    glVertex2f(Point[0].x, Point[0].y);
    glVertex2f(Point[1].x, Point[1].y);
    glVertex2f(Point[1].x, Point[1].y);
    glVertex2f(Point[2].x, Point[2].y);
    glVertex2f(Point[2].x, Point[2].y);
    glVertex2f(Point[3].x, Point[3].y);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.0, 0.0); //设置线条颜色
    glPointSize(2); //设置点的大小

    glBegin(GL_LINE_STRIP);
    for (int i = 1; i <= 200; i++)
    {
        GLfloat t = i / 200.0;
        GLfloat b0 = pow(1 - t, 3.0);
        GLfloat b1 = 3.0 * t*pow(1 - t, 2.0);
        GLfloat b2 = 3.0 * t*t*(1 - t);
        GLfloat b3 = t*t*t;
        //运用三次Bezier曲线
        GLfloat x = Point[0].x*b0 + Point[1].x*b1 + Point[2].x*b2 + Point[3].x*b3;
        GLfloat y = Point[0].y*b0 + Point[1].y*b1 + Point[2].y*b2 + Point[3].y*b3;

        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
}

void draw_curve2(){
    //四个点作为控制顶点
    Point[0].x = 150.0;
    Point[0].y = 225.0;
    Point[1].x = 175.0;
    Point[1].y = 172.5;
    Point[2].x = 200.0;
    Point[2].y = 120.0;
    Point[3].x = 200.0;
    Point[3].y = 75.0;

    glColor3f(0.0, 0.0, 1.0); //设置线条颜色
    glPointSize(2); //设置点的大小

    glBegin(GL_LINES);
    glVertex2f(Point[0].x, Point[0].y);
    glVertex2f(Point[1].x, Point[1].y);
    glVertex2f(Point[1].x, Point[1].y);
    glVertex2f(Point[2].x, Point[2].y);
    glVertex2f(Point[2].x, Point[2].y);
    glVertex2f(Point[3].x, Point[3].y);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.0, 0.0); //设置线条颜色
    glPointSize(2); //设置点的大小

    glBegin(GL_LINE_STRIP);
    for (int i = 1; i <= 1000; i++)
    {
        GLfloat t = i / 1000.0;
        GLfloat b0 = pow(1 - t, 3.0);
        GLfloat b1 = 3.0 * t*pow(1 - t, 2.0);
        GLfloat b2 = 3.0 * t*t*(1 - t);
        GLfloat b3 = t*t*t;
        //运用三次Bezier曲线
        GLfloat x = Point[0].x*b0 + Point[1].x*b1 + Point[2].x*b2 + Point[3].x*b3;
        GLfloat y = Point[0].y*b0 + Point[1].y*b1 + Point[2].y*b2 + Point[3].y*b3;

        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
}

void draw_curve2(){
    //四个点作为控制顶点
    Point[0].x = 150.0;
    Point[0].y = 225.0;
    Point[1].x = 175.0;
    Point[1].y = 172.5;
    Point[2].x = 200.0;
    Point[2].y = 120.0;
    Point[3].x = 200.0;
    Point[3].y = 75.0;

    glColor3f(0.0, 0.0, 1.0); //设置线条颜色
    glPointSize(2); //设置点的大小

    glBegin(GL_LINES);
    glVertex2f(Point[0].x, Point[0].y);
    glVertex2f(Point[1].x, Point[1].y);
    glVertex2f(Point[1].x, Point[1].y);
    glVertex2f(Point[2].x, Point[2].y);
    glVertex2f(Point[2].x, Point[2].y);
    glVertex2f(Point[3].x, Point[3].y);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.0, 0.0); //设置线条颜色
    glPointSize(2); //设置点的大小

    glBegin(GL_LINE_STRIP);
    for (int i = 1; i <= 1000; i++)
    {
        GLfloat t = i / 1000.0;
        GLfloat b0 = pow(1 - t, 3.0);
        GLfloat b1 = 3.0 * t*pow(1 - t, 2.0);
        GLfloat b2 = 3.0 * t*t*(1 - t);
        GLfloat b3 = t*t*t;
        //运用三次Bezier曲线
        GLfloat x = Point[0].x*b0 + Point[1].x*b1 + Point[2].x*b2 + Point[3].x*b3;
        GLfloat y = Point[0].y*b0 + Point[1].y*b1 + Point[2].y*b2 + Point[3].y*b3;

        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
}

void Bernstain()  //Bernstain基函数
{

    glClear(GL_COLOR_BUFFER_BIT);

    glTranslatef(0.0f, 0.0f, 0.0f); //平移图形
    glScalef(0.5f, 0.5f, 0.5f); //缩小图像0.5倍
    //glRotatef(60.0f, 1.0f, 0.0f, 0.0f); //沿x轴旋转60度

    draw_curve1();
    draw_curve2();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400,400);
    glutCreateWindow("Bezier曲线");
    init();
    glutDisplayFunc(&Bernstain);
    glutMainLoop();
    return 0;
}