#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> m;

    // 🔹 Insertion Methods
    m.insert({"apple", 5});
    m.insert(make_pair("banana", 10));
    m["cherry"] = 15;
    m.emplace("date", 20);

    // 🔹 Accessing Elements
    cout << "Access using []: " << m["apple"] << endl;
    cout << "Access using at(): " << m.at("banana") << endl;

    // 🔹 Searching
    if (m.count("cherry")) {
        cout << "'cherry' exists in map.\n";
    }

    auto it = m.find("banana");
    if (it != m.end()) {
        cout << "Found 'banana' => " << it->second << endl;
    }

    // 🔹 Size and Empty
    cout << "Size of map: " << m.size() << endl;
    cout << "Is map empty? " << (m.empty() ? "Yes" : "No") << endl;

    // 🔹 Iterating over map
    cout << "\nAll elements in map:\n";
    for (auto& pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // 🔹 Erase operations
    m.erase("date");
    cout << "\nAfter erasing 'date':\n";
    for (auto& pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // 🔹 Bucket and Hash Info
    cout << "\nBucket count: " << m.bucket_count() << endl;
    cout << "Load factor: " << m.load_factor() << endl;
    cout << "Max load factor: " << m.max_load_factor() << endl;

    // 🔹 Reserve & Rehash
    m.reserve(100);
    m.rehash(50);
    cout << "New bucket count after rehash: " << m.bucket_count() << endl;

    // 🔹 Hash function and key equality
    auto hash_fn = m.hash_function();
    auto key_eq = m.key_eq();
    cout << "Hash of 'apple': " << hash_fn("apple") << endl;
    cout << "Are 'apple' and 'apple' equal? " << (key_eq("apple", "apple") ? "Yes" : "No") << endl;

    // 🔹 Clear the map
    m.clear();
    cout << "\nMap cleared. Size: " << m.size() << ", Empty: " << (m.empty() ? "Yes" : "No") << endl;

    return 0;
}
