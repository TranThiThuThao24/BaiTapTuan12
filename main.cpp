#include <iostream>
using namespace std;
void Mang(int a[], int n){
	for(int i = 1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void VunDong(int a[], int n, int i){
	int max = i;
	int trai = 2*i;
	int phai = 2*i+1;
	if(trai<= n && a[trai]> a[max]){
		max = trai;
	}
	if(phai <= n && a[phai]> a[max]){
		max = phai;
	}
	if(max != 1){
		int temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		cout<<" Trang thai sau khi doi: ";
		Mang(a,n);
		VunDong(a, n, max);
	}
}
void HeapSort(int a[], int n){
	cout<<"\nCac buoc tao max heap\n";
	for(int i = n/2; i>=1; i--){
		cout<<"\nVun dong tai Node "<<i<<endl;
		VunDong(a, n, i);
		cout<<"Trang thai hien tai: ";
		Mang(a, n);
	}
	cout<<"\nMax Heap thu duoc:\n";
	Mang(a, n);
	cout<<"\nCac buoc sap xep\n";
	for(int i = n; i >= 2; i--){
		int temp = a[i];
		a[1] = a[i];
		a[i] = temp;
		cout<<"\nDoi voi phan tu cuoi:\n";
		Mang(a, n);
		VunDong(a, i-1, 1);
		cout<<"Trang thai sau khi vun lai:\n";
		Mang(a, n);
	}
}
int main(){
	// cay trong slide
	int a[] = {0, 4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	int n1 = 10;
	cout<<"\nCay 1\n";
	cout<<"Trang thai ban dau\n";
	Mang(a, n1);
	HeapSort(a, n1);
	cout<<"\nKet qua cuoi:\n";
	Mang(a, n1);
	// cay 2 tren bang
	int b[] = {10, 11, 54, 32, 106, 38, 78, 203, 16, 84, 17, 39, 15};
	int n2 = 12;
	cout<<"\nCay 2\n";
	cout<<"\nTrang thai ban dau:\n";
	Mang(b, n2);
	HeapSort(b, n2);
	cout<<"\nKet qua cuoi:\n";
	Mang(b, n2);
	return 0;
}
























