/*

This is a library of the letters of the alphabet written in a concise array structure.

Each line of the array represents a horizontal slice of the cube. Each line contains 9 entrys,
the first 8 depict a single row in the horizontal plane. There is a 9th entry in each line that provides the cube
with a codeword depicting which vertical plane that line of the array belongs to.

Graphically the top line in the array also represents the top most horizontal plane of the
cube for easy reading.  

Each hexadecimal element in the line represents a row. Below there is a graphic orienting how.

Each hexadecimal element can be written as a binary value for instance:

	(hexadecimal)	  (B)   (4)

		0xB4 =      0b1011 0100


Graphically the first bit of the binary number is the left most LED in the cube, whereas
the last bit of the binary number is the right side of the cube. 



Here is a graphical representation of the data for the cube (looking directly down at the cube):

					(Rows or Depth)	
					   8    7    6    5    4    3    2   1      

	(Levels)	8:	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
				7:	 {0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
	Back of 	6:   {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},		Front Side
	  Cube		5:	 {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},		 (w/ Hole)
				4:	 {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
				3:	 {0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x04},
				2:	 {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
				1:	 {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x01}};

							       
							
*/

unsigned char letterLib[27][8][9] ={

// volatile unsigned char A[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x01}},


// volatile unsigned char B[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x01}},

// volatile unsigned char C[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x01}},

// volatile unsigned char D[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x01}},

// volatile unsigned char E[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x78,0x78,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x01}},

// volatile unsigned char F[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x78,0x78,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x01}},

// volatile unsigned char G[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x6E,0x6E,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3E,0x3E,0x00,0x00,0x00,0x01}},

// volatile unsigned char H[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x01}},

// volatile unsigned char I[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x01}},

// volatile unsigned char J[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x01}},

// volatile unsigned char K[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x6C,0x6C,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x78,0x78,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x70,0x70,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x78,0x78,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x6C,0x6C,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x01}},

// volatile unsigned char L[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x01}},

// volatile unsigned char M[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x77,0x77,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x6B,0x6B,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x01}},

// volatile unsigned char N[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x46,0x46,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x76,0x76,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x6E,0x6E,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x62,0x62,0x00,0x00,0x00,0x01}},

// volatile unsigned char O[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x01}},

// volatile unsigned char P[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x01}},

// volatile unsigned char Q[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x01}},

// volatile unsigned char R[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x78,0x78,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x6C,0x6C,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x01}},

// volatile unsigned char S[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x60,0x0,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x01}},

// volatile unsigned char T[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x01}},

// volatile unsigned char U[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x01}},

// volatile unsigned char V[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x01}},

// volatile unsigned char W[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x63,0x63,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x6B,0x6B,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x3E,0x3E,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x14,0x14,0x00,0x00,0x00,0x01}},

// volatile unsigned char X[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x01}},

// volatile unsigned char Y[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x01}},

// volatile unsigned char Z[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x01}},

// volatile unsigned char EXC[8][9]= 

{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x40},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x10},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x08},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x04},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02},
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x01}}};

// volatile unsigned char QUE[8][9]= 

// {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80},
// {0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x40},
// {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,0x20},
// {0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x10},
// {0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x08},
// {0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x04},
// {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02},
// {0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x01}}

