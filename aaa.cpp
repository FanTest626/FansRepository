#include <iostream>
using namespace std;
class Box
{
   public:
   	int getMaxIndex(int* p,int start){
		int res=0;
		int temp=0;
		for(int i=start+1;i<sizeof(p)/sizeof(int);i++){
			if(p[i]>temp){
				temp=p[i];
				res=i;
			}
		}
		return res;
	}
};

int main(){
	int T;
	cin>>T;
	Box box;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		int *nums;
		for(int j=0;j<n;j++){
			int num;
			cin>>num;
			nums[j]=num;
		}
		int result=0;
		int flag=0;
		int end=nums[n-1];
		for(int k=0;k<n&&flag==0;k++){
			if(nums[k]>=nums[flag]&&k==n-1&&flag==0){
				result+=nums[flag]*(k-flag);
				flag=k;
				break;
			}else if(nums[k]<nums[flag]&&k==n-1&&flag==0){
				result+=nums[k]*k;
				flag=k;
				break;
			}else if(nums[k]>=nums[flag]&&k!=n-1&&flag==0){
				result+=nums[flag]*(k-flag);
				flag=k;
			}
		}
		
		return result;
	}	
}















