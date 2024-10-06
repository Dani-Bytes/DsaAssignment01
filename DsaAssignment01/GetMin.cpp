#include"Stack.h"
int main() {
    Stack st;
    st.push(10);
    st.push(18);
    st.push(38);
    int min = st.getMin();
    cout << "Minimum Value: "<<min << endl;
    int size = st.getSize();
    cout << "Size of Stack: "<< size << endl;
}