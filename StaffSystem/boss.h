#ifndef STAFFSYSTEM_BOSS_H
#define STAFFSYSTEM_BOSS_H
#endif //STAFFSYSTEM_BOSS_H
//以上代码非Clion软件可以删除
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

//老板类
class Boss:public Worker{
public:
    Boss(int id,string name,int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual string getDeptName();
};
