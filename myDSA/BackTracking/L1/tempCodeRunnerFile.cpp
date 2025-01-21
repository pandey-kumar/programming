void findPermutation(string &s, string ans){
//     // base case
//     if(s.size()==0) cout<<ans<<endl;

//     // recursive case for all elements of string
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//         string left=s.substr(0,i);
//         string right=s.substr(i+1);
//         string rem_s=left+right;
//         findPermutation(rem_s,ans+ch);
//     }


// }