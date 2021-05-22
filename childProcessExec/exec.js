const exec = require('child_process').exec;

const sample = () => {
	exec('./test', (err, stdout, stderr) =>{
		if(stdout) console.log('stdout', stdout);
		if(stderr) console.log('stderr', stderr);
		if(err != null) console.log('err', err);
	});
}

sample();
