#include <stdio.h>

int main(){
	//freopen("input.txt", "r" , stdin);
     printf(" nhap  thang a :");   
	int a;   // nhap num a
    scanf("%d", &a);
    printf(" nhap  ngay b :");
	int b;  //nhap num b
    scanf("%d", &b);
    int thu[7] = { 2 , 3, 4, 5, 6, 7, 8};
    int k;  
    int h;  // tong ngay hien tai
	for ( int i = 0; i < 7; i++) {
	 switch ( a) {
		case 1: 
		if ( b <= 31) {
			
			k = (b%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", b);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", b);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		break;
		case 2:
		 if ( b <= 28) {
			h = ((b+31));
			
			k = (h%7 )- 1;
			if ( k == i) {
				
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n");break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]);break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a);  break;
		} break;
		case 3:
		 if ( b <= 31) {
			h = b + 31 +28 ;

			k =  (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		} break;
		case 4: 
		if ( b <= 30) {
			h = ( b + 31 * 2 +28);
		
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n");break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		case 5: 
		if ( b <= 31) {
			h = ( b + 31 * 2 +28 + 30);
			
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n");break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]);break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		case 6: 
		if ( b <= 30) {
			h = ( b + 31*3 +28 + 30);
			
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		case 7:
		if ( b <= 31) {
			h = ( b + 31 * 3 +28 + 30*2);
		
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		case 8:
			if ( b <= 31) {
			h = ( b + 31 * 4 +28 + 30*2);
	
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		case 9:
			if ( b <= 30) {
			h = ( b + 31 * 5 +28 + 30*2);
		
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		case 10: 
			if ( b <= 31) {
			h = ( b + 31 * 5 +28 + 30*3);
		
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		break;
		case 11: 
			if ( b <= 30) {
			h = ( b + 31 * 6 +28 + 30*3);
		
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		break;
		case 12:
			if ( b <= 31) {
			h = ( b + 31 * 6 +28 + 30*4);
		
			k = (h%7) - 1;
			if ( k == i) {
				if ( i == 6) {
					printf (" ngay thu : %d trong nam \n", h);
					printf( " dang la chu nhat \n"); break;
				}
				else { 
				printf (" ngay thu : %d trong nam \n", h);
				printf( " dang la thu %d \n", thu[i]); break;
				}
			}
		} else 
		{  printf (" khong co ngay nay trong thang %d, vui long  nhap lai ngay \n", a); break;
		}
		 break;
		default : printf (" nhap lai thang"); break;
	}
}
   return 0;	
}
