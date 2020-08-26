# Atividade SO II 26.08.2020

Simples programas de redirecionamento

## Exemplo: redir_entr.c

* Programa alvo: `bash`
* Redirecionamento: entrada, equivalente a `<`
* Efeito sem redirecionamento: inicia sessão do bash
* Efeito pretendido: carregar o arquivo "pro_bash", que, por sua vez,
entra o diretório `fernando-de-noronha` e cria o arquivo fuso_horario.txt

## redir_saida.c

* Programa alvo: `ls -l`
* Redirecionamento: saída padrão, equivalente a `>`
* Efeito sem redirecionamento: todos os arquivos com detalhes na tela
* Efeito com redirecionamento: todos os arquivos no arquivo `dirlist.txt`
* Dica: Abrir `dirlist` no modo de escrita com truncamento
* Dica: parametros: `{"ls", "-l", NULL}`

## redir_saida_ap.c

* Programa alvo: `wc -w eu_mesmo.txt`
* Redirecionamento: saída padrão, equivalente a `>>`
* Efeito sem redirecionamento: conta as palavras de eu_mesmo.txt na tela
* Efeito com redirecionamento: os resultados são anexados no fim do arquivo
* Dica: Abrir `eu_mesmo.txt` no modo de escrita com _append_ 
* Dica: parametros: `{"wc", "-w", "eu_mesmo.txt", NULL}`

## redir_erro.c

* Programa alvo: `ls inexistente.txt`
* Redirecionamento: saída de erro padrão, equivalente a `2>`
* Efeito sem redirecionamento: erro na tela
* Efeito com redirecionamento: erro no arquivo `deu_errado.txt`

## `execve`

* Compile o programa compile_me.c
`gcc -o execute_me compile_me.c`
* Faça um programa que invoca `execute_me`
	* O problema é que o diretório atual não está no PATH
	* Use `execve` com uma nova variável PATH que inclui o dir atual
FIM
