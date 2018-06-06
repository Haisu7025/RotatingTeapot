//
// Created by 于海粟 on 2018/6/6.
//

#ifndef TEAPOT_TEAPOT_H
#define TEAPOT_TEAPOT_H
#include <glut.h>
#include <vector>
#include <math.h>


class teapot {
public:
    std::vector<std::pair<GLfloat, GLfloat> > body;
    std::vector<std::pair<GLfloat, GLfloat> > lid;
    std::vector<std::pair<GLfloat, GLfloat> > handle;
    std::vector<std::pair<GLfloat, GLfloat> > spout;

    teapot();
    void init_body_points();
    void init_lid_points();
    void init_handle_points();
    void init_spout_points();


};


#endif //TEAPOT_TEAPOT_H
