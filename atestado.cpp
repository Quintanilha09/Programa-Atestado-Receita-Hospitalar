#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
	main()
	{
     setlocale(LC_ALL, "Portuguese");
    
    float cpf; 
    int nascimento, receitas;
    int opcao, crmMedico, dataConsulta, opcaoEnvio, opcaoEnviorec;
	char nomePaciente[50], nomeHospital[50];

    /*PARTE DO LOGIN*/
    
    
    printf("______________________________\n");
    printf("DIGITE SEU CPF: ");
    scanf("%f", &cpf);

    printf("DIGITE SUA DATA DE NASCIMENTO: ");
    scanf("%i", &nascimento);
    printf("______________________________\n\n");
    
    while ((cpf != 40028922) || (nascimento != 25092002)){
    	
    	printf("Usuário ou senha incorretos. Tente novamente.\n");
    	
    	printf("______________________________\n");
    	printf("LOGIN\n\n");

    	printf("DIGITE SEU CPF: ");
    	scanf("%f", &cpf);

    	printf("DIGITE SUA DATA DE NASCIMENTO: ");
    	scanf("%i", &nascimento);
    	printf("______________________________\n\n");
    	
	}
    
    

    /*DENTRO DESSE IF VAI AS OPÇÕES DE LOGIN*/
    if((cpf == 40028922) && (nascimento == 25092002))
    {
        printf("SEJA BEM-VINDO FULANO!");

        /*PARTE DAS OPÇÕES*/
        printf("\nOPÇÕES\n");
        printf("[1] Resgatar Atestado\n");
	    printf("[2] Receita\n");
	    printf("Escolha uma das opcoes: ");
        scanf(" %i", &opcao);

        switch (opcao)
        {
	        case 1:
	        	/* Coleta de dados para a declaração do atestado */
				printf("Nome: ");
        		setbuf(stdin, 0);
    			fgets(nomePaciente, 50, stdin);
    			
	    		printf("Digite seu e-mail: ");
	    		char email[60];
		    	fgets(email, 60, stdin);
		    	
		    	printf("Insira o CRM do medico: ");
		    	scanf("%i", &crmMedico);
		    	
		    	printf("Data da Consulta (DDMMAAA): ");
		    	scanf("%i", &dataConsulta);
		    	
		    	printf("Nome do Hospital: ");
		    	setbuf(stdin, 0);
		   		fgets(nomeHospital, 50, stdin);
		    
		     	/*Declaração de atestado*/
			 if (opcao == 1)
            {	
                printf("__________________________________________________\n");
                printf("**************************\nDECLARAÇÃO DE ATESTADO\n**************************\n");
                printf("Hospital: %s", nomeHospital);
                printf("__________________________________________________\n");
	            printf("Declaro que %s\n", nomePaciente);
	            
	            printf("Inscrito no CPF sob o nº %.0f\n", cpf);
	            printf("____________________________________________________________________________\n");
                printf("Não se encontra em condições para o trabalho e estudos, por motivo de doença.\nDevendo seu afastamento ser considerado de ");
                printf("%i a 01/09/2022\n", dataConsulta);
                printf("____________________________________________________________________________\n\n");
                
                printf("\n\nDeseja enviar o atestado? Sim[1] Nao[2]: ");
        		scanf("%i", &opcaoEnvio);
				
            	if (opcaoEnvio == 1)
            	{
    	    		printf("Insira o email do destinatário: ");
    	    		setbuf(stdin, 0);
    	    		char emailDestinatario[40];
    	    		fgets(emailDestinatario, 40, stdin);	
    	    
    	    		printf("Email enviado com sucesso!\nDestinatário: %s", emailDestinatario);
    	    		printf("Obrigado! Volte sempre.");
                    
            	}else{
            		printf("Obrigado pela preferência.");
            	
				}
			}
		    break;

            case 2:
            	printf("Insira o CRM do Medico: ");	
            	scanf("%i", &crmMedico);
            	printf("Data da consulta (DDMMAAA): ");
            	scanf("%i", &dataConsulta);
            	
                srand(time(NULL));
                receitas = rand() % 5;
                
					/*Opções Aleatórias de Receitas*/
                if (receitas == 0)
                {
                    printf("__________________________________________________________________\n");
                    printf("RECEITUÁRIO\n");
                    printf("Paracetamol 750mg ->> 1 comprimido com intervalos de 7 em 7 horas.\n");
                    printf("Dipirona 500mg ->> 1 a 2 comprimidos por dia.\n");
                    printf("Ibuprofeno 400mg ->> 3 vezes por dia, de 8 em 8 horas.\n");
                    printf("NÃO TOMAR MAIS DO QUE O EXIGIDO NA RECEITA.\n\n");
                    printf("Nome do Médico: Gustavo Pinto.\n");
                    printf("CRM do Médico: %i\n", crmMedico);
                    printf("__________________________________________________________________ Data: %i\n\n", dataConsulta);
                    
                    printf("\n\nDeseja enviar o atestado? Sim[1] Nao[2]: ");
        		    scanf("%i", &opcaoEnviorec);
				
                    if (opcaoEnviorec == 1)
                    {
                        printf("Insira o email do destinatário: ");
                        setbuf(stdin, 0);
                        char emailDestinatario[40];
                        fgets(emailDestinatario, 40, stdin);	
                
                        printf("Email enviado com sucesso!\nDestinatário: %s", emailDestinatario);
                        printf("Obrigado! Volte sempre.");
                        
                    }else{
                        printf("Obrigado pela preferência.");
                    
                    }
                }
                
                if (receitas == 1)
                {
                    printf("________________________________________________________________________________\n");
                    printf("RECEITUÁRIO\n");
                    printf("Agomelatina 25mg ->> 1 comprimido por dia. Tomar antes de dormir.\n");
                    printf("Benzodiazepina 3mg ->> 1 comprimido por dia. Tomar às 19:00 horas\n");
                    printf("Dorflex ->> 1 a 2 comprimidos por dia. Tomar após o despertar e antes de dormir.\n");
                    printf("NÃO TOMAR MAIS DO QUE O EXIGIDO NA RECEITA.\n\n");
                    printf("Nome do Médico: Matheus Jackson.\n");
                    printf("CRM do Médico: %i\n", crmMedico);
                    printf("________________________________________________________________________________ Data: %i\n\n", dataConsulta);
                    printf("\n\nDeseja enviar o atestado? Sim[1] Nao[2]: ");
                    scanf("%i", &opcaoEnviorec);
                    
                    if (opcaoEnviorec == 1)
                    {
                        printf("Insira o email do destinatário: ");
                        setbuf(stdin, 0);
                        char emailDestinatario[40];
                        fgets(emailDestinatario, 40, stdin);	
                
                        printf("Email enviado com sucesso!\nDestinatário: %s", emailDestinatario);
                        printf("Obrigado! Volte sempre.");
                        
                    }else{
                        printf("Obrigado pela preferência.");
                    
                    }
                }

                if (receitas == 2)
                {
                    printf("____________________________________________________________________________________\n");
                    printf("RECEITUÁRIO\n");
                    printf("Escitalopram 20mg ->> 2 comprimido por dia. Tomar após o despertar e antes de dormir.\n");
                    printf("Benzodiazepina 20mg ->> 1 comprimido por dia. Tomar após o almoçar.\n");
                    printf("Dorflex ->> 1 a 2 comprimidos por dia. Tomar após o despertar e antes de dormir.\n");
                    printf("NÃO TOMAR MAIS DO QUE O EXIGIDO NA RECEITA.\n\n");
                    printf("Nome do Médico: Mirian Abravanel.\n");
                    printf("CRM do Médico: %i\n", crmMedico);
                    printf("____________________________________________________________________________________ Data: %i\n\n", dataConsulta);
                    printf("\n\nDeseja enviar o atestado? Sim[1] Nao[2]: ");
                    scanf("%i", &opcaoEnviorec);
                    
                    if (opcaoEnviorec == 1)
                    {
                        printf("Insira o email do destinatário: ");
                        setbuf(stdin, 0);
                        char emailDestinatario[40];
                        fgets(emailDestinatario, 40, stdin);	
                
                        printf("Email enviado com sucesso!\nDestinatário: %s", emailDestinatario);
                        printf("Obrigado! Volte sempre.");
                        
                    }else{
                        printf("Obrigado pela preferência.");
                    
                    }
                }

                if (receitas == 3)
                {
                   	printf("_________________________________________________________________________\n");
                    printf("RECEITUÁRIO\n");
                    printf("Diclofenaco 50mg ->> 2 a 3 comprimido por dia. Tomar em qualquer horário.\n");
                    printf("Novalgina 500mg ->> 1 a 3 comprimido por dia. Tomar em qualquer horário.\n");
                    printf("Loratadina 10mg ->> 1 comprimido por dia. Tomar às 18:00 horas.\n");
                    printf("NÃO TOMAR MAIS DO QUE O EXIGIDO NA RECEITA.\n\n");
                    printf("Nome do Médico: Ervin Parker.\n");
                    printf("CRM do Médico: %i\n", crmMedico);
                    printf("_________________________________________________________________________ Data: %i\n\n", dataConsulta);
                    printf("\n\nDeseja enviar o atestado? Sim[1] Nao[2]: ");
                    scanf("%i", &opcaoEnviorec);
                    
                    if (opcaoEnviorec == 1)
                    {
                        printf("Insira o email do destinatário: ");
                        setbuf(stdin, 0);
                        char emailDestinatario[40];
                        fgets(emailDestinatario, 40, stdin);	
                
                        printf("Email enviado com sucesso!\nDestinatário: %s", emailDestinatario);
                        printf("Obrigado! Volte sempre.");
                        
                    }else{
                        printf("Obrigado pela preferência.");
                    
                    }
                    
                }

                if (receitas == 4)
                {
                    printf("_________________________________________________________________________________\n");
                    printf("RECEITUÁRIO\n");
                    printf("Maleato de Dexclorfeniramina 2mg ->> 3 comprimido por dia. Tomar de 8 em 8 horas.\n");
                    printf("Cetirizina 10mg ->> 1 comprimido por dia. Tomar em qualquer horário.\n");
                    printf("Salsep Spray 50ml ->> Aplicar de 4 em 4 horas.\n");
                    printf("NÃO TOMAR MAIS DO QUE O EXIGIDO NA RECEITA.\n\n");
                    printf("Nome do Médico: Kobe Stark\n");
                    printf("CRM do Médico: %i\n", crmMedico);
                    printf("_________________________________________________________________________________ Data: %i\n\n", dataConsulta);
                    printf("\n\nDeseja enviar o atestado? Sim[1] Nao[2]: ");
                    scanf("%i", &opcaoEnviorec);
                    
                    if (opcaoEnviorec == 1)
                    {
                        printf("Insira o email do destinatário: ");
                        setbuf(stdin, 0);
                        char emailDestinatario[40];
                        fgets(emailDestinatario, 40, stdin);	
                
                        printf("Email enviado com sucesso!\nDestinatário: %s", emailDestinatario);
                        printf("Obrigado! Volte sempre.");
                        
                    }else{
                        printf("Obrigado pela preferência.");
                    
                    }
                    
                }
                break;
                
                /*Opção de Envio da Receita*/
                	
	
            default:
            	printf("Opção inválida.");
            break;
	    }
        
            
    
	}

	



}
