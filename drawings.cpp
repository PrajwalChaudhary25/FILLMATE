#include "drawings.h"

void drawings::first_drawing()
{
	setcolor(3);
    circle(550,310,200);
    circle(550,310,201);
    circle(550,310,202);
    
    ellipse(550,310+100,90,-90,50,100);
    ellipse(550,310+100,90,-90,51,101);
    ellipse(550,310+100,90,-90,52,102);
    
    ellipse(550,310-100,-90,90,50,100);
    ellipse(550,310-100,-90,90,51,101);
	ellipse(550,310-100,-90,90,52,102);
	
    circle(550-50,310-100,50);
    circle(550-50,310-100,51);
    circle(550-50,310-100,52);
    
    circle(550+50,310+100,50);
    circle(550+50,310+100,51);
    circle(550+50,310+100,52);
}


void drawings::second_drawing()//piggy
{
    setcolor(3); 
	ellipse(550,340,0,360,250,200);//body
	ellipse(550,340,0,360,250-1,200-1);
	ellipse(550,340,0,360,250-2,200-2);
	
	ellipse(440,280,0,360,30,50);//eyes-left
	ellipse(440,280,0,360,30-1,50-1);
	ellipse(440,280,0,360,30-2,50-2);
	ellipse(440,304,0,360,20,26);//eyes-left-inner
	ellipse(440,304,0,360,20-1,26-1);
	ellipse(440,304,0,360,20-2,26-2);
	ellipse(650,280,0,360,30,50);//eyes-right
	ellipse(650,280,0,360,30-1,50-1);
	ellipse(650,280,0,360,30-2,50-2);
	
	ellipse(650,304,0,360,20,26);//eyes-right-outer
	ellipse(650,304,0,360,20-1,26-1);
	ellipse(650,304,0,360,20-2,26-2);

	
	ellipse(550,430,0,360,90,55);//outernose
	ellipse(550,430,0,360,90-1,55-1);
	ellipse(550,430,0,360,90-2,55-2);
	ellipse(505,430,0,360,15,30);//nosepore-left
	ellipse(505,430,0,360,15-1,30-1);
	ellipse(505,430,0,360,15-2,30-2);
	ellipse(590,430,0,360,15,30);//nosepore-right
	ellipse(590,430,0,360,15-1,30-1);
	ellipse(590,430,0,360,15-2,30-2);
	ellipse(430,104,0,360,40,60);//ear-left
	ellipse(430,104,0,360,40-1,60-1);
	ellipse(430,104,0,360,40-2,60-2);
	ellipse(673,104,0,360,40,60);//ear-right
	ellipse(673,104,0,360,40-1,60-1);
	ellipse(673,104,0,360,40-2,60-2);
	
}


void drawings::third_drawing()
{
	setcolor(3);
	//middle part 
	int points_M[8]={250,400,250,320,850,320,850,400};
	drawpoly(4,points_M);
	int points_M1[8]={250+1,400,250+1,320+1,850-1,320+1,850-1,400};
	drawpoly(4,points_M1);
	int points_M2[8]={250+2,400,250+2,320+2,850-2,320+2,850-2,400};
	drawpoly(4,points_M2);

	int points_LL[8]={300-8,400,250-20,400,250-20,440,300-8,440};
	drawpoly(4,points_LL);
	int points_LL1[8]={300-8,400+1,250-20+1,400+1,250-20+1,440-1,300-8,440-1};
	drawpoly(4,points_LL1);
	int points_LL2[8]={300-8,400+2,250-20+2,400+2,250-20+2,440-2,300-8,440-2};
	drawpoly(4,points_LL2);
	
	circle(350,420,60);
	circle(350,420,61);
	circle(350,420,62);
   	 
	int points_LR[8]={800+8,400,850+20,400,850+20,440,800+8,440};
	drawpoly(4,points_LR);
	int points_LR1[8]={800+8,400+1,850+20+1,400+1,850+20+1,440-1,800+8,440-1};
	drawpoly(4,points_LR1);
	int points_LR2[8]={800+8,400+2,850+20+2,400+2,850+20+2,440-2,800+8,440-2};
	drawpoly(4,points_LR2);
	circle(750,420,60);
	circle(750,420,61);
	circle(750,420,62);

	line(410-5,440,690+5,440);
	line(410-5,440+1,690+5,440+1);
	line(410-5,440-1,690+5,440-1);


	
	// upper part
	int points_U[8]={340,320,410,170,650,170,720,320};
	drawpoly(4,points_U);
	int points_U1[8]={340+1,320,410+1,170+1,650-1,170+1,720-1,320};
	drawpoly(4,points_U1);
	int points_U2[8]={340+2,320,410+2,170+2,650-2,170+2,720-2,320};
	drawpoly(4,points_U2);
	int points_WL[10]={340+35,320-20,410+20,170+20,410+115,170+20,410+115,300,340+35,320-20};
	drawpoly(5,points_WL);
	int points_WL1[10]={340+35+1,320-20-1,410+20+1,170+20+1,410+115-1,170+20+1,410+115-1,300-1,340+35+1,320-20-1};
	drawpoly(5,points_WL1);
	int points_WL2[10]={340+35+2,320-20-2,410+20+2,170+20+2,410+115-2,170+20+2,410+115-2,300-2,340+35+2,320-20-2};
	drawpoly(5,points_WL2);
	
	int points_WR[10]={410+115+20,170+20,630,170+20,720-35,320-20,410+115+20,320-20,410+115+20,170+20};
	drawpoly(5,points_WR);
	int points_WR1[10]={410+115+20+1,170+20+1,630-1,170+20+1,720-35-1,320-20+1,410+115+20+1,320-20+1,410+115+20+1,170+20+1};
	drawpoly(5,points_WR1);
	int points_WR2[10]={410+115+20+2,170+20+2,630-2,170+20+2,720-35-2,320-20+2,410+115+20+2,320-20+2,410+115+20+2,170+20+2};
	drawpoly(5,points_WR2);
}


void drawings::fourth_drawing()
{
	setcolor(3);
	int points_Flag[10]={350,340,550,140,750,340,550,340,350,340};
	drawpoly(5,points_Flag);
	int points_Flag1[10]={350+5,340-1,550,140+1,750-5,340-1,550,340-1,350+5,340-1};
	drawpoly(5,points_Flag1);
	int points_Flag2[10]={350+6,340-2,550,140+2,750-6,340-2,550,340-2,350+6,340-2};
	drawpoly(5,points_Flag2);
	
	line(550,340,550,380);
	line(550-1,340,550-1,380);	
	line(550+1,340,550+1,380);	
	int points_Boat[10]={300,380,370,480,730,480,800,380,300,380};
	drawpoly(5,points_Boat);
	int points_Boat1[10]={300+2,380+1,370+1,480-1,730-1,480-1,800-2,380+1,300+2,380+1};
	drawpoly(5,points_Boat1);
	int points_Boat2[10]={300+3,380+2,370+2,480-2,730-2,480-2,800-3,380+2,300+3,380+2};
	drawpoly(5,points_Boat2);
	
	circle(550,430,30);
	circle(550,430,29);
	circle(550,430,28);
	
	circle(420,430,30);
	circle(420,430,29);
	circle(420,430,28);
	
	circle(680,430,30);
	circle(680,430,29);
	circle(680,430,28);


}


void drawings::fifth_drawing()
{

	setcolor(3);
	
	//upper triangle
    line(540,90,440,190);
    line(540+1,90+1,440+1,190);
    line(540+2,90+2,440+2,190);
    line(540,90,640,190);
    line(540-1,90+1,640-1,190);
    line(540-2,90+2,640-2,190);
    
    //window upper
    circle(540,270,30);
    circle(540,270,30-1);
    circle(540,270,30-2);
    
    //window lower
    circle(540,370,30);
    circle(540,370,30-1);
    circle(540,370,30-2);
    
    //body
    rectangle(440,190,640,480);
	rectangle(440+1,190+1,640-1,480-1);
	rectangle(440+2,190+2,640-2,480-2);
	
	//base
	int points_F10[8]={440,480 ,440-50,480+50, 640+50,480+50 ,640,480};
	drawpoly(4,points_F10);
	int points_F11[8]={440+1,480 ,440-50+1,480+50, 640+50-1,480+50 ,640-1,480};
	drawpoly(4,points_F11);
	int points_F12[8]={440+2,480 ,440-50+2,480+50, 640+50-2,480+50 ,640-2,480};
	drawpoly(4,points_F12);
	line(440-50-1,480+50+1, 640+50+1,480+50+1);
	line(440-50-2,480+50+2, 640+50+2,480+50+2);
	
	//wings-left
	int points_F20[8]={440,260 ,440-50,285+50, 440-50,385+50 ,440,385};
	drawpoly(4,points_F20);
	int points_F21[8]={440,260+1 ,440-50,285+50+1, 440-50,385+50+1 ,440,385+1};
	drawpoly(4,points_F21);
	int points_F22[8]={440,260+2 ,440-50,285+50+2, 440-50,385+50+2 ,440,385+2};
	drawpoly(4,points_F22);
	line(440-50+1,285+50+1, 440-50+1,385+50-1);
	line(440-50+2,285+50+2, 440-50+2,385+50-2);
	
	//wings-right
	int points_F30[8]={640,260 ,640+50,285+50, 640+50,385+50 ,640,385};
	drawpoly(4,points_F30);
	int points_F31[8]={640,260+1 ,640+50,285+50+1, 640+50,385+50+1,640,385+1};
	drawpoly(4,points_F31);
	int points_F32[8]={640,260+2 ,640+50,285+50+2, 640+50,385+50+2 ,640,385+2};
	drawpoly(4,points_F32);
	line(640+50-1,285+50+1, 640+50-1,385+50-1);
	line(640+50-2,285+50+2, 640+50-2,385+50-2);
}

void drawings::main_menu()
{
	//outer box
	setcolor(CYAN);
	rectangle(435,150,895,590);
	rectangle(435+1,150+1,895-1,590-1);
	rectangle(435+2,150+2,895-2,590-2);
	
	
	//setting background pattern
	setfillstyle(LTSLASH_FILL,8);
	floodfill(10,10,CYAN);
	
	setcolor(3);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(500,160, "FILL-MATE");  
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(455+100,240+20, "1. START");
    outtextxy(455+100,300+40, "2. INSTRUCTIONS");
    outtextxy(455+100,360+60, "3. EXIT");
    
    //menu controlboxes
    setcolor(WHITE);
    rectangle(460,250,540,290);
    rectangle(460,330,540,370);
    rectangle(460,410,540,450);
    
    setfillstyle(SOLID_FILL,RED);
	floodfill(465,260,15);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(465,340,15);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(465,420,15);

    setcolor(3);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(1100,615, "Bhagirath Aryal(12)");
    outtextxy(1080,645, "Prajwal Chaudhary(28)");
}

void drawings::instructions()//represented by red color
{
	//outer box
	setcolor(CYAN);
	rectangle(435,150,895,590);
	rectangle(435+1,150+1,895-1,590-1);
	rectangle(435+2,150+2,895-2,590-2);
	
	//setting background pattern
	setfillstyle(LTSLASH_FILL,8);
	floodfill(10,10,CYAN);
	
	setcolor(RED);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    outtextxy(500,160, "INSTRUCTIONS");  
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(455+10,240+20, "R_CLICK--Picks Color");
    outtextxy(455+10,300+40, "L_CLICK--Fills Color");
    outtextxy(455+10,360+60, "PATTERNS--Press Keys(F1-F5)");
    setcolor(GREEN);
    outtextxy(440+5,360+130, "ESC--RETURNS TO MAIN MENU");
    
    //menu controlboxes
    setcolor(3);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(1100,615, "Bhagirath Aryal(12)");
    outtextxy(1080,645, "Prajwal Chaudhary(28)");
}

