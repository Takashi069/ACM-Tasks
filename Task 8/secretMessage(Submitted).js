function secretPassword(message) {
	var size = message.length;
	let flag = 0;
	if(size!=9){
		flag = 1;
	}else{
		for (let index = 0; index < 9; index++) {
            		const element = message[index];
			let temp = message.charCodeAt(index);
            		if(temp<97 || temp >122){
				flag = 1;
				break;
			}
        	}
	}
    if(flag==1){
        return ("BANG! BANG! BANG!");
    }else{
        var P1 = message.slice(0,3);
        var P2 = message.slice(3,6);
        var P3 = message.slice(6);
        
        let temp = P1.charCodeAt(0)%96;
        let temp2 = P1.charCodeAt(2)%96;
        var FP1 = temp.toString() + P1[1] + temp2.toString();

        var tempar = P2.split("");
        tempar = tempar.reverse();
        var FP2 = tempar.join("");

        var FP3 = "";
        let char;
        for (let index = 0; index < 3; index++) {
            const element = P3[index];
            if(element == "z"){
                FP3.concat("a");
            }else{
                char = String.fromCharCode(P3.charCodeAt(index) + 1);
                FP3 +=char;
            }
        }

        return (FP2 + FP3 + FP1);
	}
}
