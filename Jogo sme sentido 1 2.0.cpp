
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int  sala=1;
	int opcao;
	int c=0;
	int a=0;
	int decisao;
	int vida=2;
	int s=0;
	int b=0;
	int d=0;
	int f=3;
	
	
	printf("Acordas numa sala vazia sem nada,apenas com um monitor a frente.\n");
	puts("Ouves alguem a dizer: I WANT TO PLAY A GAME?");
	printf("\n");
	printf("\n");
	printf("\n");
while(1){

	
	switch(sala){
		
		case 1:
		
		   	printf("Oque queres fazer?\n");
			printf("1-Entrar na porta da direita\n");
			printf("2-Entrar na porta da frente\n");
			printf("3-Esperar que alguem apareca\n");
			printf("4-Entras em panico e tens um ataque cardiaco\n");
			scanf("%d", &opcao);
			if(opcao==1){sala=2;}
			if(opcao==2){ puts("A Porta abre-se e tu entras."); sala=3;} 
			if(opcao==3){printf("Ja tas a espera a %d horas, e ninguem apareceu\n",f);if(f>=43){printf("Estas a espera a muito tempo e morres\n");vida--;sala=7;} f=f+3;}
			if(opcao==4){ vida--; if(vida>-1){sala=7;}}
		    system ("pause");
		   
			
			break;
			
			case 2:
				printf("Entras na sala e ves que o chao e lava. oque fazes?\n ");
				printf("1-Esperas que uma aranha apareca para te tornares no homem-aranha\n");
				printf("2- Nadar na lava\n");
				printf("3- Voltar a tras\n");
				if(c>=1){puts("4-Pegar a chave que esta no chao por coincidencia");  }
				if(c>=2){puts("5-Aparece um portal no meio da lava onde nao sabes se vais sobreviver ou nao,  tenta pular.");}
	
				scanf("%d", &opcao);
				if(opcao==1){puts("Encontras uma aranha e deixas ela morder-te mas os teus sonhos sao iludidos por uma bd e tu morres."); vida--; if(vida>-1){sala=7;}}
				if(opcao==2){puts("Tentas-te nadar na lava mas descobres que  nao sabes nadar e assim morres."); vida--; if(vida>-1){sala=7;} }
				if(opcao==3){sala=1;}
				if(opcao==4){ if(c==1){puts("Apanhaste a chave");sala=2; }  if(c>=2){puts("Ja apanhas-te a chave");} c++; sala=2;}
				if(opcao==5){puts("Queres ir?"); puts("1-Sim"); puts("2-Nao"); scanf("%d",&opcao); if(opcao==1){sala=4;} if(opcao==2){sala=2;}}
				system ("pause");
				break;
			
				case 3:
			   		puts("Entras na sala e ves um dragao a dormir.");
			   			printf("Oque queres fazer?\n");
			   		puts("1-Tenta passar pelo dragao sem o acordar");
			   		puts("2-Pedes ao dragao para sair da frente");
			   		puts("3-Jogas um balde de agua para acordar o dragao");
			   		puts("4-Faz um churrasco.");
			   		puts("5-Voltar para tras");
			   		scanf("%d",&opcao);
					if(opcao==1){puts("Ao tentares passar por ele sem o acordar acabas por faze-lo e assim morres");vida--; if(vida>=-1){sala=7;}}
					if(opcao==2){puts("Ao pedires para o dragao sair da frente ele deixa-te passar e tu entras na outra sala"); (sala=8);  }
					if(opcao==3){puts("Jogas um balde de agua no dragao e ele nao acorda e assim tu atiras o balde no dragao mas como es um zarolho atiraste na parede e ele refletiu na tua cabeca e morreste"); vida--; if(vida>=-1){sala=7;}}
					if(opcao==4){puts("Ao fazeres o churrasco o dragao sente o cheiro e mata-te por ser vegetariano."); vida--; if(vida>=-1){sala=7;}}
					if(opcao==5){sala=1;}
					system("pause");
					break;
				case 4:
						puts("Chegas a ultima porta mas reparas que precisas de uma chave.");
							printf("Oque queres fazer?\n");
						puts("1-Abrir a porta");
						puts("2-Pegar o papel que esta no chao"); 	
						puts("3-Bates na Porta e esperas que alguem abra.");
						puts("4-Ir para Tras.");
						puts("5-Pular para o portal misterioso que pode te matar");
						scanf("%d",&opcao);
						if(opcao==1 && c>=2){puts("Ganhas-te"); system("pause");sala=5;}if(opcao==1 && c<2){puts("Porta trancada\n\nEncontra a chave"); system("pause"); sala=4; }system("cls");  
						if(opcao==2){ a++;  if(a==1){puts("Pegas o papel e ves uma mensagem a dizer."); puts("A Chave esta num lugar onde nao se pode andar"); system("pause"); c++; puts("Encontras-te o papel");} if(a>=2){puts("Ja encontras-te o papel."); system("pause"); puts("Queres ler a Pista outra vez?"); puts("1-Sim"); puts("2-Nao"); scanf("%d",&opcao); if(opcao==1){puts("A Chave esta num lugar onde o chao e muito quente");}system ("pause"); system("cls"); 	}}
						if(opcao==3){puts("Nao estas num filme de terror, para esperares que alguem te abra a porta"); system("pause"); sala=4;}
						if(opcao==4){sala=11;}
						if(opcao==5){puts("Nao existe portal otario.Tenta outro");system("pause");sala=4;}
						break;
				case 5:
				       puts("Gostas-te do jogo?");
					   puts("1-Sim");
					   puts("2-Nao");
					   scanf("%d", &decisao);
					   if(decisao==1){
					   	
					   	printf("parabens se livrou da surpresa\n");system ("cls");system("pause");
					   	printf("Muito obrigado por ter jogado o nosso jogo");
					   	system("pause");
					   	return 0;
					   	
					   }
					  else{
					   	
					   	puts("Perdeu playboy");
					   	system("pause");
					   	return 0;
					   }
					   		
				
			
				case 7:
					      system("pause");
					      system("cls");
					      puts("----------------------");
				          puts("      GAME OVER");
				          puts("----------------------");
				          system("pause");
				          system("cls");
				           c=0;
	                       a=0;
	                       s=0;
	                       b=0;
	                       f=3;
				          if(vida==1){printf("Tens %d vida\n",vida);puts("Queres continuar?");puts("1-Sim");puts("2-Nao");scanf("%d",&opcao);if(opcao==1){puts("Nao pediste com educacao por isso nao jogas mais!"); puts("Tenta ser mais educado da proxima vez!");return 0;}if(opcao==2){puts("AH! Nao queres jogar o meu jogo!");puts("Paciencia");system("pause");sala=1;}}
				          if(vida==0){printf("Tens %d vidas\n",vida);puts("Queres continuar?");puts("1-Sim");puts("2-Nao");scanf("%d",&opcao);if(opcao==1){puts("Nao pediste com educacao por isso nao jogas mais!"); puts("Tenta ser mais educado da proxima vez!");return 0;}if(opcao==2){puts("AH! Nao queres jogar o meu jogo!");puts("Paciencia");sala=1;}}
				          if(vida==-1){return 0;}
				          break;
				case 8:
				        if(s<3){printf("Entras no quarto , as portas fecham-se e ves, uns botoes com imagens.\n");printf("E ves escrito numa lapide: Clica num botao de cada vez pela ordem correta.\n");printf("1-Lava\n");printf("2-Dragao\n");printf("3-Duas portas\n");scanf("%d",&opcao);if(opcao==1){if(s==1){printf("Ouves outra vez um barulho\n");system("pause");system("cls");s++;sala=8;}if(s==0){printf("Uma porta se abre e aparece um cao.");printf("Tu vais ter com ele e ele lambete.");printf("E tu morres por ele ter veneno na boca.\n");system("pause");vida--;sala=7;}} if(opcao==2){if(s==2){printf("As portas abrem-se.\n");system("pause");system("cls");s++;sala=8;}if(s==0){printf("Cai um papel no chao e tu ves que e um papel de lotaria.");printf("Tu vais ter a uma papelaria e descobres que era falso."); printf("E acabas por morrer por teres ido a uma papelaria.\n");system("pause");system("cls");vida--; sala=7;}if(s==1){printf("Cai um papel no chao e tu ves que e um papel de lotaria.");printf("Tu vais ter a uma papelaria e descobres que era falso."); printf("E acabas por morrer por teres ido a uma papelaria.\n");system("pause");system("cls");vida--; sala=7;}} if(opcao==3){if(s==0){printf("Ouves um barulho\n");system("pause");system("cls");s++; sala=8;}if(s>0){printf("Já clicas-te\n");sala=8;}}}
						if(s==3){printf("Entras no quarto\n Oque queres fazer?\n"); printf("1-Ir para tras\n");printf("2-Ir para proxima sala\n");scanf("%d",&opcao);if(opcao==1){sala=3;}if(opcao==2){sala=9;}}
				        break;
				case 9:
				       printf("Entras na sala e encontras uma espada\n");
				       printf("Oque fazer?\n");
				       printf("1-Apanhar a espada\n");
				       printf("2-Dar um pontape na espada\n");
				       printf("3-Assoprar para a espada\n");
				       printf("4-Voltar atras\n");
					   scanf("%d",&opcao);
					   if(opcao==1){printf("Tu apanhas a espada mas ela parte-se.Como querias suicidar e nao podes,acabas por morrer\n");system("pause");vida--;sala=7;}
					   if(opcao==2){printf("Tu das um pontape na espada e ela parte-se e tu morres\n");system("pause"); sala=10;}
					   if(opcao==3){printf("Tu assopras e a espada vira po. Bem eu nao queria dizer mas...\n");system("pause");vida--;sala=7;}
					   if(opcao==4){sala=8;}
					   break;	
				case 10:	 
				       printf("ou nao. nos nao sabiamos oque fazer mais por isso. ");
					   printf("Parabens passas-te pela porta.");
					   printf("yheiiiii, otario.\n");
					   printf("Se quiser nos dar ideias ,envie-nos um email (aviso! nos nao iremos responder).\n");
					   system("pause");
					   system("cls");
					   sala=11;
					   break;  	     
				case 11:
				      	     
							if(d==0){printf("Entras na sala e encontras a pessoa que te prendeu.\n");printf("Oque fazes?\n");printf("1-Das um pontape no meio das pernas.\n");printf("2-Fugir.\n");printf("3-Ver o teu redor.\n");scanf("%d",&opcao); if(opcao==1){printf("Tu tentas mas nao consegues por isso tentas cuspir mas ele te apanha\n"); system("pause"); vida--; sala=7;}if(opcao==2){printf("Tu tentas fugir mas es apanhado pois o seu vilao e o aprendiz do Usain Bolt\n"); system("pause"); vida--; sala=7;}if(opcao==3){printf("Tu ves uma minigun na tua esquerda e um botao\n");system("pause");system("cls");printf("Qual queres?\n1-Apanhar Minigun\n2-Apertar Botao\n");scanf("%d",&b);if(b==1){printf("Tu tentas apanhar a minigun mas ela desaperece num passe de magica.\n");vida--;sala=7;}if(b==2){printf("Tu clicas no botao que esta conectado a um aparelho no coraçao do boss e ele faliceu.\n");d++;system("pause");system("cls");sala=11;}}}
				      	    if(d==1){printf("Entras na sala\n");printf("Oque queres fazer?\n");printf("1-Ir para a proxima sala\n");printf("2-ver o boss morto\n");printf("3-Ir para tras\n"); scanf("%d",&opcao);if(opcao==1){sala=4;}if(opcao==2){printf("Nao da para ver o boss porque o boss nao tem graficos otaro\nCompre uma placa grafica melhor\n");system("pause");sala=11;}if(opcao==3){sala=9;}}
				      	    break;
				      	     
				default:
				       
					   system("pause");
					   system("cls");
					   break;								
                   				   
				   
	             		 
		
	}
	
system("cls");
	
}

}

