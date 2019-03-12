var Observable = require('FuseJS/Observable');

var ID = Observable("");
var Password = Observable("");


function Signin(){
	
    // router.push("Home");
    var opts = ({
            	'username' : ID.value,
                'password' : Password.value
              });

	console.log(JSON.stringify(opts));
    console.log('sign'); //Sign_in 함수가 호출되었는지 확인
 

	fetch('http://8dc06cfa.ngrok.io/users/login',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/JSON"
	            },
	            body : JSON.stringify(opts)
	               
	        }).then((res)=>{
	            // console.log(JSON.stringify(res));
	            // console.log(JSON.parse(res));
	            return res.json()
			}).then((res)=>{

	            console.log(res.success);


	            ID = ID.value;

	            if( JSON.parse(res.success) == true){
	            	// router.push("Home", ID);
	            	router.push("result", ID);
	            	console.log("Move to result");
	            	console.log(ID);
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });

}

// function SignClicked(){	
//     console.log("Move to Page.Home");
//     router.push("Home");

// }


function Signup(){
	router.push("SignUp");
	console.log("Move to SignUp");
}


module.exports = {
	ID : ID,
	Password : Password,
	Signup : Signup,
	Signin : Signin
};
