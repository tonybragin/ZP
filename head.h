//
//  Header.h
//  ZP
//
//  Created by TONY on 07/08/2016.
//  Copyright © 2016 TONY. All rights reserved.
//

#ifndef Head_h
#define Head_h

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <fcntl.h>
#include <termios.h>
#include <pthread.h>

#define DAYS 32

int N;
float hours[DAYS];
int buf1, avans, plan, pay;
float buf2, sum, sum15, month, week, day, pre;
char nickname[100], fthis[5], fprev[5], fnext[5], fspec[5];
char key, lang;
pthread_t thread;

enum colors {
    clr_white,
    clr_black,
    clr_red,
    clr_green,
    clr_brown,
    clr_blue,
    clr_magenta,
    clr_cyan,
    clr_light_blue,
    clr_default
};

//inter
int clrscr();
int printA(char *str);
int gotoXY (int x, int y);
int getscreensize (int *rows, int *cols);
int setfgcolor (enum colors color);
int setbgcolor (enum colors color);

//brain
void load_spec();
void load_hours(char fname[]);
void load_next();

void save_hours(char fname[]);

void edit_spec(int s);
void edit_next();
void edit_avans();

void add_hours();
void delete_hours();
void correct_hours();
void end_month();

int pre_this();
void pre_next();
void pre_mat();

//show
void say_hello();

void boxes_this();
void boxes_prev();
void boxes_next();

void show_this();
void show_prev();
void show_next();
void show_add();
void show_delete();

void show_plan();
void show_nick();
void show_pay();
void show_avans();

void show_this_ru();
void show_prev_ru();
void show_next_ru();
void show_add_ru();
void show_plan_ru();
void show_nick_ru();
void show_pay_ru();
void show_avans_ru();


//work
void hours_init();
void starter_pack();
int machine();
int machine_ru();


#endif /* Header_h */
