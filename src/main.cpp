
#include "restclient-cpp/restclient.h"
#include <iostream>
#include <string>

int main()
{
    std::string app_id = "your-app-id";
    std::string api_key = "your-readable-permission-api_key";
    std::string serial = "serial-number";
    std::string code = "product-code";
    std::string host_id = ""; // you can supply a machine id
    
    const std::string quote = "\"";
    const std::string semicollon = ":";
    
    const std::string key_app_id = quote + "app_id" + quote + semicollon;
    const std::string key_api_key = quote + "api_key" + quote + semicollon;
    const std::string key_serial = quote + "serial" + quote + semicollon;
    const std::string key_code = quote + "code" + quote + semicollon;
    const std::string key_host_id = quote + "host_id" + quote + semicollon;
    
    const std::string value_app_id = quote + app_id + quote;
    const std::string value_api_key = quote + api_key + quote;
    const std::string value_serial = quote + serial + quote;
    const std::string value_code = quote + code + quote;
    const std::string value_host_id = quote + host_id + quote;
    
    std::string query_string = "{" \
        + key_app_id + value_app_id + ", " \
        + key_api_key + value_api_key + ", " \
        + key_serial + value_serial + ", " \
        + key_code + value_code + ", " \
        + key_host_id + value_host_id + "}";

    // debug
    std::cout << query_string << std::endl;
    
    const std::string url = "https://api.keyzy.io/v2/licenses/valid";

    RestClient::Response r = RestClient::post(url, "text/json", query_string);
    
    std::cout << std::endl << "Code: " << r.code << " \nBody: " << r.body << std::endl;
    
    return 0;
}
