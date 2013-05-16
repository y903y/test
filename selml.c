/*************** SIMULATION CODE *****************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define __SIZE_NUM 0


int main ( int argc , char** argv ) ;

int main ( int argc , char** argv ) {

	double* Main_D;
	double* Main_beta;
	double* Main_epsilon;
	double* Main_gamma;
	double* Main_r__n;
	double* Main_v__n;
	double* Main_v__n1;
	double* Main_w__n;
	double* Main_w__n1;
	double* Main_zz;
	double* V0end;
	double* V1end;
	double* X0end;
	double* X1end;
	double* deltat;
	double* deltax1;
	double* deltax2;
	double* i;
	double* n;
	double* __flag2__n;
	double* __flag5__n;
	double* __flag18__n;
	double* __flag23__n;
	int __i;

	Main_D = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_beta = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_epsilon = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_gamma = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_r__n = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_v__n = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_v__n1 = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_w__n = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_w__n1 = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	Main_zz = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	V0end = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	V1end = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	X0end = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	X1end = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	deltat = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	deltax1 = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	deltax2 = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	i = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	n = malloc (  ( sizeof( double ) * __SIZE_NUM )  ) ; ;
	__flag2__n = malloc (  ( sizeof( double ) * 67-13+1 )  ) ; ;
	__flag5__n = malloc (  ( sizeof( double ) * 20-4+1 )  ) ; ;
	__flag18__n = malloc (  ( sizeof( double ) * 68-66+1 )  ) ; ;
	__flag23__n = malloc (  ( sizeof( double ) * 67-13+1 )  ) ; ;
	__flag2__n[14-13] == 0;
	__flag2__n[15-13] == 0;
	__flag2__n[16-13] == 0;
	__flag2__n[17-13] == 0;
	__flag2__n[18-13] == 0;
	__flag2__n[19-13] == 0;
	__flag2__n[20-13] == 0;
	__flag2__n[24-13] == 0;
	__flag2__n[25-13] == 0;
	__flag2__n[26-13] == 0;
	__flag2__n[27-13] == 0;
	__flag2__n[28-13] == 0;
	__flag2__n[34-13] == 0;
	__flag2__n[35-13] == 0;
	__flag2__n[36-13] == 0;
	__flag2__n[39-13] == 0;
	__flag2__n[40-13] == 0;
	__flag2__n[44-13] == 0;
	__flag2__n[45-13] == 0;
	__flag2__n[46-13] == 0;
	__flag2__n[49-13] == 0;
	__flag2__n[52-13] == 0;
	__flag2__n[53-13] == 0;
	__flag2__n[54-13] == 0;
	__flag2__n[55-13] == 0;
	__flag2__n[56-13] == 0;
	__flag2__n[60-13] == 0;
	__flag2__n[61-13] == 0;
	__flag2__n[62-13] == 0;
	__flag2__n[63-13] == 0;
	__flag2__n[64-13] == 0;
	__flag2__n[65-13] == 0;
	__flag2__n[66-13] == 0;
	__flag5__n[5-4] == 0;
	__flag5__n[6-4] == 0;
	__flag5__n[7-4] == 0;
	__flag5__n[8-4] == 0;
	__flag5__n[9-4] == 0;
	__flag5__n[10-4] == 0;
	__flag5__n[11-4] == 0;
	__flag5__n[13-4] == 0;
	__flag5__n[15-4] == 0;
	__flag5__n[16-4] == 0;
	__flag5__n[17-4] == 0;
	__flag5__n[18-4] == 0;
	__flag5__n[19-4] == 0;
	__flag18__n[67-66] == 0;
	__flag23__n[14-13] == 0;
	__flag23__n[15-13] == 0;
	__flag23__n[16-13] == 0;
	__flag23__n[17-13] == 0;
	__flag23__n[18-13] == 0;
	__flag23__n[19-13] == 0;
	__flag23__n[20-13] == 0;
	__flag23__n[24-13] == 0;
	__flag23__n[25-13] == 0;
	__flag23__n[26-13] == 0;
	__flag23__n[27-13] == 0;
	__flag23__n[28-13] == 0;
	__flag23__n[34-13] == 0;
	__flag23__n[35-13] == 0;
	__flag23__n[36-13] == 0;
	__flag23__n[39-13] == 0;
	__flag23__n[40-13] == 0;
	__flag23__n[44-13] == 0;
	__flag23__n[45-13] == 0;
	__flag23__n[46-13] == 0;
	__flag23__n[49-13] == 0;
	__flag23__n[52-13] == 0;
	__flag23__n[53-13] == 0;
	__flag23__n[54-13] == 0;
	__flag23__n[55-13] == 0;
	__flag23__n[56-13] == 0;
	__flag23__n[60-13] == 0;
	__flag23__n[61-13] == 0;
	__flag23__n[62-13] == 0;
	__flag23__n[63-13] == 0;
	__flag23__n[64-13] == 0;
	__flag23__n[65-13] == 0;
	__flag23__n[66-13] == 0;
	
	Main_v__n__32 = (double)-1.501250563778375;
	Main_w__n__32 = (double)-0.37621367749846896;
	Main_v__n__23 = (double)-1.501250563778375;
	Main_w__n__23 = (double)-0.37621367749846896;
	Main_v__n__59 = (double)-1.501250563778375;
	Main_w__n__59 = (double)-0.37621367749846896;
	Main_v__n__50 = (double)-1.501250563778375;
	Main_w__n__50 = (double)-0.37621367749846896;
	Main_v__n__41 = (double)-1.501250563778375;
	Main_w__n__41 = (double)-0.37621367749846896;
	Main_w__n__37 = (double)-0.37621367749846896;
	Main_v__n__37 = (double)-1.501250563778375;
	Main_w__n__33 = (double)-0.37621367749846896;
	Main_v__n__33 = (double)-1.501250563778375;
	Main_w__n__42 = (double)-0.37621367749846896;
	Main_v__n__42 = (double)-1.501250563778375;
	Main_w__n__51 = (double)-0.37621367749846896;
	Main_v__n__51 = (double)-1.501250563778375;
	Main_w__n__47 = (double)-0.37621367749846896;
	Main_v__n__47 = (double)-1.501250563778375;
	Main_w__n__38 = (double)-0.37621367749846896;
	Main_v__n__38 = (double)-1.501250563778375;
	Main_w__n__29 = (double)-0.37621367749846896;
	Main_v__n__29 = (double)-1.501250563778375;
	Main_w__n__43 = (double)-0.37621367749846896;
	Main_v__n__43 = (double)-1.501250563778375;
	Main_v__n__30 = (double)-1.501250563778375;
	Main_w__n__30 = (double)-0.37621367749846896;
	Main_v__n__21 = (double)-1.501250563778375;
	Main_w__n__21 = (double)-0.37621367749846896;
	Main_v__n__57 = (double)-1.501250563778375;
	Main_w__n__57 = (double)-0.37621367749846896;
	Main_v__n__48 = (double)-1.501250563778375;
	Main_w__n__48 = (double)-0.37621367749846896;
	Main_v__n__22 = (double)-1.501250563778375;
	Main_w__n__22 = (double)-0.37621367749846896;
	Main_v__n__31 = (double)-1.501250563778375;
	Main_w__n__31 = (double)-0.37621367749846896;
	Main_v__n__67 = (double)-1.501250563778375;
	Main_w__n__67 = (double)-0.37621367749846896;
	Main_v__n__13 = (double)-1.501250563778375;
	Main_w__n__13 = (double)-0.37621367749846896;
	Main_w__n__58 = (double)-0.37621367749846896;
	Main_v__n__58 = (double)-1.501250563778375;
	
	for(time = 0.000000; ( time <= 0.000000 ) ;time =  ( time + deltat ) ){

		
		//Shortest Calculation Order:0
	//----------------------------  NO LOOP: start:null end:null ----------------------------//
		n = (double)100;
	//------------------------------- END -------------------------------//

	//Shortest Calculation Order:0
	//----------------------------  NO LOOP: start:null end:null ----------------------------//
		i = (double)100;
	//------------------------------- END -------------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=13; __i<=67; __i++){
				Main_r__n____i =  (  (  ( Main_v__n[__i] * Main_v__n[__i] * Main_v__n[__i] )  * __flag2__n[ ( i - 13 ) ] )  +  ( Main_r__n[__i] *  ( 1 - __flag2__n[ ( i - 13 ) ] )  )  ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//----------------------------  NO LOOP: start:null end:null ----------------------------//
		X0end = X0end;
	//------------------------------- END -------------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=4; __i<=20; __i++){
		Main_v__n[__i] =  (  (  ( (double)0 + Main_v__n[ ( __i + 9 ) ] )  * __flag5__n[ ( i - 4 ) ] )  +  ( Main_v__n[__i] *  ( 1 - __flag5__n[ ( i - 4 ) ] )  )  ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=24; __i<=24; __i++){
		Main_v__n[24] =  ( (double)0 + Main_v__n[23] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=28; __i<=28; __i++){
		Main_v__n[28] =  ( (double)0 + Main_v__n[37] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=34; __i<=34; __i++){
		Main_v__n[34] =  ( (double)0 + Main_v__n[33] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=36; __i<=36; __i++){
		Main_v__n[36] =  ( (double)0 + Main_v__n[37] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=39; __i<=39; __i++){
		Main_v__n[39] =  ( (double)0 + Main_v__n[38] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=40; __i<=40; __i++){
		Main_v__n[40] =  ( (double)0 + Main_v__n[41] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=44; __i<=44; __i++){
		Main_v__n[44] =  ( (double)0 + Main_v__n[43] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=46; __i<=46; __i++){
		Main_v__n[46] =  ( (double)0 + Main_v__n[37] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=49; __i<=49; __i++){
		Main_v__n[49] =  ( (double)0 + Main_v__n[50] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=52; __i<=52; __i++){
		Main_v__n[52] =  ( (double)0 + Main_v__n[51] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=56; __i<=56; __i++){
		Main_v__n[56] =  ( (double)0 + Main_v__n[47] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=60; __i<=60; __i++){
		Main_v__n[60] =  ( (double)0 + Main_v__n[59] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=66; __i<=68; __i++){
		Main_v__n[__i] =  (  (  ( (double)0 + Main_v__n[ ( __i +  ( - 9 )  ) ] )  * __flag18__n[ ( i - 66 ) ] )  +  ( Main_v__n[__i] *  ( 1 - __flag18__n[ ( i - 66 ) ] )  )  ) ;
	//----------------------------- LOOP END -----------------------------//
	}

	//Shortest Calculation Order:0
	//----------------------------  NO LOOP: start:null end:null ----------------------------//
		X1end = X1end;
	//------------------------------- END -------------------------------//

	//Shortest Calculation Order:0
	//---------------------------- LOOP ----------------------------//
	for(__i=76; __i<=76; __i++){
		Main_v__n[76] =  ( (double)0 + Main_v__n[67] ) ;
	}
	//----------------------------- LOOP END -----------------------------//

	//Shortest Calculation Order:0
	//----------------------------  NO LOOP: start:null end:null ----------------------------//
		V0end = V0end;
	//------------------------------- END -------------------------------//

	//Shortest Calculation Order:0
	//----------------------------  NO LOOP: start:null end:null ----------------------------//
		V1end = V1end;
	//------------------------------- END -------------------------------//

	//Shortest Calculation Order:1
	//---------------------------- LOOP ----------------------------//
	for(__i=13; __i<=67; __i++){
			}
	//----------------------------- LOOP END -----------------------------//



	}

	free ( n ) ; 
	free ( i ) ; 
	free ( Main_time ) ; 
	free ( Main_x1 ) ; 
	free ( Main_x2 ) ; 
	free ( Main_v ) ; 
	free ( Main_w ) ; 
	free ( X0end ) ; 
	free ( X1end ) ; 
	free ( V0end ) ; 
	free ( V1end ) ; 
	free ( n ) ; 
	free ( i ) ; 
	free ( Main_time ) ; 
	free ( Main_x1 ) ; 
	free ( Main_x2 ) ; 
	free ( Main_v ) ; 
	free ( Main_w ) ; 
	free ( X0end ) ; 
	free ( X1end ) ; 
	free ( V0end ) ; 
	free ( V1end ) ; 
	free ( Main_r ) ; 
	free ( deltat ) ; 
	free ( deltax1 ) ; 
	free ( deltax2 ) ; 
	free ( Main_zz ) ; 
	free ( Main_epsilon ) ; 
	free ( Main_beta ) ; 
	free ( Main_gamma ) ; 
	free ( Main_D ) ; 
}




