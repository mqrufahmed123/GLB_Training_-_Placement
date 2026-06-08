while(!st.empty() && st.top > curr){
    st.pop();  // decreasing
}
st.push(curr);

while(!st.empty() && st.top < curr){
    st.pop();  // increasing 
}
st.push(curr);
