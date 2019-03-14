#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
void leer(int *Dim,float Sist[][102])
{
    int A,B;
    printf("\n\n ||RESUELVE SISTEMAS LINEALES DETERMINADOS POR GAUSS||");
    printf("\n\n\n Introduce el numero de incognitas:(menor que 100)");
    scanf("%d",&*Dim);
    printf("\n\n PASE A INTRODUCIR CADA COMPONENTE DEL SISTEMA (A|B):");
    printf("\n\n MATRIZ A:\n");
    for(A=1;A<=*Dim;A++) 
    	for(B=1;B<=*Dim;B++)
    	{
        	printf("\n Termino A(%d,%d):",A,B); 
        	scanf("%f",&Sist[A][B]);
        } 
    printf("\n\n\n VECTOR B:\n");
    for(A=1;A<=*Dim;A++)
    {
        printf("\n Termino B(%d):",A);
        scanf("%f",&Sist[A][*Dim+1]);
    }
}
void escribir(int Dim, float Sist[][102])
{
    int A,B;
    for(A=1;A<=Dim;A++){
        for(B=1;B<=(Dim+1);B++)
        {
            printf("%7.2f",Sist[A][B]);
            if(B==Dim) 
            	printf("   |");
        }
        printf("\n");
    }
}
void Gauss(int Dim, float Sist[][102])
{
    int NoCero,Col,C1,C2,A;
    float Pivote,V1;
    for(Col=1;Col<=Dim;Col++)//ELIMINACÓN HACIA ADELANTE
    {
        NoCero=0;
        A=Col;
        while(NoCero==0)
        {
            if(Sist[A][Col]!=0)
            {
                NoCero=1;
            }
            else A++;
        }
        Pivote=Sist[A][Col];
        for(C1=1;C1<=(Dim+1);C1++)
        {
            V1=Sist[A][C1];
            Sist[A][C1]=Sist[Col][C1];
            Sist[Col][C1]=V1/Pivote;
        }
        for(C2=Col+1;C2<=Dim;C2++)
        {
            V1=Sist[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++)
            {
                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];
            }
    	}
    }
    for(Col=Dim;Col>=1;Col--) //SUSTITUCIÓN HACIA ATRAS
    	for(C1=(Col-1);C1>=1;C1--)
		{
		    Sist[C1][Dim+1]=Sist[C1][Dim+1]-Sist[C1][Col]*Sist[Col][Dim+1];
		    Sist[C1][Col]=0;
		}
}
int main()
{
    int C,Dimension;
    float Sistema[101][102];
    leer(&Dimension,Sistema);
    printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
    escribir(Dimension,Sistema);
    Gauss(Dimension,Sistema);
    bool sol=1;
    for(C=1;C<=Dimension;C++) 
    	if(isnan(Sistema[C][Dimension+1]))
    	{ 
    		sol=0;
    		break;
    	}	
    if(sol)
    {
    	printf("\n\n\nLas soluciones son:\n");
    	for(C=1;C<=Dimension;C++) 
    		printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
    }
    else
    	printf("\n\n\nSISTEMA NO TIENE SOLUCIÓN\n");		
}
