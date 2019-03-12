var Observable = require('FuseJS/Observable');

function goBack()
{
	router.push("LogIn");
    console.log("goback");
    
     
}


var newID = Observable("");
var newPassword = Observable("");
var Name = Observable("");

function Save(){
    console.log('UPID'); //Sign_in 함수가 호출되었는지 확인

	fetch('http://0a232bf2.ngrok.io/users/signup',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/json"
	            },
	            body : JSON.stringify({
	            	'newid' : newID.value,
	                'newpw' : newPassword.value,
	                'newname' : Name.value
	              })
	        }).then((res)=>{ return res.json()
	        }).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )
	            console.log(JSON.stringify(res));
	            console.log(res.success);

	            if( JSON.parse(res.success) == true){
	            	router.push("LogIn");
	            	console.log("Move to Login");
	            }


	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });




}





module.exports = {
	newID : newID,
	newPassword : newPassword,
	Name : Name,
	Save : Save,
	goBack : goBack
};
