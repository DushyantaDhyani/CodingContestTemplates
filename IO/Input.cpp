void fastLongLongRead(long long *a){
	register char c=0;
	while(c<33){
		c=getchar_unlocked();
	}
	*a=0;
	while(c>33){
		*a=*a*10+(c-'0');
		c=getchar_unlocked();
	}
}
void fastLongRead(long *a){
	register char c=0;
	while(c<33){
		c=getchar_unlocked();
	}
	*a=0;
	while(c>33){
		*a=*a*10+(c-'0');
		c=getchar_unlocked();
	}
}
void fastLongLongRead(long long *a){
	register char c=0;
	while(c<33){
		c=getchar_unlocked();
	}
	*a=0;
	while(c>33){
		*a=*a*10+(c-'0');
		c=getchar_unlocked();
	}
}
