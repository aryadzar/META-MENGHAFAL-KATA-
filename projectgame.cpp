//program menghafal kata  
//kelompok 17
//NAMA ANGGOTA : 
//
//IMAM MUZAKKI (2217051)
//MUHAMMAD ARYA DZAKY ARENANTO (2217051007)

#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>
#define soal_pert 5


using namespace std;



void loading(){
	initscr();
	printw("\n\n\n\t\t\tLoading\n");
	printw("===============================================================================\n\n");
	
	for (int i=0;i<72;i++){
	mvprintw(5,i,">>>>>>>>");
	refresh();	
	Sleep(45);	
	}
	
	clear();
	endwin();		
}

void pilihanindo(){ 
	string jawab1;
	int tanya;
    string soal[5]={"Satu ribu, dua ribu, tiga ribu, empat biru",
	 "Kutuku butuh tubuhku, tapi tubuhku tak butuh kutuku", 
	 "Kucing kuningku, kencing di kunci-kunciku", 
	 "Dudung, ambilkan dandang di dinding dong, Dung!",
	 "Kelapa di Parut, Kepala di Garuk"};

	 
	 
	 for(int i=0;i<soal_pert ;i++){
	 ulang :
	system ("CLS");
	cout<<" Soal "<<i+1<<endl<<endl;
	 cout<<soal[i]<<endl<<endl;
	 cout<<"Anda Diberikan Waktu 5 detik untuk mengingat\n";
	 cout<<"\n\nSisa Waktu : ";
	 for (int j=5; j>=0 ; j--){
	 	cout<<j<<"   ";
	 	Sleep(1000);
	 }
	 system("CLS");
	 cout<<" Apa Kata Tadi yang Barusan diberikan : ";
	 getline(cin,jawab1);
    
     if (jawab1==soal[i]){
     	if(i==4){
     		system("CLS");
     		cout<<" Wow, Anda selesai, SEMANGATTTTT !!!!!!";
     		system("pause");
		 }else{
		 
		 
     	cout<<" Selamat Jawaban Anda Benar, Silahkan Lanjutkan "<<endl;
     	system("pause");
		}
	 }else{
	 	cout<<" Anda Salah Silahkan Ulangi Lagi"<<endl;
	 	system ("pause");
	 	goto ulang;
	}	 
	
}


}

void pilihaning(){
	string soalbing[5]={"Can you can a can as a canner can can a can",
	"Tom threw Tim three thumbtacks",
	"I saw Suzie sitting in a shoeshine shop",
	"You know New York, you need New York, you know you need unique New York",
	"If two witches would watch two watches, which witch would watch which watch?"};
	string jawab5;
	char ans2;
	for(int i=0;i<soal_pert ;i++){
	 ulang1 :
	system ("CLS");
	cout<<" Exercise "<<i+1<<endl<<endl;
	 cout<<soalbing[i]<<endl<<endl;
	 cout<<"you are given time in 5 seconds, HURRY !!!!!\n";
	 cout<<"\n\nTime Remaining : ";
	 for (int j=5; j>=0 ; j--){
	 	cout<<j<<"   ";
	 	Sleep(1000);
	 }
	 system("CLS");
	 cout<<" what is the phareses given previous ?\n ";
	 getline(cin,jawab5);
    
     if (jawab5==soalbing[i]){
     	if(i==4){
     		system("CLS");
     		cout<<" WOW, YOU ARE ABLE TO COMPLETE THIS CHALLANGE, GIVE APPLAUSE !!!!!";
     		system("pause");
		 }else{
		 
		 
     	cout<<" CONGRATULATION, YOUR ANSWER IS CORRECT "<<endl<<endl;
     	system("pause");
		}
	 }else{
	 	cout<<"YOUR ANSWER IS INCORRECT, REPEAT AGAIN ! "<<endl;
	 	system ("pause");
	 	goto ulang1;
	}	 

}

}


void awal(){
   loading();
   system("CLS");
   cout<<"\n\n\n\t\t\t Selamat datang Di Game\n\n\n\n";
   cout<<"\t\t\t ||\\ /||   ||=====    ======     // \\\\ \n";
   cout<<"\t\t\t ||\\ /||   ||=====      ||      //== \\\\ \n";
   cout<<"\t\t\t ||\\ /||   ||=====      ||     //     \\\\ \n\n";
   cout<<"\t\t\tMenghafal Kata\n";
   system("pause");
 
}


int main(){
char ans,ans1;
awal();
do{
	system("CLS");
cout<<"apakah anda ingin lanjut ? (Y/y dan N/n)\n";
cin>>ans;
if (ans=='Y'|| ans=='y'){
	system ("CLS");
	char ans1;
	do {
	system("CLS");
      cout<<" Soal Apakah Yang Anda Inginkan Bahasa Inggris Atau Bahasa Indonesia : (I/i = inggris ; D/d = Bahasa Indonesia\n";
      cin>>ans;
      
      if(ans=='I'|| ans=='i'){
      	pilihaning();
	  }else if (ans=='D'||ans=='d')
	  	pilihanindo();
	  }while (ans!='I'&&ans1!='i'&&ans!='D'&&ans!='d');
	}
else if(ans=='N'||ans=='n'){
	system("CLS");
	cout<<" Terima Kasih :') ";
	return 0;

}
}while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n');

char jawab10;
do {

	system("CLS");
	cout<<"SELAMAT ANDA TELAH MENYELESAIKAN PERMAINNAN INI, APAKAH ANDA INGIN BERMAIN LAGI ? (y/n)\n";
	cin>>jawab10;
	if (jawab10=='y'){

	do {
		system("CLS");
     cout<<" Soal Apakah Yang Anda Inginkan Bahasa Inggris Atau Bahasa Indonesia : (I/i = inggris ; D/d = Bahasa Indonesia\n";
      if(jawab10=='I'|| jawab10=='i'){
      	pilihaning();
	  }else if(jawab10=='D'||jawab10=='d'){
	  	pilihanindo();
	  }
}while (jawab10!='I'&&jawab10!='i'&&jawab10!='D'&&jawab10!='d');
}else if (jawab10=='n'){
	system("exit");
}
}while (jawab10 !='y' && jawab10 !='n');



return 0;
}
