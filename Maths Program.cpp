#include <stdio.h>
#include <math.h>

float fact(float n) {
    if (n==0) return 1;
    else return n*fact(n-1);
}

float nCr(float n,float r) {
	return fact(n)/(fact(r)*fact(n-r));
}

float nPr (float n,float r) {
	return fact(n)/(fact(n-r));
}

float power(float a,float b) {
    if (b != 0) return (a*power(a,b-1));
    else return 1;
}

int main() {
	printf("\t==========================\n"); 
	printf("\t|| SIMPLE MATHS PROGRAM ||\n");
	printf("\t==========================\n");
	printf("1. Simple Calculation Program\n");
	printf("2. Simple Statistic Program\n");
	printf("3. Simple Combination and Permutation Program\n");
	printf("4. 3 Equations System Solver\n");
	printf("5. Simple Matrix Program\n");
	int pilihan;
	do {
		printf("\nEnter your choice : ");
		scanf("%d",&pilihan);
		switch (pilihan) {
			case (1): {
				printf("\nGuide : Enter your choice and press zero to return to main options.\n");
				printf("1. Derivative of a trinomial\n");
				printf("2. Integral of a trinomial\n");
				printf("3. Addition of two numbers\n");
				printf("4. Subtraction of two numbers\n");
				printf("5. Multiplication of two numbers\n");
				printf("6. Division of two numbers\n");
				printf("7. Modulo of two numbers\n");
				printf("8. Factorial of a number\n");
				printf("9. Factors of a number\n");
				printf("10. Exponent\n");
				printf("11. Square root\n");
				printf("12. Logarithm\n");
				printf("13. Sin, Cos, and Tan value\n");
				printf("14. Length of a right triangle (Pythagoras)\n");
				int choose;
				do {
					printf("\nPlease enter your choice : ");
					scanf("%d",&choose);
					switch (choose) {
						case(1): {
							int coef1,exp1,coef2,exp2,coef3,exp3;
							printf("Enter the first coefficient : ");
							scanf("%d",&coef1);
							printf("Enter the first exponent : ");
							scanf("%d",&exp1);
							printf("Enter the second coefficient : ");
							scanf("%d",&coef2);
							printf("Enter the second exponent : ");
							scanf("%d",&exp2);
							printf("Enter the third coefficient : ");
							scanf("%d",&coef3);
							printf("Enter the third exponent : ");
							scanf("%d",&exp3);
							printf("The equation you entered : %dx^%d+%dx^%d+%dx^%d\n",coef1,exp1,coef2,exp2,coef3,exp3);
							coef1*=exp1,exp1--,coef2*=exp2,exp2--,coef3*=exp3,exp3--;
							printf("Derivative of the equation is : %dx^%d+%dx^%d+%dx^%d\n",coef1,exp1,coef2,exp2,coef3,exp3);
							break;
						}
						case (2): {
							float coef1,exp1,coef2,exp2,coef3,exp3;
							printf("Enter the first coefficient : ");
							scanf("%f",&coef1);
							printf("Enter the first exponent : ");
							scanf("%f",&exp1);
							printf("Enter the second coefficient : ");
							scanf("%f",&coef2);
							printf("Enter the second exponent : ");
							scanf("%f",&exp2);
							printf("Enter the third coefficient : ");
							scanf("%f",&coef3);
							printf("Enter the third exponent : ");
							scanf("%f",&exp3);
							printf("The equation you entered : %.0fx^%.0f+%.0fx^%.0f+%.0fx^%.0f\n",coef1,exp1,coef2,exp2,coef3,exp3);
							exp1++,coef1/=exp1,exp2++,coef2/=exp2,exp3++,coef3/=exp3;
							printf("Integral of the equation is : %.2fx^%.0f+%.2fx^%.0f+%.2fx^%.0f+C\n",coef1,exp1,coef2,exp2,coef3,exp3);
							break;
						}
						case(3): {
							float a,b;
							printf("Enter first number and second number respectively: ");
							scanf("%f %f",&a,&b);
							printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);
							break;
						}
						case(4): {
							float a,b;
							printf("Enter first number and second number respectively: ");
							scanf("%f %f",&a,&b);
							printf("%.2lf - %.2lf = %.2lf\n",a,b,a-b);
							break;
						}
						case(5): {
							float a,b;
							printf("Enter first number and second number respectively: ");
							scanf("%f %f",&a,&b);
							printf("%.2lf x %.2lf = %.2lf\n",a,b,a*b);
							break;
						}
						case(6): {
							float a,b;
							printf("Enter first number and second number respectively: ");
							scanf("%f %f",&a,&b);
							printf("%.2lf / %.2lf = %.2lf\n",a,b,a/b);
							break;
						}
						case(7): {
							int a,b;
							printf("Enter first number and second number respectively: ");
							scanf("%d %d",&a,&b);
							printf("%d %% %d = %d\n",a,b,a%b);
							break;
						}
						case(8): {
							float a;
							printf("Enter a number : ");
							scanf("%f",&a);
							printf("%.0f! = %.0f\n",a,fact(a));
							break;
						}
						case(9): {
							int a,i;
							printf("Enter a number : ");
							scanf("%d",&a);
							printf("Factors of %d : ",a);
							for (i=1;i<=a;i++) {
								if(a%i==0) printf("%d ",i);
							}
							printf("\n");
							break;
						}
						case(10): {
							float a,b;
							printf("Enter the base : ");
							scanf("%f",&a);
							printf("Enter the exponent : ");
							scanf("%f",&b);
							printf("%.2lf^%.2lf = %.2lf\n",a,b,power(a,b));
							break;
						}
						case(11): {
							float a;
							printf("Enter a number : ");
							scanf("%f",&a);
							printf("Square root of %.2lf = %.2lf\n",a,sqrt(a));
							break;
						}
						case(12): {
							float a,b;
							printf("Enter the base : ");
							scanf("%f",&a);
							printf("Enter a number : ");
							scanf("%f",&b);
							printf("Base %.2lf logarithm value of %.2lf = %.2lf\n",a,b,(log10(b)/log10(a)));
							break;
						}
						case(13): {
							float s;
							printf("Enter the degree in radian : ");
							scanf("%f",&s);
							printf("Sin(%.2lf) : %.2lf\n",s,sin(s));
							printf("Cos(%.2lf) : %.2lf\n",s,cos(s));
							printf("Tan(%.2lf) : %.2lf\n",s,(sin(s)/cos(s)));
							break;
						}
						case(14): {
							printf("This program allows you to get the length of one side of a right triangle.\n");
							int a; float b,c,d,e=2,f,g,temp;
							printf("What are you searching for?\n1.Hypotenuse\n2.Adjacent/Opposite side\n");
							printf("Answer : ");
							scanf("%d",&a);
							if (a==1) {
								printf("Enter the length of the adjacent and opposite side\n");
								printf("Adjacent : ");
								scanf("%f",&b);
								printf("Opposite : ");
								scanf("%f",&c);
								printf("Hypotenuse = %.2lf\n",sqrt(power(b,e)+power(c,e)));
							}
							else {
								printf("Enter the length of the hypotenuse and opposite/adjacent side\n");
								printf("Hypotenuse : ");
								scanf("%f",&f);
								printf("Opposite/Adjacent : ");
								scanf("%f",&g);
								if (f<g) {
									printf("Hypotenuse must be the longest side.\n");
								}
								else printf("Adjacent/Hypotenuse = %.2lf\n",sqrt(power(f,e)-power(g,e)));
							}
							break;
						}
						default: {
						 	if(choose==0) {
			     				printf("\nReturned to main options.\n");
							}
							else printf("\n%d is not a valid choice. Try again.\n", choose);
							break;
						}
					}
				} while (choose!=0||(choose>=1&&choose<=14));
				break;
			}
			case (2): {
				int n,a[1000],i,j;
			    printf("\nPlease input the number of elements : ");
			    scanf("%d",&n);
			    for(i=0;i<n;i++) {
			        printf("Element %d: ",i+1);
			        scanf("%d",&a[i]);        
			    }
			    getchar();
			    printf("Successfully created an array!\nPress enter to continue");
			    getchar();
				for(i=0;i<n-1;i++) {
					for(j=0; j<n-i-1; j++) {
						if(a[j]>a[j+1]) {
							int temp=0;
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
					}                                                 
			    }
			    printf("\nGuide : Enter your choice and press zero to return to main options.\n");
			    printf("1. Find the mode, mean, and range of the array\n");
				printf("2. Print the odd elements from the array\n");
				printf("3. Print the even elements from the array\n");
				printf("4. Print the prime numbers from the array\n");
				printf("5. Find the median of the array\n");
				printf("6. Print sorted array\n");
				int choice;
				do {		
					printf("\n\nPlease enter your choice: ");
			    	scanf("%d",&choice);
					switch (choice) {
			    		case(1): {
			    			int similarity[1000];
			    			for(i=0;i<n;i++) {
			    				similarity[i]=0;
							}
							for(i=0;i<n;i++) {
								for(j=i+1;j<n;j++) {
									if(a[i]==a[j]) {
									similarity[i]++;
									}
								}
							}
							int mode=0;
							for(i=0;i<n;i++) {
								mode=(mode>=similarity[i]?mode:similarity[i]);
							}
							printf("Mode : ");
							for(i=0;i<n;i++) {
								if (similarity[i]==mode) {
									printf("%d ",a[i]);
								}
							}
							double mean,sum=0;
							for(i=0;i<n;i++) {
			  					sum+=a[i];
							}
							mean=sum/n;
							printf("\nMean : %.2lf",mean);
							printf("\nRange : %d", a[n-1]-a[0]);
							break;
						}
						case(2): {
							printf("Odd Numbers : ");
							int v[1000]={0};
			 				for(int i=0;i<n;i++) {
			    				if(a[i]%2!=0&&v[a[i]]==0) {
			      					printf("%d ",a[i]);
			      					v[a[i]]=1;
			    				}
			  				}
			  				break;
						}
						case(3): {
							printf("Even Numbers : ");
							int v[1000]={0};
			  				for(i=0;i<n;i++) {
			    				if(a[i]%2==0 && v[a[i]]==0) {
			      					printf("%d ",a[i]);
			      					v[a[i]]=1;
			    				}
							}
							break;
						}
						case(4): {
							int ctr=0,t=0,prime[100],v[1000]={0};
							for(i=0;i<n;i++) {
								ctr=0;
			        			for(j=2;j<a[i];j++) {
			            			if(a[i]%j==0) {
			                		ctr=1;
			                		break;
			            			}
			        			}				
			        			if(ctr==0&&v[a[i]]==0) {
			        				if(a[i]!=1) {
			            				prime[t]=a[i];
			            				v[a[i]]=1;
			            				t++;
									}
			        			}
			    			}
							printf("Prime Numbers : ");
			     			for(i=0;i<t;i++) {
			          			printf("%d ",prime[i]);
			     			}
			     			break;
						}
			     		case(5): {
			     			float median;
			    			if(n%2==0) {
			    				median=(float) (a[(n-1)/2] + a[n/2])/2;
							}
							else {
								median=a[n/2];
							}
			     			printf("Median : %.2lf",median);
			     			break;
			     		}
			     		case(6): {
			     			for(i=0;i<n;i++) {
			     				printf("%d ",a[i]);
							}
							break;
						}
			     		default: {
			     			if(choice==0) {
			     				printf("\nReturned to main options.\n");
							}
			     			else printf("\n%d is not a valid choice. Try again.\n", choice);
							break;
						}		
					}
				} while (choice!=0||(choice>=1&&choice<=6));
				break;
			}
			case(3): {
				printf("\nGuide : Enter your choice and press zero to return to main options.\n");
				printf("1. Combination Calculator\n");
				printf("2. Permutation Calculator\n");
				printf("3. Binomial Probabilty Calculator\n");
				printf("4. Printing Pascal Triangle\n");
				int option;
				do {
					printf("\nPlease enter your choice : ");
					scanf("%d",&option);
					switch (option) {
						case(1): {
							printf(">>nCr\nEnter value of n and r respectively : ");
							float n,r;
							scanf("%f %f",&n,&r);
							printf("%.0fC%.0f = %.0f\n",n,r,nCr(n,r));
							break;
						}
						case (2): {
							printf(">>nPr\nEnter value of n and r respectively : ");
							float n,r;
							scanf("%f %f",&n,&r);
							printf("%.0fP%.0f = %.0f\n",n,r,nPr(n,r));
							break;
						}
						case(3): {
							printf("This program will allow you to find the binomial probability of an event happening at least ... amount of times\n");
							printf("and also the number of possible arrangement of that event.\n");
							printf("Remember that binomial means that there are only two possible outcome produced by the attempts, for example win or lose.\n");
							float i,j;
    						printf("Number of attempt(s) : ");
    						scanf("%f",&i);
    						printf("Minimal amount of times an event is happening : ");
    						scanf("%f",&j);
    						float a;
    						printf("Probability of the event to be successful : ");
    						scanf("%f",&a);
    						float res = 0;
    						int k=j-1;
    						while (k>=0) {
        						res+=nCr(i,k)*power(a,k)*power((1-a),(i-k));
        						k--;
    						}
    						printf("The probability of an event happening at least %.0f times from %.0f attempts is %.4lf\n",j,i,1-res);
    						float b=2,l=0;
    						int n=j-1;
    						float total = power(b,i);
    						while (n>=0) {
        						l+=nCr(i,n);
        						n--;
    						}
    						printf("There are %.0f possible arrangement of the event.\n",total-l);
							break;
						}
						case(4): {
							float n;
							printf("Enter number of rows : ");
							scanf("%f",&n);
							float i,j,k;
							for(i=0;i<n;i++) {
								for(j=0;j<n-i;j++) {
									printf(" ");
								}
								for(k=0;k<=i;k++) {
									printf("%.0f ",nCr(i,k));
								}
								printf("\n");
							}
							break;
						}
						default: {
						 	if(option==0) {
			     				printf("\nReturned to main options.\n");
							}
							else printf("\n%d is not a valid choice. Try again.\n", option);
							break;
						}
					}
				} while (option!=0||(option>=1&&option<=4));
				break;
			}
			case(4): {
				float b[3][4],t;
				int i,j,k,l;
    			float x1,x2,x3,y1,y2,y3,z1,z2,z3,b1,b2,b3;
    			printf("\nPlease input 3 equations with the following format: \n");
				printf("...x+...y+...z=...\n");
    			printf("Note : If the value is 0 or 1 or minus, please write that.\nFor example : 0x+-2y+3z=-4\n");
				scanf("%fx+%fy+%fz=%f",&x1,&y1,&z1,&b1);
    			scanf("%fx+%fy+%fz=%f",&x2,&y2,&z2,&b2);
    			scanf("%fx+%fy+%fz=%f",&x3,&y3,&z3,&b3);
    			b[0][0]=x1;b[0][1]=y1;b[0][2]=z1;b[0][3]=b1;
    			b[1][0]=x2;b[1][1]=y2;b[1][2]=z2;b[1][3]=b2;
    			b[2][0]=x3;b[2][1]=y3;b[2][2]=z3;b[2][3]=b3;
    			//menggunakan metode eliminasi Gauss-Jordan
    			//dimana matriks diubah menjadi matriks identitas
    			if ((b[0][0]==0&&b[1][0]==0&&b[2][0]==0)||(b[0][1]==0&&b[1][1]==0&&b[2][1]==0)||b[0][3]==0&&b[1][3]==0&&b[2][3]==0) {
    				printf("The equations you entered are two-variable system of equations.\n");
				}
				//jika pada diagonal nilai = 0
				//ditukar dengan baris lain
				else {
					if(b[0][0]==0) {
						if (b[1][0]!=0) {
							for(i=0;i<4;i++) {
								float temp;
								temp=b[0][i];
								b[0][i]=b[1][i];
								b[1][i]=temp;
							}
						}
						else if (b[2][0]!=0) {
							for(i=0;i<4;i++) {
								float temp;
								temp=b[0][i];
								b[0][i]=b[2][i];
								b[2][i]=temp;
							}
						}
					}
					if (b[1][1]==0) {
						if (b[0][1]!=0) {
							for(i=0;i<4;i++) {
								float temp;
								temp=b[1][i];
								b[1][i]=b[0][i];
								b[0][i]=temp;
							}
						}
						else if (b[2][1]!=0) {
							for(i=0;i<4;i++) {
								float temp;
								temp=b[1][i];
								b[1][i]=b[2][i];
								b[2][i]=temp;
							}
						}
					}
					if (b[2][2]==0) {
						if (b[0][2]!=0) {
							for(i=0;i<4;i++) {
								float temp;
								temp=b[2][i];
								b[2][i]=b[0][i];
								b[0][i]=temp;
							}
						}
						else if (b[1][2]!=0) {
							for(i=0;i<4;i++) {
								float temp;
								temp=b[2][i];
								b[2][i]=b[1][i];
								b[1][i]=temp;
							}
						}
					}
					for(i=0;i<3;i++) {
        				float div=b[i][i];
						for (j=0;j<4;j++) {
		    				b[i][j]/=div; //untuk membagi baris dengan nilai matriks pada a[i][i] atau diagonal
		                     			 //agar nilai diagonal menjadi 1
						}
						for(k=0;k<3;k++) {
            				if(i!=k) {
		        				t=b[k][i];
		        				for(l=0;l<4;l++) {
		        					b[k][l]=b[k][l]-(b[i][l]*t); //untuk meng-nolkan nilai selain diagonal menjadi 0
								}
		        			}
						}
					}
					printf("Solution for x : %.2lf\n",b[0][3]);
    				printf("Solution for y : %.2lf\n",b[1][3]);
					printf("Solution for z : %.2lf\n",b[2][3]);
				}
				break;
				case(5): {
					printf("\nGuide : Enter your choice and press zero to return to main options.\n");
					printf("1. Addition of two matrices\n");
					printf("2. Subtraction of two matrices\n");
					printf("3. Multiplication of two matrices\n");
					printf("4. Multiply a matrix with a constant\n");
					printf("5. Transpose of a matrix\n");
					printf("6. Inverse of a 2x2 matrix\n");
					printf("7. Inverse of a 3x3 matrix\n");
					int pilih;
					do {
						printf("\nPlease enter your choice : ");
						scanf("%d",&pilih);
						switch (pilih) {
							case(1): {
								int i,j,k,l; float a[20][20],b[20][20],c[20][20];
								printf("Enter the number of rows and columns of both of the matrix: ");
								scanf("%d %d",&i,&j);
								printf("First Matrix : \n");
								for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("a[%d][%d] : ",k,l);
            							scanf("%f",&a[k][l]);
        							}
    							}
    							printf("Second Matrix : \n");
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("b[%d][%d] : ",k,l);
            							scanf("%f",&b[k][l]);
        							}
    							}
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							c[k][l]=a[k][l]+b[k][l];
        							}
    							}
    							printf("Addition of two matrices : \n");
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("%.2lf  ",c[k][l]);
        							}
        							printf("\n");
    							}
								break;
							}
							case(2): {
								int i,j,k,l; float a[20][20],b[20][20],c[20][20];
								printf("Enter the number of rows and columns of both of the matrix: ");
								scanf("%d %d",&i,&j);
								printf("First Matrix : \n");
								for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("a[%d][%d] : ",k,l);
            							scanf("%f",&a[k][l]);
        							}
    							}
    							printf("Second Matrix : \n");
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("b[%d][%d] : ",k,l);
            							scanf("%f",&b[k][l]);
        							}
    							}
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							c[k][l]=a[k][l]-b[k][l];
        							}
    							}
    							printf("Subtraction of two matrices : \n");
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("%.2lf  ",c[k][l]);
        							}
        							printf("\n");
    							}
								break;
							}
							case(3): {
								int i,j,k,l,m,n; float a[20][20],b[20][20],c[20][20];
								printf("Enter the number of rows and columns of the first matrix: ");
    							scanf("%d %d",&i,&j);
    							printf("First Matrix : \n");
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("a[%d][%d] : ",k,l);
            							scanf("%f",&a[k][l]);
        							}
    							}
    							printf("Enter the number of rows and columns of the second matrix: \n");
    							scanf("%d %d",&m,&n);
    							if(j!=m) printf("Matrices can't be multiplied with each other.\n");
    							else {
    								printf("Second Matrix : \n");
    								for(k=0;k<i;k++) {
        								for(l=0;l<j;l++) {
            								printf("b[%d][%d] : ",k,l);
            								scanf("%f",&b[k][l]);
        								}
    								}
    								int o,sum=0;
    								for(k=0;k<i;k++) {
            							for(l=0;l<n;l++) {
                							for(o=0;o<m;o++) {
                    							sum+=a[k][o]*b[o][l];
                							}
            								c[k][l]=sum;
            								sum=0;
            							}
        							}
        							printf("The multiplication of two matrices : \n");
        							for(k=0;k<i;k++) {
        								for(l=0;l<n;l++) {
            								printf("%.2lf  ",c[k][l]);
        								}
        								printf("\n");
    								}
								}
								break;
							}
							case(4): {
								int i,j,k,l,m; float a[20][20];
								printf("Enter the number of rows and columns of the matrix: ");
    							scanf("%d %d",&i,&j);
								for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("a[%d][%d] : ",k,l);
            							scanf("%f",&a[k][l]);
        							}
    							}
    							printf("Enter the value of the constant : ");
    							scanf("%d",&m);
    							for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							a[k][l]*=m;
        							}
    							}
    							printf("Result of scalar matrix multiplication by %d : \n",m);
    							for(k=0;k<j;k++) {
        							for(l=0;l<i;l++) {
            							printf("%.2lf  ",a[k][l]);
        							}
        							printf("\n");
    							}
								break;
							}
							case(5): {
								int i,j,k,l,m; float a[20][20],b[20][20];
								printf("Enter the number of rows and columns of the matrix: ");
    							scanf("%d %d",&i,&j);
								for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							printf("a[%d][%d] : ",k,l);
            							scanf("%f",&a[k][l]);
        							}
    							}
								for(k=0;k<i;k++) {
        							for(l=0;l<j;l++) {
            							b[l][k]=a[k][l];
        							}
    							}
    							printf("\nTranspose of the matrix: \n");
    							for(k=0;k<j;k++) {
        							for(l=0;l<i;l++) {
            							printf("%.2lf  ",b[k][l]);
        							}
        							printf("\n");
    							}
								break;
							}
							case(6): {
								int j,k; float x[2][2];
								for(j=0;j<2;j++) {
        							for(k=0;k<2;k++) {
            							printf("a[%d][%d] : ",j,k);
            							scanf("%f",&x[j][k]);
        							}
    							}
    							printf("The matrix you inputted : \n");
    							for(j=0;j<2;j++) {
        							for(k=0;k<2;k++) {
            							printf("%.2lf  ",x[j][k]);
        							}
        							printf("\n");
    							}
    							float a,b,c,d;
    							a=x[0][0];b=x[0][1];
    							c=x[1][0];d=x[1][1];
    							float det=a*d-b*c;
    							x[0][0]=d;x[0][1]*=-1;x[1][0]*=-1;x[1][1]=a;
    							if (det==0) printf("The matrix you inputted is a singular matrix (doesn't have an inverse matrix)\n");
    							else {
    								for(j=0;j<2;j++) {
        								for(k=0;k<2;k++) {
            								x[j][k]/=det;
        								}
    								}
    								printf("Inverse of the inputted matrix : \n");
    								for(j=0;j<2;j++) {
        								for(k=0;k<2;k++) {
            								printf("%.2lf  ",x[j][k]);
        								}
        								printf("\n");
    								}
								}
								break;
							}
							case(7): {
								int j,k; float x[3][3];
								for(j=0;j<3;j++) {
        							for(k=0;k<3;k++) {
            							printf("a[%d][%d] : ",j,k);
            							scanf("%f",&x[j][k]);
        							}
    							}
    							printf("The matrix you inputted : \n");
    							for(j=0;j<3;j++) {
        							for(k=0;k<3;k++) {
            							printf("%.2lf  ",x[j][k]);
        							}
        							printf("\n");
    							}
    							float a,b,c,d,e,f,g,h,i;
    							a=x[0][0];b=x[0][1];c=x[0][2];
    							d=x[1][0];e=x[1][1];f=x[1][2];
    							g=x[2][0];h=x[2][1];i=x[2][2];
    							float det=a*e*i+b*f*g+c*d*h-g*e*c-h*f*a-i*d*b;
    							x[0][0]=e*i-f*h;x[0][1]=c*h-b*i;x[0][2]=b*f-c*e;
    							x[1][0]=f*g-d*i;x[1][1]=a*i-g*c;x[1][2]=c*d-a*f;
    							x[2][0]=d*h-g*e;x[2][1]=b*g-a*h;x[2][2]=a*e-d*b;
    							if(det==0) printf("The matrix you inputted is a singular matrix (doesn't have an inverse matrix)\n");
    							else {
    								for(j=0;j<3;j++) {
        								for(k=0;k<3;k++) {
            								x[j][k]/=det;
        								}
    								}
    								printf("Inverse of the inputted matrix : \n");
    								for(j=0;j<3;j++) {
        								for(k=0;k<3;k++) {
            								printf("%.2lf  ",x[j][k]);
        								}
        								printf("\n");
    								}
								}
								break;
							}
							default: {
						 		if(pilih==0) {
			     					printf("\nReturned to main options.\n");
								}
								else printf("\n%d is not a valid choice. Try again.\n", pilih);
								break;
							}
						}
					} while (pilih!=0||(pilih>=1&&pilih<=7));
					break;
				}
			default:
			    if(pilihan==0) {
			     	printf("\nProgram ends.\n");
				}
				else printf("\n%d is not a valid choice. Try again.\n", pilihan);
				break;
			}
		}
	} while (pilihan!=0||(pilihan>=1&&pilihan<=5));
	return 0;
}
