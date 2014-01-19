//Code for fast evaluation of a^b%c
long long powmod(long long base,long long power,long long mod){
	long long result=1;
	base%=mod;
	while(power>0){
		if(power & 1){
			result=(result*base)%mod;
		}
		base=(base*base)%mod;
		power>>=1;
	}
	return result;
}
