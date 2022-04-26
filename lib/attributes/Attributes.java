//*****************************************************************
// File:   Attributes.java
// Author: Procesadores de Lenguajes-University of Zaragoza
// Date:   enero 2022
//         Clase única para almacenar los atributos que pueden aparecer en el traductor de adac
//         Se hace como clase plana, por simplicidad. Los atributos que se pueden almacenar
//         se autoexplican con el nombre
//*****************************************************************

package lib.attributes;
import lib.symbolTable.*;

import java.lang.reflect.Array;
import java.util.*;
import java.util.AbstractMap.SimpleEntry;

public class Attributes implements Cloneable {
    public Symbol.Types type;
    public Symbol.ParameterClass parClass;
    
    public int valInt;
    public boolean valBool;
    public char valChar;
    public String valString;
    //COMPLETAR
    public String code; //codigo
    public String name;
    //para procs/funcs
    public ArrayList<Symbol> parList;
    public boolean isVar;
    public boolean isCompVector;
    //si es una constante, se puede evaluar en tiempo de compilacion
    public boolean isConst;
    public boolean asignable;

    public Attributes() {
        type = Symbol.Types.UNDEFINED;
        parClass = Symbol.ParameterClass.NONE;

        valInt = 0;
        valBool = false;
        valString = "";

        code = "";
        name = "";

        isVar = false;
        isCompVector = false;

        isConst = false;
        asignable = false;
        //COMPLETAR
    }

    public Attributes clone() {
    	try {
    		return (Attributes) super.clone();
    	}
    	catch (CloneNotSupportedException e) {
    		return null; 
    	}
    }

    public String toString() {
        return
            "type = " + type + "\n" +
            "parClass = " + parClass + "\n" ;
            //COMPLETAR
        
    }

    public void initialiseParList(){
        this.parList = new ArrayList<Symbol>();
    }
}
