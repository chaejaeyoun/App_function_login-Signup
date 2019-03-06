var Observable = require('FuseJS/Observable');

function goBack()
{
	router.push("LogIn");
    console.log("goback");
    
     
}

module.exports = {
	goBack : goBack
};
