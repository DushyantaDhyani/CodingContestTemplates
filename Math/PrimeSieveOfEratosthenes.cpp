//The following code is used for preprocessing to find prime numbers using the sieve of Eratosthenes
//For more details 
vector<int> Primes;
bool Flag[1000001];
void preprocess(){
	Flag[0]=Flag[1]=true;
	int limit=sqrt(1000001);
	int i=2,j;
	while(i<=limit){
		if(!Flag[i]){
			Primes.push_back(i);
			j=i*i;
			while(j<1000001){
				Flag[j]=true;
				j+=i;
			}	
		}
		i++;
	}
	while(i<1000001){
		if(!Flag[i]){
			Primes.push_back(i);
		}
		i++;
	}
}

