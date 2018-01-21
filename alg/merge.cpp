
void merge(int A[], int low, int mid, int high) {
	int *B = new int[high - low +1];
	int i = low; int j = mid; int k=0;
	while(i < mid && j < high) {
		if (a[i] <= a[j]) {
			B[k++] = a[i++];
		}
		else {
			B[k++] = a[j++];
		}

	}
	while(i <= mid) B[k++] = A[i++];
	while(j <= high) B[k++] = A[j++];

	for(i = low, k=0; i <= high; i++) {
		A[i] = B[k++];
	}

}


