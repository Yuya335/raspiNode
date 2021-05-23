const fs = require("fs");

//	変数定義----------------------------||
let cnt = 0;

//	関数定義----------------------------||
const init = () => {
	console.log("call init func.");
	fs.writeFileSync('/sys/class/gpio/export', 21);
	fs.writeFileSync('/sys/class/gpio/gpio21/direction', 'out');
};

const end = () => {
	console.log("call end func.");
	fs.writeFileSync('/sys/class/gpio/unexport', 21);
};

//	実行--------------------------------||
init();
const intervalId = setInterval(() => {
	console.log("call setInteravl func.");
	cnt++;
	if(cnt % 2 == 1){
		console.log("High : %d", cnt);
		fs.writeFileSync('/sys/class/gpio/gpio21/value', 1);
	}else{
		console.log("Low : %d", cnt);
		fs.writeFileSync('/sys/class/gpio/gpio21/value', 0);
	}
	if(cnt >= 10){
		end();
		clearInterval(intervalId);
	};
}, 250);


