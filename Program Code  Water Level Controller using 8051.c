 #include<reg51.h>
sbit full=P1^0;
sbit mid=P1^1;
sbit emp=P1^2;
sbit t2=P1^3;
sbit rs=P0^0;
sbit rw=P0^1;
sbit en=P0^2;
sbit rly=P3^0;

void lcddta(unsigned char[],unsigned char);
void lcdcmd(unsigned char);
void msdelay(unsigned int);
void main(void){
    rly=0;
    P0=00;
    P2=00;
    full=1;
    mid=1;
    emp=1;
    t2=1;

    lcdcmd(0x38);
    lcdcmd(0x0c);
    lcdcmd(0x06);
    lcdcmd(0x01);
        while(1){
            if(t2==0){
						//lower motor condition

                if(emp==1 && mid==1 && full==1){
                    rly=1;
                    lcdcmd(0x01);
                    lcdcmd(0x80);
                    lcddta("tank is empty",13);
                    lcdcmd(0xc0);
                    lcddta("motor is on",11);
                }else if(emp==0 && mid==1 && full==1){
                    rly=1;
                    lcdcmd(0x01);
                    lcdcmd(0x80);
                    lcddta("tank filling",12);
                    lcdcmd(0xc0);
                    lcddta("motor is on",11);
                }else if(emp==0 && mid==0 && full==1){
                    rly=1;
                    lcdcmd(0x01);
                    lcdcmd(0x80);
                    lcddta("tank is mid",11);
                    lcdcmd(0xc0);
                    lcddta("motor is on",11);
                }else if(full==0 && mid==0 && emp==0){
                    rly=0;
                    lcdcmd(0x01);
                    lcdcmd(0x80);
                    lcddta("tank is full",12);
                    lcdcmd(0xc0);
                    lcddta("motor is off",12);
                }
				else{
				}

        }else{
		rly=0;
            lcdcmd(0x01);
            lcdcmd(0x80);
            lcddta("tank 2 empty",12);
            lcdcmd(0xc0);
            lcddta("fill tank 2",11);
        }
    } //end of while
}//end of main

void lcdcmd(unsigned char cmd){
    P2=cmd;
    rs=0;//cmd
    rw=0;//write
    en=1;//latch
    msdelay(5);
    en=0;
}//end of lcdcmd

void lcddta(unsigned char a[],unsigned char len){
    unsigned char x;

    for(x=0;x<len;x++){
        P2=a[x];
        rs=1; //data
        rw=0;
        en=1;
        msdelay(5);
        en=0;
    }//end of for
}//end of lcddta

void msdelay(unsigned int a)
{
    unsigned int x,y;

    for(x=0;x<a;x++)
        for(y=0;y<1275;y++);
}//end of msdelay
