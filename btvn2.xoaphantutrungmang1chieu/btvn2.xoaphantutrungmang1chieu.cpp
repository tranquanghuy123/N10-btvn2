#include<iostream>
using namespace std;

//Ham nhap
void nhapmang(int arr[], int& n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu: a[" << i << "] = ";
		cin >> arr[i];
	}
}

void xuatmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Gia tri cua phan tu:";
		cout << "a[" << i << "] = " << arr[i] << endl;
	}
}

//Ham xoa phan tu tai vi tri bat ki
void xoa(int arr[], int& n, int vitri)
{

	for (int i = vitri + 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}
	n--;// so luong phan tu mang giam
}
//Ham xoa phan tu trung nhau
void xoaphantutrung(int arr[], int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				xoa(arr, n, j);
				i--;
			}
		}
	}
}

int main()
{
	int a[100];
	int n;
	cout << " Nhap so luong phan tu: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	xoaphantutrung(a, n);
	cout << "Mang sau khi xoa phan tu trung: " << endl;
	xuatmang(a, n);


	return 0;
}