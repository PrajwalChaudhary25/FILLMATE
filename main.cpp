#include<iostream>
#include<graphics.h>
#include<winuser.h>
#include "drawings.h"
#include "control_box.h"
#include "variables.h"
using namespace std;

int main()
{
	// ---------Color Filling Programm------
	bool isLButtonDown = false;
	bool isRButtonDown = false;
	
	//defining window
	int width=GetSystemMetrics(SM_CXSCREEN);
	int height=GetSystemMetrics(SM_CYSCREEN);
	initwindow(width,height,"Color Fill",-3);


    drawings D;
    control_box C;

    int Pick_Color=6;
    
    mainmenu:
	D.main_menu();
    //checks for menu
    while(1)
    {
	 	POINT cursor1;
	    GetCursorPos(&cursor1);   	
	    
	    if(((cursor1.x>=460) && (cursor1.y>=250))&&((cursor1.x<=540)&&(cursor1.y<=290)))//red area
		{

			if(GetAsyncKeyState(VK_LBUTTON))
			{
				if (!isRButtonDown){
				isRButtonDown=true;
				cleardevice();
				goto start;
				}
				else
				{
					isRButtonDown=false;
				}
			}

		}
		
		if(((cursor1.x>=460) && (cursor1.y>=330))&&((cursor1.x<=540)&&(cursor1.y<=370)))//blue area
		{

			if(GetAsyncKeyState(VK_LBUTTON)){
				if (!isRButtonDown){
				isRButtonDown=true;
				cleardevice();
				D.instructions();
				while(1){
					if(kbhit()){  
						char ch = getch();
						if(ch==27){
							cleardevice();
							goto mainmenu;
						}
					}
		       } 
			   }
			   	else
				{
					isRButtonDown=false;
				}
	     	}
	    }
			
		
		
		if(((cursor1.x>=460) && (cursor1.y>=410))&&((cursor1.x<=540)&&(cursor1.y<=450)))//green area
		{

			if(GetAsyncKeyState(VK_LBUTTON)){
				if (!isRButtonDown){
				isRButtonDown=true;
				return 0;
				}
				else
				{
					isRButtonDown=false;
				}
			}
		}
		delay(10);
}


start:
    D.first_drawing();
    C.construct_control_box();
    while(1)
    {

		POINT cursor;
    	GetCursorPos(&cursor);
        	
        	
//    //  left boxes
//       // Blue box
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top))&&((cursor.x<=box_L_right)&&(cursor.y<=box_L_bottom)))
		{

			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
			isRButtonDown=true;
			Pick_Color=1;
//			cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}
//		// Green box
//
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+80+20))&&((cursor.x<=box_L_right)&&(cursor.y<=box_L_bottom+20+80)))
		{
		    if(GetAsyncKeyState(VK_RBUTTON))
		    if (!isRButtonDown){isRButtonDown=true;
		    Pick_Color=2;
//			cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}

		}
//
//		// Light gray
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+20+160))&&((cursor.x<=box_L_right)&&(cursor.y<=box_L_bottom+20+160)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=7;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}

		}
//
//		// RED
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+240))&&((cursor.x<=box_L_right)&&(cursor.y<=box_L_bottom+240)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=4;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}

		// Magenta
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+320))&&((cursor.x<=box_L_right)&&(cursor.y<=box_L_bottom+320)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=5;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}




	// Right boxes

	    // light cyan
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=11;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}

		// dark gray
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+80))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+80)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=8;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}
		//yellow
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+160))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+160)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=14;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}
		// white
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+240))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+240)))
		{
		    if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=15;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}

		// BLack

			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+320))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+320)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			if (!isRButtonDown){
				isRButtonDown=true;
				Pick_Color=0;
//				cout<<Pick_Color;
			}
			else
			{
				isRButtonDown=false;
			}
		}


		if(GetAsyncKeyState(VK_F1))
		{
			cleardevice();
			delay(400);
			D.first_drawing();
	    	C.construct_control_box();
		}
		if(GetAsyncKeyState(VK_F2))
		{
			cleardevice();
			delay(400);
			D.second_drawing();
			C.construct_control_box();
		}
		if(GetAsyncKeyState(VK_F3))
		{
			cleardevice();
			delay(400);
			D.third_drawing();
			C.construct_control_box();
		}
		if(GetAsyncKeyState(VK_F4))
		{
			cleardevice();
			delay(400);
			D.fourth_drawing();
			C.construct_control_box();
		}
		if(GetAsyncKeyState(VK_F5))
		{
			cleardevice();
			delay(400);
			D.fifth_drawing();
			C.construct_control_box();
		}
		if(kbhit()){  
			char ch = getch();
			if(ch==27){
				cleardevice();
				goto mainmenu;
			}
		}



		//when left button is clicked
    	if(GetAsyncKeyState(VK_LBUTTON))
    	{
//		    if (!isLButtonDown) { // If it was not previously pressed
//                isLButtonDown = true;
                if(((cursor.x>52) && (cursor.y>22))&&((cursor.x<1048)&&(cursor.y<548)))
                {

                    setfillstyle(SOLID_FILL, Pick_Color);
                    floodfill(cursor.x, cursor.y, 3);
                    delay(200);
                }
//
//            else { // If the button is not pressed
//            isLButtonDown = false;
//        }
        }

    delay(10);
	}
	getch();
	closegraph();
}


