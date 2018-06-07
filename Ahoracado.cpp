#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <String.h>


void IR_coord (int x, int y);
int horca3();

int horca(); int horca2();
int cabeza ();
int Torso ();
int brazo1 ();
int brazo2 ();
int pierna1 ();
int pierna2();
int gameover(); int oh(); int fall(); int lose(); int good(); int win(); 
int off();
int youwin(); 
void cuenta3();
void cuenta2();
void cuenta1();

int ituom(); int ituom1();int ituom2();int ituom3();int ituom4();int ituom5();int ituom6();int ituom7();int ituom8();
int ituom9();int ituom10();int ituom11();int ituom12();int ituom13(); int ituom14(); int ituom15();
int inicio(); int inicio2();
int caida0();int caida1();int caida2();int caida3();int caida4();int caida5();int caida6();int caida7();int caida8();int caida9(); int caida9a();
int caida10(); int caida11();
int libre1(); int libre2(); int libertad();
int cronometro();
int numeros();
int lector();
int over();
int verificar();
int noLetra();
int ganar();
char pal[30];
char letra,game='s';
char ju2[50];
char ju1[50];
//char guardado [23][3];
int cont=0,y=32,x=0, cntletras,i=0,mal=0,repetir=0,bien=0,correcto=0,w=0,t=0,g=0,p=0,q=0; //,k=0,b=0,guard=0;
void tempo(int); 
int AuxTempo=190000000, AxTempo=0;
void Set_Mrc(int,int,int,int);
void ir_cr(int,int);
int c1,c2,r1,r2,m;
int paso=1, rompe=0, repe=0,limi=0;
char vector1, vector2, vector3, vector4, vector5, vector6, vector7, vector8, vector9, vector10, vector11,vector12,vector13,vector14,vector15,vector16,vector17,vector18,vector19;
char vector20,vector21,vector22,vector23,vector24,vector25,vector26,vector27;
int corroborar();




int main ()
{
	
			Set_Mrc(1,1,78,23);
 inicio();		//Movimiento: "Ituom Game"
 inicio2();		//Muestra Ituom Game titilando
 while (game=='s')
 {
       off();
	   Set_Mrc(1,1,78,23);
       IR_coord(25,5); printf("JUGADOR 1: Escribe tu nombre\n");
       IR_coord(36,7); scanf("%s",&ju1);
       off();
	   Set_Mrc(1,1,78,23);       
	
       IR_coord(25,5); printf("JUGADOR 2: Escribe tu nombre\n");
       IR_coord(36,7); scanf("%s",&ju2);
       off();
	   Set_Mrc(1,1,78,23);
	   
       IR_coord(15,5); printf("%s, escribi la palabra para que %s la adivine.",ju1,ju2);
       IR_coord(35,7); scanf("%s",&pal);
   
       
		cronometro();		//Muestra los numeros 3, 2 y 1
		Set_Mrc(1,1,78,23);
		horca();			//Dibuja horca
		lector();			//Lee la cantidad de letras que se introduce en vector pal
								
	//	IR_coord(25,22); printf("Escribi una letra %s",ju2);
																
		while (repetir<6){
			
				IR_coord(25,22); printf("Escribi una letra %s",ju2);			
				IR_coord(50,22); scanf("%s",&letra); 
				IR_coord(50,22); printf("         ");
				rompe=0;
						
				while(rompe==0){
					corroborar();			//Corrobora que La Letra no se haya introducido anteriormente 		
				}
				rompe=0;
																
				verificar();  

    			noLetra();
        
				correcto=0;
 				if(bien==cntletras){ 
 					repetir=9;
				}
		}          
             
		if(mal==6){  
			
			lose();		//Movimiento: Personaje cayendo     
			off();		
			over();		// Muestra imagen "Game over"
		}

		ganar();	//Muestra imagen "You Win"


		IR_coord(28,18); printf("Quieren volver a jugar?");
		IR_coord(37,19); printf("s/n");
		IR_coord(38,21); scanf("%s",&game);   

		cont=0,y=32,x=0, cntletras,i=0,mal=0,repetir=0,bien=0,correcto=0,w=0,t=0,g=0;
		
		}	//cierre del while


IR_coord(7,24);
return 0;
}












void IR_coord (int x, int y)
{
     COORD coord;
     coord.X = x;
     coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int cabeza ()
{
IR_coord(44,5);    printf("|");
IR_coord(44,6);    printf("O");
    return 0;
}

int Torso ()
{
IR_coord(44,7);    printf("|");
IR_coord(44,8);    printf("|");
return 0;
}

int brazo1 ()
{
IR_coord(45,7);    printf(")");
return 0;
}

int brazo2 ()
{
IR_coord(43,7);    printf("/");  
return 0;
}

int pierna1 ()
{
IR_coord(45,9);    printf(")");   
return 0;
}

int pierna2()
{
IR_coord(43,9);    printf("/"); 
return 0;
}






int inicio(){
	
	int AuxX;
	int AuxP;
	int AuxResto;
	for(AuxX=1;AuxX<=16;AuxX++){
			AuxResto = AuxX % 2;
			switch(AuxX){
					case 1: 		ituom1();  tempo(20000000);     break;  
					case 2: 		ituom2();  tempo(20000000);     break; 
					case 3: 		ituom3();  tempo(20000000);     break; 
					case 4: 		ituom4();  tempo(20000000);     break; 
					case 5: 		ituom5();  tempo(20000000);     break; 
					case 6: 		ituom6();  tempo(20000000);     break; 
					case 7: 		ituom7();  tempo(20000000);     break; 
					case 8: 		ituom8();  tempo(20000000);     break; 
					case 9: 		ituom9();  tempo(20000000);     break; 
					case 10: 		ituom10(); tempo(20000000);     break; 
					case 11: 		ituom11(); tempo(20000000);     break; 
					case 12: 		ituom12(); tempo(20000000);     break; 
					case 13: 		ituom13(); tempo(20000000);     break; 
					case 14: 		ituom14(); tempo(20000000);     break;                                
         			default:		ituom15(); tempo(20000000);     break;           
            }
    }
	return 0;
}


int inicio2(){
for(w=0;w<=4;w++){                  
	ituom15();
	tempo(70000000);
	off();    
	tempo(70000000);
}}





int fall(){
	int AuxX;
	int AuxP;
	int AuxResto;
	for(AuxX=1;AuxX<=16;AuxX++){
			AuxResto = AuxX % 2;
			switch(AuxX){
					case 1: 		caida0();  tempo(60000000);     break;  
					case 2: 		caida1();  tempo(300000000);     break; 
					case 3: 		caida2();  tempo(60000000);     break; 
					case 4: 		caida3();  tempo(60000000);     break; 
					case 5: 		caida4();  tempo(60000000);     break; 
					case 6: 		caida5();  tempo(60000000);     break; 
					case 7: 		caida6();  tempo(60000000);     break; 
					case 8: 		caida8();  tempo(60000000);     break; 
					case 9: 		caida9();  tempo(60000000);     break; 
					case 10: 		caida9a(); tempo(60000000);     break; 
					case 11: 		caida10(); tempo(60000000);     break; 
					case 12: 		caida9a(); tempo(60000000);     break; 
					case 13: 		caida10(); tempo(300000000);     break; 
					case 14: 		caida11(); tempo(40000000);     break;                                
         			default:		caida10(); tempo(200000000);     break;           
            }
    }
	return 0;
}


int lose(){
	oh();
	tempo(300000000);
	tempo(60000000);
	fall();    
	return 0;
}




int win(){
good();
	tempo(300000000);
	tempo(60000000);
libertad();    
return 0;	
}


int libertad(){
	int AuxX;
	int AuxP;
	int AuxResto;
	libre1();
	tempo(300000000);

	for(AuxX=1;AuxX<=12;AuxX++){
			AuxResto = AuxX % 2;
			switch(AuxResto){
					case 0: 		libre2(); tempo(60000000);     break;                                 
         			default:		libre1(); tempo(60000000);      break;           
            }
    }
	libre2();
	tempo(60000000);
	return 0;
}
      
			
void tempo(int AxTempo)
{
    for(x=0;x<=AxTempo;x++);  
}			
			                 										                                             
int cronometro()
		{
	
 		tempo(100000000);                  
		off();
       Set_Mrc(1,1,78,23);
       for(p=1;p<=3;p++)
	   	{
            numeros();
            tempo(AuxTempo);
            off();          
			Set_Mrc(1,1,78,23);                      
      	}
return 0;}

int numeros(){
    switch (p){
           case 1:  cuenta3();     break;                                 
           case 2:	cuenta2();      break;    
           case 3: 	cuenta1();     break;           
                }
           	}
           	
int lector(){
	cntletras=strlen(pal);

for (x=0;x<=cntletras-1;x++){
                                            
IR_coord(y,20); printf("_"); 
                                y=y+3;
}
y=32;
}


int over(){
//	system("color c");
	 for(w=0;w<=3;w++){                  
		gameover();
		tempo(70000000);
		off();    
		tempo(70000000);
		gameover();  
	}
}


int verificar(){
	for (x=0;x<cntletras;x++){ 
        
			if(pal[x]==letra){
    				bien++;
                    for (i=0;i<=x;i++){
  	               		y=y+3;
                      	}
                    y=y-3;     
                    IR_coord(y,20) ; printf("%c",letra);
                	correcto=1;
            }
    y=32;  
   	}  	  
}

int noLetra(){
	if(correcto!=1){
             	mal++;                                    
    			switch (mal){
          				case 1:  	cabeza();     break;                                 
           				case 2:		Torso();      break;    
           				case 3: 	brazo1();     break;     
           				case 4: 	brazo2();     break;    
           				case 5:		pierna1();    break;     
           				case 6: 	pierna2();    break;    
                }
				repetir++;			   
   	}
}


int ganar(){
	
	if(bien==cntletras){           
		win();
		tempo(100000000);
		off();
  		for(w=0;w<=3;w++){       	           
			youwin();
			tempo(70000000);
			off();    
			tempo(70000000);
			youwin();  
		}
	}
}



void ir_cr(int x, int y)//Emulador de ir_cr
{
    /*
       funcion: crea función para ubicar printf en columna y renglón especifico
    por lo esta funcion emula ir_cr para posicionar texto en coordenadas especificas
    se tiene que declarar <windows.h>
    */
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void Set_Mrc(int c1,int r1,int c2,int r2) // construye marco
{
    /*   
    funcion: crea marco con codigo ascii
    c1-----------c2
    r1            |
    |             |
    |             |
    -------------r2
    */
   int i;
   ir_cr(c1,r1); printf("%c",201);      // esquinas
   ir_cr(c1,r2); printf("%c",200);
   ir_cr(c2,r1); printf("%c",187);
   ir_cr(c2,r2); printf("%c",188);
   for(m=c1+1;m<c2;m++)                 // controla columna
   {
         ir_cr(m,r1);printf("%c",205);  // LINEA ARRIBA HORIZONTAL
         ir_cr(m,r2);printf("%c",205);  // LINEA ABAJO HORIZONTAL
   }
   for(m=r1+1;m<r2;m++)                 // controla renglon
   {
         ir_cr(c1,m);printf("%c",186);  // LINEA IZQUIERDA VERTICAL
         ir_cr(c2,m);printf("%c",186);  // LINEA DERECHA VERTICAL
   }   
}


//ESTO NO FUNCIONO POR VECTOR / MATRIZ
			/*	for(k=0;k<=guard-1;k++)
				{
					if(guardado[k][0]==letra)
					{
						IR_coord(25,22); printf("Ya usaste esa letra, introduce otra.");
						tempo(700000000);
						IR_coord(25,22); printf("                                     ");
						IR_coord(50,22); scanf("%s",&letra); 
						IR_coord(50,22); printf("         ");
						b++;	
					}
				}
				guardado[guard][3]=letra;				
				guard++;
			*/


int corroborar(){
						if(repe==1){
						IR_coord(25,22); printf("Escribi una letra %s",ju2);			
						IR_coord(50,22); scanf("%s",&letra); 
						IR_coord(50,22); printf("         ");
					}
					repe=0;
					switch(paso){
						case 1:  vector1=letra; break; 
						case 2:  vector2=letra; break;
						case 3:  vector3=letra; break;
						case 4:  vector4=letra; break;
						case 5:  vector5=letra; break;
						case 6:  vector6=letra; break;
						case 7:  vector7=letra; break;
						case 8:  vector8=letra; break;
						case 9:  vector9=letra; break;
						case 10: vector10=letra; break;
						case 11:  vector11=letra; break;
						case 12:  vector12=letra; break;
						case 13:  vector13=letra; break;
						case 14:  vector14=letra; break;
						case 15:  vector15=letra; break;
						case 16:  vector16=letra; break;
						case 17:  vector17=letra; break;
						case 18:  vector18=letra; break;
						case 19:  vector19=letra; break;
						case 20:  vector20=letra; break;
						case 21:  vector21=letra; break;
						case 22:  vector22=letra; break;
						case 23:  vector23=letra; break;
						case 24:  vector24=letra; break;
						case 25:  vector25=letra; break;
						case 26:  vector26=letra; break;
						case 27:  vector27=letra; break;
					}
					paso++;
					limi=paso-1;
					if(paso>1){	
						
						for(q=1;q<limi;q++){
							switch(q){
								case 1:   if(vector1 ==letra){	repe=1;	} break;
								case 2:   if(vector2 ==letra){	repe=1;	} break;
								case 3:   if(vector3 ==letra){	repe=1;	} break;
								case 4:   if(vector4 ==letra){	repe=1;	} break;
								case 5:   if(vector5 ==letra){	repe=1;	} break;
								case 6:   if(vector6 ==letra){	repe=1;	} break;
								case 7:   if(vector7 ==letra){	repe=1;	} break;
								case 8:   if(vector8 ==letra){	repe=1;	} break;
								case 9:   if(vector9 ==letra){	repe=1;	} break;
								case 10:  if(vector10==letra){	repe=1;	} break;
								case 11:  if(vector11 ==letra){	repe=1;	} break;
								case 12:  if(vector12 ==letra){	repe=1;	} break;
								case 13:  if(vector13 ==letra){ repe=1;	} break;
								case 14:  if(vector14 ==letra){	repe=1;	} break;
								case 15:  if(vector15 ==letra){	repe=1;	} break;
								case 16:  if(vector16 ==letra){	repe=1;	} break;
								case 17:  if(vector17 ==letra){	repe=1;	} break;
								case 18:  if(vector18 ==letra){	repe=1;	} break;
								case 19:  if(vector19 ==letra){	repe=1;	} break;
								case 20:  if(vector20 ==letra){	repe=1;	} break;
								case 21:  if(vector21 ==letra){	repe=1;	} break;
								case 22:  if(vector22 ==letra){	repe=1;	} break;
								case 23:  if(vector23 ==letra){	repe=1;	} break;
								case 24:  if(vector24 ==letra){	repe=1;	} break;
								case 25:  if(vector25 ==letra){	repe=1;	} break;
								case 26:  if(vector26 ==letra){	repe=1;	} break;
								case 27:  if(vector27 ==letra){	repe=1;	} break;				
							}						
						}										
					}
				
					if(repe==1){
						IR_coord(25,22); printf("                                               ");
						IR_coord(25,22); printf("Ya usaste esa letra, introduce otra");
						tempo(700000000);
						IR_coord(25,22); printf("                                               ");	
					}
					
					if(repe==0){
						rompe=1;
					}
}


//-----------------------------------------------------------D I B U J O S ------------------------------------------------------------//



int libre1(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _            ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|           ");
IR_coord(17,4);     printf("      |_|                 |_|           ");
IR_coord(17,5);     printf("      |_|                               ");
IR_coord(17,6);     printf("      |_|                  O            ");
IR_coord(17,7);     printf("      |_|                 /|)           ");
IR_coord(17,8);     printf("      |_|                  |            ");
IR_coord(17,9);     printf("      |_|           ______/_)______     ");
IR_coord(17,10);    printf("      |_|          |               |    ");
IR_coord(17,11);    printf("      |_|          |               |    ");
IR_coord(17,12);    printf("      |_|          |               |    ");
IR_coord(17,13);    printf("      |_|          |               |    ");
IR_coord(17,14);    printf("      |_|          |               |    ");
IR_coord(17,15);    printf("      |_|          |               |    ");
IR_coord(17,16);    printf("      |_|          |               |    ");
IR_coord(17,17);    printf("      |_|          |               |    ");
IR_coord(17,18);    printf("______| |______    |               |    ");
}

int libre2(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _            ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|           ");
IR_coord(17,4);     printf("      |_|                 |_|           ");
IR_coord(17,5);     printf("      |_|                 \\O/          ");
IR_coord(17,6);     printf("      |_|                  |            ");
IR_coord(17,7);     printf("      |_|                  |            ");
IR_coord(17,8);     printf("      |_|                 / \\          ");
IR_coord(17,9);     printf("      |_|           _______________     ");
IR_coord(17,10);    printf("      |_|          |               |    ");
IR_coord(17,11);    printf("      |_|          |               |    ");
IR_coord(17,12);    printf("      |_|          |               |    ");
IR_coord(17,13);    printf("      |_|          |               |    ");
IR_coord(17,14);    printf("      |_|          |               |    ");
IR_coord(17,15);    printf("      |_|          |               |    ");
IR_coord(17,16);    printf("      |_|          |               |    ");
IR_coord(17,17);    printf("      |_|          |               |    ");
IR_coord(17,18);    printf("______| |______    |               |    ");
}

int oh(){
   
IR_coord(32,20);     printf("                                              ");
IR_coord(32,21);     printf("             			   ");    
IR_coord(25,22);     printf("Que lastima... la palabra era       '%s' ",pal);    
  
return 0; }

int good(){
IR_coord(32,20);     printf("                                              ");    
IR_coord(32,21);     printf("  			 		    ");    
IR_coord(25,22);     printf("Correcto!!   la palabra era       '%s' ",pal);      
return 0; }

	
int horca(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _         ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|        ");
IR_coord(17,4);     printf("      |_|                 |_|        ");
IR_coord(17,5);     printf("      |_|                            ");
IR_coord(17,6);     printf("      |_|                            ");
IR_coord(17,7);     printf("      |_|                            ");
IR_coord(17,8);     printf("      |_|                            ");
IR_coord(17,9);     printf("      |_|           _______________  ");
IR_coord(17,10);    printf("      |_|          |               | ");
IR_coord(17,11);    printf("      |_|          |               | ");
IR_coord(17,12);    printf("      |_|          |               | ");
IR_coord(17,13);    printf("      |_|          |               | ");
IR_coord(17,14);    printf("      |_|          |               | ");
IR_coord(17,15);    printf("      |_|          |               | ");
IR_coord(17,16);    printf("      |_|          |               | ");
IR_coord(17,17);    printf("      |_|          |               | ");
IR_coord(17,18);    printf("______| |______    |               | ");
}		

int caida0(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  O          ");
IR_coord(17,7);     printf("      |_|                 /|)         ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           ______/_)______   ");
IR_coord(17,10);    printf("      |_|          |               |  ");
IR_coord(17,11);    printf("      |_|          |               |  ");
IR_coord(17,12);    printf("      |_|          |               |  ");
IR_coord(17,13);    printf("      |_|          |               |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}	

int caida1(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  O          ");
IR_coord(17,7);     printf("      |_|                 /|)         ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____ / ) _____   ");
IR_coord(17,10);    printf("      |_|          |               |  ");
IR_coord(17,11);    printf("      |_|          |               |  ");
IR_coord(17,12);    printf("      |_|          |               |  ");
IR_coord(17,13);    printf("      |_|          |               |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}		

int caida2(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                 )O/         ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____ /|/ _____   ");
IR_coord(17,10);    printf("      |_|          |               |  ");
IR_coord(17,11);    printf("      |_|          |               |  ");
IR_coord(17,12);    printf("      |_|          |               |  ");
IR_coord(17,13);    printf("      |_|          |               |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}		

int caida3(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                 )O/         ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |      /|/      |  ");
IR_coord(17,11);    printf("      |_|          |               |  ");
IR_coord(17,12);    printf("      |_|          |               |  ");
IR_coord(17,13);    printf("      |_|          |               |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}

int caida4(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____ )O/ _____   ");
IR_coord(17,10);    printf("      |_|          |       |       |  ");
IR_coord(17,11);    printf("      |_|          |      /|/      |  ");
IR_coord(17,12);    printf("      |_|          |               |  ");
IR_coord(17,13);    printf("      |_|          |               |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}      

int caida5(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |      )O/      |  ");
IR_coord(17,11);    printf("      |_|          |       |       |  ");
IR_coord(17,12);    printf("      |_|          |      /|/      |  ");
IR_coord(17,13);    printf("      |_|          |               |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}    

int caida6(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |       |       |  ");
IR_coord(17,11);    printf("      |_|          |      )O/      |  ");
IR_coord(17,12);    printf("      |_|          |       |       |  ");
IR_coord(17,13);    printf("      |_|          |      /|/      |  ");
IR_coord(17,14);    printf("      |_|          |               |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}    

 
int caida8(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |       |       |  ");
IR_coord(17,11);    printf("      |_|          |       |       |  ");
IR_coord(17,12);    printf("      |_|          |      )O/      |  ");
IR_coord(17,13);    printf("      |_|          |       |       |  ");
IR_coord(17,14);    printf("      |_|          |      /|/      |  ");
IR_coord(17,15);    printf("      |_|          |               |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}    

int caida9(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |       |       |  ");
IR_coord(17,11);    printf("      |_|          |       |       |  ");
IR_coord(17,12);    printf("      |_|          |       |       |  ");
IR_coord(17,13);    printf("      |_|          |      )O/      |  ");
IR_coord(17,14);    printf("      |_|          |       |       |  ");
IR_coord(17,15);    printf("      |_|          |      /|/      |  ");
IR_coord(17,16);    printf("      |_|          |               |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}    

int caida9a(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |       |       |  ");
IR_coord(17,11);    printf("      |_|          |       |       |  ");
IR_coord(17,12);    printf("      |_|          |       |       |  ");
IR_coord(17,13);    printf("      |_|          |       |       |  ");
IR_coord(17,14);    printf("      |_|          |      )O/      |  ");
IR_coord(17,15);    printf("      |_|          |       |       |  ");
IR_coord(17,16);    printf("      |_|          |      /|/      |  ");
IR_coord(17,17);    printf("      |_|          |               |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}    

int caida10(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _          ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|         ");
IR_coord(17,4);     printf("      |_|                 |_|         ");
IR_coord(17,5);     printf("      |_|                  |          ");
IR_coord(17,6);     printf("      |_|                  |          ");
IR_coord(17,7);     printf("      |_|                  |          ");
IR_coord(17,8);     printf("      |_|                  |          ");
IR_coord(17,9);     printf("      |_|           _____  |  _____   ");
IR_coord(17,10);    printf("      |_|          |       |       |  ");
IR_coord(17,11);    printf("      |_|          |       |       |  ");
IR_coord(17,12);    printf("      |_|          |       |       |  ");
IR_coord(17,13);    printf("      |_|          |       |       |  ");
IR_coord(17,14);    printf("      |_|          |       O       |  ");
IR_coord(17,15);    printf("      |_|          |      /|\\      |  ");
IR_coord(17,16);    printf("      |_|          |       |       |  ");
IR_coord(17,17);    printf("      |_|          |      / \\      |  ");
IR_coord(17,18);    printf("______| |______    |               |  ");
}    

int caida11(){
IR_coord(17,2);     printf("       _ _ _ _ _ _ _ _ _ _ _           ");
IR_coord(17,3);     printf("      |_|_|_|_|_|_|_|_|_|_|_|          ");
IR_coord(17,4);     printf("      |_|                 |_|          ");
IR_coord(17,5);     printf("      |_|                  |           ");
IR_coord(17,6);     printf("      |_|                  |           ");
IR_coord(17,7);     printf("      |_|                  |           ");
IR_coord(17,8);     printf("      |_|                  |           ");
IR_coord(17,9);     printf("      |_|           _____  |  _____    ");
IR_coord(17,10);    printf("      |_|          |       |       |   ");
IR_coord(17,11);    printf("      |_|          |       |       |   ");
IR_coord(17,12);    printf("      |_|          |       |       |   ");
IR_coord(17,13);    printf("      |_|          |       |       |   ");
IR_coord(17,14);    printf("      |_|          |     __O__     |   ");
IR_coord(17,15);    printf("      |_|          |       |       |   ");
IR_coord(17,16);    printf("      |_|          |     __|__     |   ");
IR_coord(17,17);    printf("      |_|          |               |   ");
IR_coord(17,18);    printf("______| |______    |               |   ");
}    

int ituom1(){
IR_coord(14,19);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
return 0;
}

int ituom2(){
IR_coord(14,18);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,19);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
return 0;
}

int ituom3(){
IR_coord(14,17);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,18);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,19);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
return 0;
}

int ituom4(){
IR_coord(14,16);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,17);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,18);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,19);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
return 0;
}

int ituom5(){
IR_coord(14,15);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,16);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,17);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,18);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,19);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
return 0;
}

int ituom6(){
IR_coord(14,14);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,15);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,16);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,17);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,18);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,19);    printf("                                                    ");
return 0;
}

int ituom7(){
IR_coord(14,13);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,14);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,15);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,16);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,17);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,18);    printf("                                                    ");
IR_coord(14,19);    printf("                                                    ");
return 0;
}

int ituom8(){
IR_coord(14,12);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,13);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,14);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,15);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,16);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,17);    printf("                                                    ");
IR_coord(14,18);    printf("                                                    ");
IR_coord(14,19);    printf("                                             		");
return 0;
}

int ituom9(){
IR_coord(14,11);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,12);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,13);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,14);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,15);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,16);    printf("                                                    ");
IR_coord(14,17);    printf("                                                    ");
IR_coord(14,18);    printf("                                                    ");
IR_coord(14,19);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
return 0;
}

int ituom10(){
IR_coord(14,10);    printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,11);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,12);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,13);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,14);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,15);    printf("                                                    ");
IR_coord(14,16);    printf("                                                    ");
IR_coord(14,17);    printf("                                                	 ");
IR_coord(14,18);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
IR_coord(14,19);    printf("     _|        _|    _|  _|_|  _|_|  _|        	 ");
return 0;
}

int ituom11(){
IR_coord(14,9);     printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,10);    printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,11);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,12);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,13);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,14);    printf("                                                    ");
IR_coord(14,15);    printf("                                                    ");
IR_coord(14,16);    printf("                                                 	 ");
IR_coord(14,17);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
IR_coord(14,18);    printf("     _|        _|    _|  _|_|  _|_|  _|        	 ");
IR_coord(14,19);    printf("     _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|_|    	 ");
return 0;
}

int ituom12(){
IR_coord(14,8);     printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,9);     printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,10);    printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,11);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,12);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,13);    printf("                                                    ");
IR_coord(14,14);    printf("                                                    ");
IR_coord(14,15);    printf("                                                	 ");
IR_coord(14,16);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
IR_coord(14,17);    printf("     _|        _|    _|  _|_|  _|_|  _|        	 ");
IR_coord(14,18);    printf("     _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|_|    	 ");
IR_coord(14,19);    printf("     _|    _|  _|    _|  _|      _|  _|        	 ");
return 0;
}

int ituom13(){
IR_coord(14,7);     printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,8);     printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,9);     printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,10);    printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,11);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,12);    printf("                                                    ");
IR_coord(14,13);    printf("                                                   ");
IR_coord(14,14);    printf("                                               	 ");
IR_coord(14,15);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
IR_coord(14,16);    printf("     _|        _|    _|  _|_|  _|_|  _|        	 ");
IR_coord(14,17);    printf("     _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|_|    	 ");
IR_coord(14,18);    printf("     _|    _|  _|    _|  _|      _|  _|        	 ");
IR_coord(14,19);    printf("       _|_|_|  _|    _|  _|      _|  _|_|_|_| 	 ");
return 0;
}

int ituom14(){
IR_coord(14,6);     printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,7);     printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,8);     printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,9);     printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,10);    printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,11);    printf("                                                    ");
IR_coord(14,12);    printf("                                                    ");
IR_coord(14,13);    printf("                                                	 ");
IR_coord(14,14);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
IR_coord(14,15);    printf("     _|        _|    _|  _|_|  _|_|  _|        	 ");
IR_coord(14,16);    printf("     _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|_|    	 ");
IR_coord(14,17);    printf("     _|    _|  _|    _|  _|      _|  _|        	 ");
IR_coord(14,18);    printf("       _|_|_|  _|    _|  _|      _|  _|_|_|_| 		 ");
IR_coord(14,19);    printf("                                                 ");
return 0;
}

int ituom15(){
IR_coord(14,5);     printf("_|_|_|  _|_|_|_|_|  _|    _|    _|_|    _|      _|  ");
IR_coord(14,6);     printf("  _|        _|      _|    _|  _|    _|  _|_|  _|_|  ");
IR_coord(14,7);     printf("  _|        _|      _|    _|  _|    _|  _|  _|  _|  ");
IR_coord(14,8);     printf("  _|        _|      _|    _|  _|    _|  _|      _|  ");
IR_coord(14,9);     printf("_|_|_|      _|        _|_|      _|_|    _|      _|  ");
IR_coord(14,10);    printf("                                                    ");
IR_coord(14,11);    printf("                                                    ");
IR_coord(14,12);    printf("                                               	 ");
IR_coord(14,13);    printf("       _|_|_|    _|_|    _|      _|  _|_|_|_|  	 ");
IR_coord(14,14);    printf("     _|        _|    _|  _|_|  _|_|  _|        	 ");
IR_coord(14,15);    printf("     _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|_|    	 ");
IR_coord(14,16);    printf("     _|    _|  _|    _|  _|      _|  _|        	 ");
IR_coord(14,17);    printf("       _|_|_|  _|    _|  _|      _|  _|_|_|_| 		 ");
IR_coord(14,18);    printf("                                                  ");
IR_coord(14,19);    printf("                                                  ");
return 0;
}


void cuenta3(){
IR_coord(35,4);     printf("          ");
IR_coord(35,5);     printf("          ");
IR_coord(35,6);     printf("_|_|_|    ");
IR_coord(35,7);     printf("      _|  ");
IR_coord(35,8);     printf("  _|_|    ");
IR_coord(35,9);     printf("      _|  ");
IR_coord(35,10);    printf("_|_|_|    ");
IR_coord(35,11);    printf("          ");
      }
                                            
void cuenta2(){ 
IR_coord(35,4);     printf("          ");
IR_coord(35,5);     printf("          ");
IR_coord(35,6);     printf("  _|_|    ");
IR_coord(35,7);     printf("_|    _|  ");
IR_coord(35,8);     printf("    _|    ");
IR_coord(35,9);     printf("  _|      ");
IR_coord(35,10);    printf("_|_|_|_|  ");
IR_coord(35,11);    printf("          ");
	}
										  
void cuenta1(){										  
IR_coord(37,4);     printf("      ");
IR_coord(37,5);     printf("      ");
IR_coord(37,6);     printf("  _|  ");
IR_coord(37,7);     printf("_|_|  ");
IR_coord(37,8);     printf("  _|  ");
IR_coord(37,9);     printf("  _|  ");
IR_coord(37,10);    printf("  _|  ");
IR_coord(37,11);    printf("      ");
}

int gameover(){
IR_coord(19,3);     printf("  _|_|_|    _|_|    _|      _|  _|_|_|_|  ");
IR_coord(19,4);     printf("_|        _|    _|  _|_|  _|_|  _|        ");
IR_coord(19,5);     printf("_|  _|_|  _|_|_|_|  _|  _|  _|  _|_|_|    ");
IR_coord(19,6);     printf("_|    _|  _|    _|  _|      _|  _|        ");
IR_coord(19,7);     printf("  _|_|_|  _|    _|  _|      _|  _|_|_|_|  ");
IR_coord(19,11);    printf("  _|_|    _|      _|  _|_|_|_|  _|_|_|    ");
IR_coord(19,12);    printf("_|    _|  _|      _|  _|        _|    _|  ");
IR_coord(19,13);    printf("_|    _|  _|      _|  _|_|_|    _|_|_|    ");
IR_coord(19,14);    printf("_|    _|    _|  _|    _|        _|    _|  ");
IR_coord(19,15);    printf("  _|_|        _|      _|_|_|_|  _|    _|  ");
return 0;
}
    
int off(){
IR_coord(2,2);     printf("                                                                            ");
IR_coord(2,3);     printf("                                                                            ");                   
IR_coord(2,4);     printf("                                                                            ");                  
IR_coord(2,5);     printf("                                                                            ");                  
IR_coord(2,6);     printf("                                                                            ");                   
IR_coord(2,7);     printf("                                                                            ");                   
IR_coord(2,8);     printf("                                                                            ");
IR_coord(2,9);     printf("                                                                            ");
IR_coord(2,10);    printf("                                                                            ");                  
IR_coord(2,11);    printf("                                                                            ");                    
IR_coord(2,12);    printf("                                                                            ");                  
IR_coord(2,13);    printf("                                                                            ");                    
IR_coord(2,14);    printf("                                                                            ");                   
IR_coord(2,15);    printf("                                                                            ");                    
IR_coord(2,16);    printf("                                                                            ");
IR_coord(2,17);    printf("                                                                            ");
IR_coord(2,18);    printf("                                                                            ");
IR_coord(2,19);    printf("                                                                            ");
IR_coord(2,20);    printf("                                                                            ");
IR_coord(2,21);    printf("                                                                            ");
IR_coord(2,22);    printf("                                                                            ");
return 0;
} 



int youwin(){
IR_coord(4,6);     printf("_|      _|    _|_|    _|    _|      _|          _|  _|_|_|  _|      _|  ");
IR_coord(4,7);     printf("  _|  _|    _|    _|  _|    _|      _|          _|    _|    _|_|    _|  ");
IR_coord(4,8);     printf("    _|      _|    _|  _|    _|      _|    _|    _|    _|    _|  _|  _|  ");
IR_coord(4,9);     printf("    _|      _|    _|  _|    _|        _|  _|  _|      _|    _|    _|_|  ");
IR_coord(4,10);    printf("    _|        _|_|      _|_|            _|  _|      _|_|_|  _|      _|  ");
return 0;
}


