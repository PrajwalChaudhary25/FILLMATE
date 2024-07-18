#include "control_box.h"
    void control_box::draw_control_box()
    {
    	//creating area for drawing
    	setcolor(3);
    	rectangle(50,20,1050,600);
    	rectangle(50+1,20+1,1050-1,600-1);
    	rectangle(50+2,20+2,1050-2,600-2);
    	setcolor(WHITE);
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
        outtextxy(400,625, "FILL-MATE");
            	
		//drawing color box
		setcolor(Control_Box_Color);
		rectangle(1100,20,1350,600);
		rectangle(1100+1,20+1,1350-1,600-1);
		rectangle(1100+2,20+2,1350-2,600-2);
		
	    //creators
		setcolor(WHITE);
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
        outtextxy(1100,615, "Bhagirath Aryal(12)");
        outtextxy(1080,645, "Prajwal Chaudhary(28)");
		
		//drawing color holders
		setcolor(Drawing_Color);
	    //first column	
		for(int i=0;i<5;i++,top_1+=80,bottom_1+=80)
		{
			rectangle(left_1,top_1,right_1,bottom_1);
		}
	    //second column
		for(int i=0;i<5;i++,top_2+=80,bottom_2+=80)
		{
		rectangle(left_2,top_2,right_2,bottom_2);
		}	
		top_1=top_2=40, bottom_1=bottom_2=90;
	}
	


	void control_box::fill_color_holders()
	{
	// box colors
       
		//  left boxes
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(box_L_left+20,box_L_top+20,15);
		
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(box_L_left+20,box_L_top+20+80,15);    
		
		setfillstyle(SOLID_FILL,LIGHTGRAY);
		floodfill(box_L_left+20,box_L_top+20+160,15);   
		
		setfillstyle(SOLID_FILL,RED);
		floodfill(box_L_left+20,box_L_top+20+240,15);   
		
		setfillstyle(SOLID_FILL,MAGENTA);
		floodfill(box_L_left+20,box_L_top+20+320,15);   
         
        
		// right boxes
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        floodfill(box_R_left+20,box_R_top+20,15);   
        
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(box_R_left+20,box_R_top+20+80,15);   
        
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(box_R_left+20,box_R_top+20+160,15);   
        
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(box_R_left+20,box_R_top+20+240,15);   
          
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(box_R_left+20,box_R_top+20+320,15);   
	}
	
	
	
	void control_box::write_instructions()
	{
	// instruction
       setcolor(GREEN);
       settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
       outtextxy( box_L_left,box_L_top+320+80,"--INSTRUTIONS--");
       setcolor(WHITE);
       settextstyle(4,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+105, "Colorpick-'Rclick'");
       outtextxy(box_L_left+20,box_L_top+320+130, "Relaunch-'F1'");
       outtextxy(box_L_left+30,box_L_top+320+155, "Save-'Enter'");
       settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
       setcolor(GREEN);
       outtextxy(box_L_left+10,box_L_top+320+180,"----PATTERNS----");
       setcolor(WHITE);
       settextstyle(4,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+205,"f1 , f2 , f3 , f4, f5");
	}
	
	void control_box::construct_control_box()
	{
	    draw_control_box();
		fill_color_holders();
	    write_instructions();
	}
     
        
   
       
       
