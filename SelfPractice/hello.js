var s = "AAABCCCCAAAA";


function substring(s,k){




var ans;
var cnt = 1;
for(var i=1;i<s.length;i++){
    if(cnt >= k){
        var kk = k;
        cnt=1;
        while(kk--){
            ans+=s[i];
        }
    }
    else{
    if(s[i]==s[i-1]){
        cnt++;
    }
    else{
        cnt=1;
    }
}
}
console.log(ans);


}