//
// Created by 于海粟 on 2018/6/6.
//

#include "teapot.h"

teapot::teapot() {
    init_body_points();
//    init_lid_points();
//    init_handle_points();
//    init_spout_points();
}

void teapot::init_body_points() {
    body.push_back(std::make_pair(
            GLfloat(140), GLfloat(225)));
    body.push_back(std::make_pair(
            GLfloat(133.75), GLfloat(238.125)));
    body.push_back(std::make_pair(
            GLfloat(143.75), GLfloat(238.125)));
    body.push_back(std::make_pair(
            GLfloat(150), GLfloat(225)));
    body.push_back(std::make_pair(
            GLfloat(175), GLfloat(172.5)));
    body.push_back(std::make_pair(
            GLfloat(200), GLfloat(120)));
    body.push_back(std::make_pair(
            GLfloat(200), GLfloat(75)));
    body.push_back(std::make_pair(
            GLfloat(200), GLfloat(30)));
    body.push_back(std::make_pair(
            GLfloat(150), GLfloat(7.5)));
    body.push_back(std::make_pair(
            GLfloat(150), GLfloat(0)));
}