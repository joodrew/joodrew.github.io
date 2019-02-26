function calc(num){
    var n1,n2,cresult;
    n1 = parseFloat(document.getElementById('cnum1').value);
    n2 = parseFloat(document.getElementById('cnum2').value);
    if (num==1){ cresult=n1+n2;}
    if (num==2){ cresult=n1-n2;}
    if (num==3){ cresult=n1*n2;}
    if (num==4){ cresult=n1/n2;}
    if (num==5){ cresult=n1%n2;}
    document.getElementById('cresult').value=cresult;
    }