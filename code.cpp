#include "crow_all.h"

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/greeting")([]() {
    return "Hello world!";
  });

  CROW_ROUTE(app, "/employee").name("create_employee").methods("POST"_method)([](){
    return "";
  });

  CROW_ROUTE(app, "/employee/all").name("get_all_employee").methods("GET"_method)([](){
    return "";
  });

  CROW_ROUTE(app, "/employee/<string>").name("get_employee").methods("GET"_method)([](const std::string& id){
    return "";
  });

  CROW_ROUTE(app, "/employee/<string>").name("update_employee").methods("PUT"_method)([](const std::string& id){
    return "";
  });

  CROW_ROUTE(app, "/employee/<string>").name("delete_employee").methods("DELETE"_method)([](const std::string& id){
    return "";
  });

  app.port(8080).run();

  return 0;
}