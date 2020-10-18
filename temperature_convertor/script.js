
 function convertctof() {
    var celsuis, fahrenheit;
    celsuis = document.getElementById("celsuis");
    if(celsuis.value==='')
    {
        document.getElementById("answer1").innerHTML="NULL";  
    }
    else{
        fahrenheit=(celsuis.value*(9/5))+32;
        fahrenheit=fahrenheit.toFixed(2);
        document.getElementById("answer4").innerHTML= "The Fahrenheit value (&#8457) is";
        document.getElementById("answer1").innerHTML= fahrenheit;
    }
  }

  
 function convertftoc() {
    var celsuis, fahrenheit;
    fahrenheit = document.getElementById("Fahrenheit");
    if(fahrenheit.value==='')
    {
        document.getElementById("answer2").innerHTML="NULL";  
    }
    else{
        celsuis=(fahrenheit.value-32)*(5/9);
        celsuis=celsuis.toFixed(2);
        document.getElementById("answer3").innerHTML= "The Celsius value (&#8451) is";
        document.getElementById("answer2").innerHTML= celsuis;
    }
    
   
  }




