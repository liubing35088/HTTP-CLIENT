#include <iostream>
#include "CoucheHttp.h"

int main()
{
    Header head;
    head.setHost("http://**.fr");
    head.setPath("/page/commit.php");

    head.setMethod("POST");

    head.setAccept("text/html,application/xhtml+xml,application/xml;q=0.9,*//*;q=0.8");
    head.setUserAgent("Mozilla/5.0 (Windows NT 6.1; WOW64; rv:21.0) Gecko/20100101 Firefox/21.0");
    head.setAccept_language("fr,fr-fr;q=0.8,en-us;q=0.5,en;q=0.3");

    //head.setAccept_encoding("gzip, deflate");
    head.setConnexion("keep-alive");

    head.addCookie("__utmc","563565481430");

    head.addVariable("pseudo","MonPseudo");
    head.addVariable("motDePass","azery");


    Http http(head);

    std::string page = http.getPage(&head);

    std::cout<<page<<std::endl;

    //falcutatif
    head.removeVariable();
    head.removeCookie();

    return 0;
}
