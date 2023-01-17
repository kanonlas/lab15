	 for(int i = 0; i < N; i++){

		for(int j = 0; j < N; j++){
		if(d[j] < d[j+1]){
			T w = d[j];
              d[j] = d[j+1];
	          d[j+1] = w;
		}
		}
	    cout << "pass " << i << ":";
		for(int i = 0; i < N; i++) cout << d[i] << " ";
		cout << "\n";
	 }