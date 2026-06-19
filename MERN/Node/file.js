const fs = require("fs")
//sync call
console.log("before syn writefile call");
fs.writeFileSync("./test.txt", "This is the content of test file");
fs.readFile("./test.txt","utf-8",(err,res)=>{
    if(err)
    {
        console.log("error: ", err);

    }
    else{
        console.log(res);
    }
}
);
console.log("after the sync writefile call");
