#include "tablo_parser.h"
#include <stdio.h>
#include <string.h>
#include "tablo.h"

#define IND_OPEN    1//[
#define IND_CLOSE   0//]

#define FRAME_MAX_LEN   150//

const uint8_t Sym_table[2][SYM_TAB_LEN]={{'0','1','2','3','4','5','6','7','8','9','A','b','C','d','E','F','h','I','I','J','L','O','P','r','t','U','u','.','-','_',' '},
                                         {0x7E/*0*/,0x30/*1*/,0x6D/*2*/,0x79/*3*/,0x33/*4*/,0x5B/*5*/,0x5F/*6*/,0x70/*7*/,0x7F/*8*/,0x7B/*9*/,0x77/*A*/,
                                          0x1F/*b*/,0x4E/*C*/,0x3D/*d*/,0x4F/*E*/,0x47/*F*/,0x17/*h*/,0x30/*I*/,0x10/*i*/,0x3C/*J*/,0xE/*L*/,0x7E/*O*/,
                                          0x67/*P*/,0x05/*r*/,0x0F/*t*/,0x3E/*U*/,0x1C/*u*/,0x80/*.*/,0x01/*-*/,0x08/*_*/,0x00/* */}};



extern struct tablo tab;//структура табло

void tablo_indicator_struct_init(void)//
{
//    indicators[0].number=0;
//    indicators[0].type=IND_TYPE_SEGMENT;
//    indicators[0].character_num=5;
//    indicators[0].brightness=IND_BRIGHTNESS|0x9;
//    indicators[0].decode_mode=IND_DECODE|IND_DECODE_OFF;
//    indicators[0].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
//    indicators[0].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
//    indicators[0].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators_num=IND_SPI_BUS_1_NUM;//количество индикаторов на шине
	tab.buses[BUS_SPI_2].indicators_num=IND_SPI_BUS_2_NUM;
	tab.buses[BUS_SPI_3].indicators_num=IND_SPI_BUS_3_NUM;

//--------------------------BUS_1-------------------------------------------------
	tab.buses[BUS_SPI_1].indicators[0].number=0;
	tab.buses[BUS_SPI_1].indicators[0].number_in_bus=0;
	tab.buses[BUS_SPI_1].indicators[0].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[0].character_num=5;
	tab.buses[BUS_SPI_1].indicators[0].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[0].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[0].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[0].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[0].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[1].number=1;
	tab.buses[BUS_SPI_1].indicators[1].number_in_bus=1;
	tab.buses[BUS_SPI_1].indicators[1].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[1].character_num=5;
	tab.buses[BUS_SPI_1].indicators[1].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[1].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[1].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[1].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[1].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[2].number=2;
	tab.buses[BUS_SPI_1].indicators[2].number_in_bus=2;
	tab.buses[BUS_SPI_1].indicators[2].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[2].character_num=5;
	tab.buses[BUS_SPI_1].indicators[2].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[2].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[2].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[2].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[2].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[3].number=3;
	tab.buses[BUS_SPI_1].indicators[3].number_in_bus=3;
	tab.buses[BUS_SPI_1].indicators[3].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[3].character_num=5;
	tab.buses[BUS_SPI_1].indicators[3].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[3].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[3].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[3].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[3].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[4].number=4;
	tab.buses[BUS_SPI_1].indicators[4].number_in_bus=4;
	tab.buses[BUS_SPI_1].indicators[4].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[4].character_num=5;
	tab.buses[BUS_SPI_1].indicators[4].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[4].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[4].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[4].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[4].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[5].number=5;
	tab.buses[BUS_SPI_1].indicators[5].number_in_bus=5;
	tab.buses[BUS_SPI_1].indicators[5].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[5].character_num=5;
	tab.buses[BUS_SPI_1].indicators[5].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[5].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[5].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[5].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[5].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[6].number=6;
	tab.buses[BUS_SPI_1].indicators[6].number_in_bus=6;
	tab.buses[BUS_SPI_1].indicators[6].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[6].character_num=5;
	tab.buses[BUS_SPI_1].indicators[6].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[6].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[6].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[6].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[6].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[7].number=7;
	tab.buses[BUS_SPI_1].indicators[7].number_in_bus=7;
	tab.buses[BUS_SPI_1].indicators[7].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[7].character_num=5;
	tab.buses[BUS_SPI_1].indicators[7].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[7].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[7].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[7].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[7].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[8].number=8;
	tab.buses[BUS_SPI_1].indicators[8].number_in_bus=8;
	tab.buses[BUS_SPI_1].indicators[8].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[8].character_num=5;
	tab.buses[BUS_SPI_1].indicators[8].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[8].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[8].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[8].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[8].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_1].indicators[9].number=9;
	tab.buses[BUS_SPI_1].indicators[9].number_in_bus=9;
	tab.buses[BUS_SPI_1].indicators[9].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_1].indicators[9].character_num=5;
	tab.buses[BUS_SPI_1].indicators[9].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_1].indicators[9].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_1].indicators[9].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_1].indicators[9].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_1].indicators[9].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;
//--------------------------------------BUS_2----------------------------------------------
	tab.buses[BUS_SPI_2].indicators[0].number=10;
	tab.buses[BUS_SPI_2].indicators[0].number_in_bus=0;
	tab.buses[BUS_SPI_2].indicators[0].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[0].character_num=5;
	tab.buses[BUS_SPI_2].indicators[0].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[0].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[0].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[0].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[0].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[1].number=11;
	tab.buses[BUS_SPI_2].indicators[1].number_in_bus=1;
	tab.buses[BUS_SPI_2].indicators[1].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[1].character_num=5;
	tab.buses[BUS_SPI_2].indicators[1].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[1].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[1].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[1].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[1].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[2].number=12;
	tab.buses[BUS_SPI_2].indicators[2].number_in_bus=2;
	tab.buses[BUS_SPI_2].indicators[2].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[2].character_num=5;
	tab.buses[BUS_SPI_2].indicators[2].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[2].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[2].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[2].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[2].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[3].number=13;
	tab.buses[BUS_SPI_2].indicators[3].number_in_bus=3;
	tab.buses[BUS_SPI_2].indicators[3].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[3].character_num=5;
	tab.buses[BUS_SPI_2].indicators[3].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[3].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[3].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[3].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[3].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[4].number=14;
	tab.buses[BUS_SPI_2].indicators[4].number_in_bus=4;
	tab.buses[BUS_SPI_2].indicators[4].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[4].character_num=5;
	tab.buses[BUS_SPI_2].indicators[4].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[4].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[4].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[4].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[4].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[5].number=15;
	tab.buses[BUS_SPI_2].indicators[5].number_in_bus=5;
	tab.buses[BUS_SPI_2].indicators[5].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[5].character_num=5;
	tab.buses[BUS_SPI_2].indicators[5].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[5].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[5].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[5].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[5].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[6].number=16;
	tab.buses[BUS_SPI_2].indicators[6].number_in_bus=6;
	tab.buses[BUS_SPI_2].indicators[6].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[6].character_num=5;
	tab.buses[BUS_SPI_2].indicators[6].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[6].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[6].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[6].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[6].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[7].number=17;
	tab.buses[BUS_SPI_2].indicators[7].number_in_bus=7;
	tab.buses[BUS_SPI_2].indicators[7].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[7].character_num=5;
	tab.buses[BUS_SPI_2].indicators[7].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[7].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[7].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[7].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[7].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[8].number=18;
	tab.buses[BUS_SPI_2].indicators[8].number_in_bus=8;
	tab.buses[BUS_SPI_2].indicators[8].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[8].character_num=5;
	tab.buses[BUS_SPI_2].indicators[8].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[8].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[8].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[8].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[8].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;

	tab.buses[BUS_SPI_2].indicators[9].number=19;
	tab.buses[BUS_SPI_2].indicators[9].number_in_bus=9;
	tab.buses[BUS_SPI_2].indicators[9].type=IND_TYPE_SEGMENT;
	tab.buses[BUS_SPI_2].indicators[9].character_num=5;
	tab.buses[BUS_SPI_2].indicators[9].brightness=IND_BRIGHTNESS|0x9;
	tab.buses[BUS_SPI_2].indicators[9].decode_mode=IND_DECODE|IND_DECODE_OFF;
	tab.buses[BUS_SPI_2].indicators[9].scan_limit=IND_SCAN_LIMIT|(indicators[0].character_num-1);
	tab.buses[BUS_SPI_2].indicators[9].shutdown=IND_SHUTDOWN|IND_SHUTDOWN_OFF;
	tab.buses[BUS_SPI_2].indicators[9].display_test=IND_DISPLAY_TEST|IND_DISPLAY_TEST_OFF;
//--------------------------------------BUS_3----------------------------------------------
//...
}

void tablo_proto_parser(uint8_t *proto_buf)//
{
   uint8_t i=0,j=0,ind_state=IND_CLOSE;
   uint8_t len=0;//

   uint8_t current_indicator=0;
   uint8_t chr_counter=0;
   uint8_t num_buf[32]={0};


   if(proto_buf[0]!=':')//начало кадра
   {
       //error
       return;
   }

   len=proto_buf[1];

   if(len>FRAME_MAX_LEN)//
   {
       //error
       return;
   }

   for(i=2;i<len;i++)//
   {
       switch(proto_buf[i])
       {
           case '[':
           {
                ind_state=IND_OPEN;
           }
           break;

           case ']':
           {
                if(ind_state==IND_CLOSE)//
                {
                   //error!
                }

                if(indicators[current_indicator].type=IND_TYPE_SEGMENT)
                {
                    str_to_ind(&num_buf,current_indicator);
                }
                else
                {
                    //
                }
                ind_state=IND_CLOSE;
                chr_counter=0;
           }
           break;

           default:
           {
              if((proto_buf[i-1]=='[') && (ind_state==IND_OPEN))
              {
                  if(proto_buf[i]=='*')//яркость
                  {
                      for(j=0;j<INDICATORS_NUM;j++)
                      {
                          indicators[j].brightness=IND_BRIGHTNESS|(proto_buf[i+1]&0xF);
                      }
                      i+=2;
                      ind_state=IND_CLOSE;
                  }
                  else
                  {
                      current_indicator=proto_buf[i];
                      num_buf[chr_counter+1]='\0';
                      chr_counter=0;
                  }
              }
              else
              {
                  num_buf[chr_counter]=proto_buf[i];
                  chr_counter++;
              }
           }
       }
   }
   return;
}

uint8_t str_to_ind(uint8_t *str,uint8_t ind_num)//
{
    uint8_t i=0,j=0;
    uint8_t buf_count=0;//
    uint8_t str_len=0;

    str_len=strlen(str);

    display_buf[0][ind_num]=indicators[ind_num].shutdown;
    display_buf[1][ind_num]=indicators[ind_num].display_test;
    display_buf[2][ind_num]=indicators[ind_num].scan_limit;
    display_buf[3][ind_num]=indicators[ind_num].brightness;
    display_buf[4][ind_num]=indicators[ind_num].decode_mode;

    buf_count+=5;

    for(i=0;i<str_len;i++)//
    {
        if((str[i]>=0x30)&&(str[i]<=0x39))//цифры
        {
            display_buf[buf_count][ind_num]=(Sym_table[1][(str[i]-0x30)])|(0x100*((buf_count-5)+1));
            buf_count++;

            continue;
        }

        if(str[i]=='.')
        {
            if(i>0)
            {
                display_buf[buf_count-1][ind_num]|=0x80;
            }
            continue;
        }

        for(j=10;j<SYM_TAB_LEN;j++)//
        {
           if(str[i]==Sym_table[0][j])//
           {
                display_buf[buf_count][ind_num]=(Sym_table[1][j])|(0x100*((buf_count-5)+1));//������� � �����
                buf_count++;

                break;
           }
        }
    }

    for(i=buf_count;i<INDICATOR_BUF_LEN;i++)
    {
        display_buf[i][ind_num]=0x0;
    }
    return buf_count;
}

void ln_to_ind(uint8_t *buf)//
{

}
