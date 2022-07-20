# Classe Box
A classe Box implementa simples janelas no terminal para inserção de texto.

Para criar uma box basta passar o número de linhas e de colunas para o construtor.
```
    Box b1(3,30); // cria uma box de 3 linhas e 30 colunas
```
<br><br>
Para inserir texto na box usa-se a função ```set_line()```.
```
    b1.set_line(1,"ALINHANDO AO CENTRO"); // alinhando no centro
```
<br><br>
Para alinhar à esquerda basta fornecer mais um argumento inteiro, com qualquer valor.
```
    b2.set_line(1,"Alinhando a esquerda", 1);  // alinhando a esquerda
```
O texto a ser inserido deve ter menos caracteres que a quantidade de colunas da box.
Se o texto tiver mais caracteres que o número de colunas da box a exibição do texto
na box provavelmente iniciará na primeira linha e será truncada.
<br><br>

Para exibir a box no terminal basta chamar ```print()```.
```
    b1.print();
```
<br><br>
Para apagar o texto da box use ```clear()```
```
    b5.clear();
```
<br><br>
Exemplo do uso da classe Box:<br><br>
![](https://github.com/arataca89/teste_readme/blob/main/box.png)
<p>Última atualização: 20220720</p>
<br><br>

---
arataca89@gmail.com
<br>
Aulas particulares de programação C/C++


