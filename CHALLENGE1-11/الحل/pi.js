window.onload=function ch() {
    console.log("by chouaibcher")
}
function pi() {
    let pi=1
    const e=document.getElementById("e").value
    for (let i = 0; i<e; i++) {
        let rule=(i*2)+3
        if (i%2==0)
            pi=pi-(1/rule)
        else
            pi=pi+(1/rule)

        
    }
    document.getElementById('pi').innerHTML= pi*4
    document.getElementById("π").style.display="block"
    
}
/* By chouaibcher */
