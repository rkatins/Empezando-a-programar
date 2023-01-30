## Metodos
A diferencia de lenguajes de programacion como C, no existe un solo tipo y no son siempre funciones. En el caso de Java tenemos dos tipos en los que diferenciar (que a su vez se dividen en dos tipos más).

+ Funcion -> Devuelve un valor, tiene return
Una funcion devuelve el dato el cual es indicado en la primera línea del método.
```
    public String mSaludarFuncion() {
        String saludo = "Buenos dias";
        
        return saludo;
    }
```
+ Procedimiento -> No devuelve nada, no teiene return
Un procedimiento no devuelve nada, se indica como ```void```, el cual es indicado en la primera línea del método.
```
    public void mSaludarProcedimiento() {
        System.out.println("Buenos dias")
    }
```
