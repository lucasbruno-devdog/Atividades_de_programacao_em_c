do
    {
        printf("MENU\n");
        printf("\n 1 - Cadastrar nome e telefone");
        printf("\n 2 - Listar todos os nomes e telefones");
        printf("\n 3 - Pesquisar contato");
        printf("\n 4 - Sair\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        system("cls");

        switch(opcao)
        {
        case 1:
            printf("Tem certeza? 0 - sim / 1 - voltar ao menu inicial: ");
            scanf("%d", &opc);
            if(opc!=0)
            {
                printf("\n\nVoltando.....");
                system("cls");
            }
            else
            {
                system("cls");

                printf("Digite o nome: ");
                setbuf(stdin, NULL);
                gets(nome);

                printf("\nDigite o DDD: ");
                scanf("%d", &ddd);
                printf("\nDigite o telefone: ");
                scanf("%d", &telefone);

                cadastro(nome, ddd, telefone);

                printf("\n\nContato salvo!\n\n");

                system("pause");

                system("cls");
            }

            break;
        case 2:
            printf("Tem certeza? 0 - sim / 1 - voltar ao menu inicial: ");
            scanf("%d", &opc);
            if(opc!=0)
            {
                printf("\n\nVoltando.....");
                system("cls");
            }
            else
            {
                system("cls");
                lista();
                system("cls");
            }
            break;
        case 3:
            printf("Tem certeza? 0 - sim / 1 - voltar ao menu inicial: ");
            scanf("%d", &opc);
            if(opc!=0)
            {
                opcao = 0;
                printf("\n\nVoltando.....\n\n");
                system("pause");
                system("cls");
            }
            else
            {
                system("cls");
                printf("Digite um nome: ");
                setbuf(stdin, NULL);
                gets(ler);

                Abrearquivo('l', "agenda.txt");
                while(fscanf)

            }

            break;
        case 4:
            printf("Tem certeza? 0 - sim / 1 - voltar ao menu inicial: ");
            scanf("%d", &opc);
            if(opc!=0)
            {
                opcao = 0;
                printf("\n\nVoltando.....\n\n");
                system("pause");
                system("cls");
            }
            else
            {
                system("cls");
                printf("Finalizado.......\n\n");
                exit(0);
            }

            break;
        default:
            printf("\nOpção inválida!\n\n");
            system("pause");
            system("cls");
        }
    }
    while(opcao!=3);