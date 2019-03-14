#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX =10000000;
vector<int> isPrime;
vector<int> primos;//contiene los primos(en numeros)
vector<int> is_anagram;
vector<int> check;
void sieve ()
{
	isPrime=vector<int>(MAX,1);
	isPrime[0]=isPrime[1]=0;
	for(int i=4;i<MAX;i+=2)
	{
		isPrime[i]=0;
	}
	for(int i=3;i*i<=MAX;i+=2)
	{
		if(isPrime[i]==1)
		{
			for(int j=i*i;j<MAX;j+=i)
			{
				isPrime[j]=0;
			}	
		}
	}
}

int main()
{
	int n, remember, tama=0, ans=0;
	bool flag=false,flag1=false;
	sieve();
	primos.push_back(2);
	for(int i=3;i<=MAX;i+=2)
	{
		if(isPrime[i]==1)
			primos.push_back(i);
	}
	//cout<<"bound "<<upper_bound(primos.begin(),primos.end(),n) - primos.begin()<<endl;
	while(cin>>n)
	{	
		if(n==0)
			break;//end of file
		remember=n;
		cout<<"n: "<<n<<endl;
		//cout<<"anagram size:"<<is_anagram.size()<<endl;
		cout<<"is anagram : ";
		for (vector<int>::const_iterator i = is_anagram.begin(); i != is_anagram.end(); ++i)
			cout << *i << ' ';
		cout<<endl;
		while(n!=0)// numero de digitos de n
		{
			is_anagram.push_back(n%10);//metiendo los digitos al vector is_anagram
			n=n/10;
		}
		//printf("is_anagram[0]: %d\n",is_anagram[0]);
		//cout<<"pasa"<<endl;
		cout<<"is anagram 1 : ";
		for (vector<int>::const_iterator i = is_anagram.begin(); i != is_anagram.end(); ++i)
			cout << *i << ' ';
		cout<<endl;
		n=remember;	
		tama=is_anagram.size();
		printf("upper: %d\n",upper_bound(primos.begin(),primos.end(),n)-primos.begin());
		for(int i=upper_bound(primos.begin(),primos.end(),n)-primos.begin();i<primos.size();i++)//desde la posicion del primer primo mayor a n		
		{
			printf("prime[%d]: %d\n",i,primos[i]);
			//cout<<"prime[i]: "<<primos[i]<<endl;
			cout<<"size: "<<tama<<endl;
			//cout<<"pass"<<endl;
			//printf("primos[]:%d     compare: %d \n",primos[i],pow(10,size));
			cout<<"primos[]: "<<primos[i]<<"    compare: "<<pow(10,tama)<<endl;
			if(primos[i]<pow(10,tama))//entran todos los numeros en el rango que quiero
			{
				printf("prime[%d]: %d\n",i,primos[i]);
				//cout<<"ans :"<<ans<<endl;
				remember=primos[i];
				cout<<"pass"<<endl;
				//cout<<"prime[i]: "<<primos[i]<<endl;
				//cout<<"remember: "<<remember<<endl;
				is_anagram.clear();
				if(primos[i]!=2 && primos[i]!=5)
				{
					//cout<<"pasa"<<endl;
					while(primos[i]!=0)
					{	
						if((primos[i]%10)%2!=0 && (primos[i]%10)!=0 && (primos[i]%10)!=5)
						{	
							//printf("prime[%d]: %d\n",i,primos[i]);
							is_anagram.push_back(primos[i]%10);
							primos[i]=primos[i]/10;
						}	
						else
						{
							//primos[i]=0;
							flag1=true;
							//cout<<"pasa"<<endl;	
							//is_anagram=vector<int>(10,0);
							break;		
						}
					}
				}
				else
				{	
					if(primos[i]==2)
						is_anagram.push_back(2);
					if(primos[i]==5)
						is_anagram.push_back(5);
				}	
				//cout<<"pasa"<<endl;
				//primos[i]=remember;
				cout<<"is anagram 2 : ";
				for (vector<int>::const_iterator i = is_anagram.begin(); i != is_anagram.end(); ++i)
					cout << *i << ' ';
				cout<<endl;
				int count=0;
				if(flag1==false)//solo si no entro al else de arriba y puede ser anagramatico,paso el primer filtro
				{
					//cout<<"anagram size:"<<is_anagram.size()<<endl;
					//printf("is_anagram elements: [%d ,%d ,%d] \n",is_anagram[0],is_anagram[1],is_anagram[2]);
					//cout<<"is anagram : ";
					//for (vector<int>::const_iterator i = is_anagram.begin(); i != is_anagram.end(); ++i)
						//cout << *i << ' ';
					//cout<<endl;
					sort(is_anagram.begin(),is_anagram.end());
					
					do
					{		
						//for (vector<int>::const_iterator i = is_anagram.begin(); i != is_anagram.end(); ++i)
						//cout << *i << ' ';
						//cout<<endl;	
						//cout<<ans<<endl;
						for(int j=0;j<is_anagram.size();j++)
						{
							//printf("j is :%d\n",j);
							ans=10*ans;
							//printf("ans1 : %d\n",ans);	
							ans=ans+is_anagram[j];
							//cout<<"pass"<<endl;
						}
						//printf("ans : %d\n",ans);	
						if(isPrime[ans]==0)//una combinacion no es primo,el numero no es anagramatico
						{
							//cout<<"pass"<<endl;	
							//printf("ans2 : %d\n",ans);				
							flag=true;
							ans=0;
							break;
							//printf("%d %d\n",is_anagram[0],is_anagram[1]);
						}
						ans=0;//reiniciamos el valor de ans para cada nueva interaccion					
					}
					while(next_permutation(is_anagram.begin(),is_anagram.end()));	
					//printf("ans: %d   flag :%s \n",ans,flag ?"true" : "false");
					//count++;
					is_anagram.clear();
					if(flag==false)//that number is anagramatic
					{
						ans=remember;
						//printf("last ans:%d\n",ans);
						break;
					}
					
				}
				flag=false;
				flag1=false;//final de cada revision de cada numero
				//cout<<count<<endl;
			}
			//cout<<"pasa"<<endl;
			//final de todas la revisiones en el rango pedido
			//Aqui solo entrara si no se rompio el bucle
			//is_anagram.clear();
		}
		if(flag==false)
		{	
			printf("%d\n",ans);
			ans=0;
		}	
		else
		{	
			printf("0\n");
		}	
	}
}