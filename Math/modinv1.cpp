// This code is used to evaluate the modulo multiplicative inverse using the fermat theorem
//For more details on modulo multiplicative inverse http://en.wikipedia.org/wiki/Modular_multiplicative_inverse
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
long long modInverse(long long a, long long m) {
    return powmod(a,m-2,m);
}
