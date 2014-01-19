//Method For Fast Integer Writes
inline void fastWriteInt(int a)
{
	register char c;
	char snum[20];
	int i=0;
	do{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0){
		putchar_unlocked(snum[i--]);
	}
	putchar_unlocked('\n');
}
//Method For Fast Long Writes
inline void fastWriteLong(long a)
{
	register char c;
	char snum[70];
	int i=0;
	do{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0){
		putchar_unlocked(snum[i--]);
	}
	putchar_unlocked('\n');
}
//Method For Fast Long Long Writes
inline void fastWriteLong(long long a)
{
	register char c;
	char snum[70];
	int i=0;
	do{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0){
		putchar_unlocked(snum[i--]);
	}
	putchar_unlocked('\n');
}
