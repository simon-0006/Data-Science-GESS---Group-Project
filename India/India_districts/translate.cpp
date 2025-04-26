#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
using json = nlohmann::json;

using namespace std;

int main() {
  json j;
  queue<long long> st;
  while (true) {
    string tmp; getline(cin, tmp);
    if (tmp.size() == 0) continue;
    if (tmp == "end123456789") break;
    if ('0' <= tmp[0] && tmp[0] <= '9') {
      st.push(stoll(tmp));
    } else {
      cout << st.front() << " " << tmp << endl;
      j[to_string(st.front())] = tmp;
      st.pop();
    }
  }

  // write to file
  ofstream file("distname_mapping_string.json");
  file << setw(4) << j << endl;
  file.close();

  return 0;
}
