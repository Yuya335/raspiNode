const execSync = require('child_process').execSync;
const fs = require('fs');

const stdout = execSync('./test HI!');
console.log(stdout.toString());

try{
	console.log(fs.readFileSync("./data.txt", "utf8"));
} catch (err){
	console.log(err);
}

fs.stat("./data.txt", (err) => {
	if(err) throw err
	console.log("非同期処理");
});

console.log("後続の処理");

