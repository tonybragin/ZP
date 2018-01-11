//
//  work.c
//  ZP
//
//  Created by TONY on 13/08/2016.
//  Copyright © 2016 TONY. All rights reserved.
//

#include "head.h"

void hours_init()
{
    N = 0;
    sum = 0;
    sum15 = 0;
    avans = 0;
    for (int i = 0; i < DAYS; i++) {
        hours[i] = 0;
    }
}

void starter_pack()
{
    key = 'y';
    
    strcpy(fthis, "This");
    strcpy(fprev, "Prev");
    strcpy(fnext, "Next");
    strcpy(fspec, "Spec");
    
    load_spec();
}

int machine()
{
    load_hours(fthis);
    show_this();
    
    while (key != 'q') {
        scanf("%c", &key);
        switch (key) {
            case 't': {
                load_hours(fthis);
                show_this();
                break;
            }
            case 'p': {
                load_hours(fprev);
                show_prev();
                break;
            }
            case 'd': {
                load_hours(fthis);
                show_this();
                delete_hours();
                load_hours(fthis);
                show_this();
                break;
            }
            case 'c': {
                load_hours(fthis);
                show_this();
                correct_hours();
                load_hours(fthis);
                show_this();
                break;
            }
            case 'v': {
                load_hours(fthis);
                show_this();
                edit_avans();
                load_hours(fthis);
                show_this();
                break;
            }
            case 'n': {
                load_next();
                show_next();
                break;
            }
            case 's': {
                load_next();
                show_next();
                edit_next();
                load_next();
                show_next();
                break;
            }
            case 'i': {
                load_hours(fthis);
                show_this();
                edit_spec(0);
                load_hours(fthis);
                show_this();
                gotoXY(3, 24);
                printf("Done, %s", nickname);
                gotoXY(11, 21);
                break;
            }
            case 'a': {
                load_hours(fthis);
                show_this();
                add_hours();
                load_hours(fthis);
                show_this();
                break;
            }
            case 'f': {
                end_month();
                load_hours(fprev);
                show_prev();
                break;
            }
            case 'm': {
                load_hours(fthis);
                show_this();
                edit_spec(2);
                load_hours(fthis);
                show_this();
                gotoXY(3, 24);
                printf("Done, %s", nickname);
                gotoXY(11, 21);
                break;
            }
            case 'q': {
                clrscr();
                return 0;
                break;
            }
            case 'l': {
                lang = 'r';
                edit_spec(1);
                machine_ru();
                break;
            }
        }
        
    }
    return 0;
}

int machine_ru()
{
    load_hours(fthis);
    show_this_ru();
    
    while (key != 'q') {
        scanf("%c", &key);
        switch (key) {
            case 't': {
                load_hours(fthis);
                show_this_ru();
                break;
            }
            case 'p': {
                load_hours(fprev);
                show_prev_ru();
                break;
            }
            case 'd': {
                load_hours(fthis);
                show_this_ru();
                delete_hours();
                load_hours(fthis);
                show_this_ru();
                break;
            }
            case 'c': {
                load_hours(fthis);
                show_this_ru();
                correct_hours();
                load_hours(fthis);
                show_this_ru();
                break;
            }
            case 'v': {
                load_hours(fthis);
                show_this_ru();
                edit_avans();
                load_hours(fthis);
                show_this_ru();
                break;
            }
            case 'n': {
                load_next();
                show_next_ru();
                break;
            }
            case 's': {
                load_next();
                show_next_ru();
                edit_next();
                load_next();
                show_next_ru();
                break;
            }
            case 'i': {
                load_hours(fthis);
                show_this_ru();
                edit_spec(0);
                load_hours(fthis);
                show_this_ru();
                gotoXY(3, 24);
                printf("Готово, %s", nickname);
                gotoXY(11, 21);
                break;
            }
            case 'a': {
                load_hours(fthis);
                show_this_ru();
                add_hours();
                load_hours(fthis);
                show_this_ru();
                break;
            }
            case 'f': {
                end_month();
                load_hours(fprev);
                show_prev_ru();
                break;
            }
            case 'm': {
                load_hours(fthis);
                show_this_ru();
                edit_spec(2);
                load_hours(fthis);
                show_this_ru();
                gotoXY(3, 24);
                printf("Готово, %s", nickname);
                gotoXY(11, 21);
                break;
            }
            case 'q': {
                clrscr();
                return 0;
                break;
            }
            case 'l': {
                lang = 'e';
                edit_spec(1);
                machine();
                break;
            }
        }
    }
    return 0;
}
