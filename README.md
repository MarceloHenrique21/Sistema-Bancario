# Sistema-Bancario


DICIONARIO DE COMANDOS 

"r" Abre um arquivo texto para leitura. O arquivo deve existir antes de ser aberto.

"w" Abrir um arquivo texto para gravação. Se o arquivo não existir, ele será criado. Se já existir, o conteúdo anterior será destruído.

"a" Abrir um arquivo texto para gravação. Os dados serão adicionados no fim do arquivo ("append"), se ele já existir, ou um novo arquivo será criado, no caso de arquivo não existente anteriormente.

"rb" Abre um arquivo binário para leitura. Igual ao modo "r" anterior, só que o arquivo é binário.

"wb" Cria um arquivo binário para escrita, como no modo "w" anterior, só que o arquivo é binário.

"ab" Acrescenta dados binários no fim do arquivo, como no modo "a" anterior, só que o arquivo é binário.

"r+" Abre um arquivo texto para leitura e gravação. O arquivo deve existir e pode ser modificado.

"w+" Cria um arquivo texto para leitura e gravação. Se o arquivo existir, o conteúdo anterior será destruído. Se não existir, será criado.

"a+" Abre um arquivo texto para gravação e leitura. Os dados serão adicionados no fim do arquivo se ele já existir, ou um novo arquivo será criado, no caso de arquivo não existente anteriormente.

"r+b" Abre um arquivo binário para leitura e escrita. O mesmo que "r+" acima, só que o arquivo é binário.

"w+b" Cria um arquivo binário para leitura e escrita. O mesmo que "w+" acima, só que o arquivo é binário.

"a+b" Acrescenta dados ou cria uma arquivo binário para leitura e escrita. O mesmo que "a+" acima, só que o arquivo é binário

fopen() Abre um arquivo

Fclose () Fecha um arquivo

putc() e fputc() Escreve um caractere em um arquivo

getc() e fgetc() Lê um caractere de um arquivo

fseek() Posiciona em um registro de um arquivo

fprintf() Efetua impressão formatada em um arquivo

fscanf() Efetua leitura formatada em um arquivo

feof() Verifica o final de um arquivo
