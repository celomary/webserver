#ifndef CGI_HPP
#define CGI_HPP
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>
#include <map>
#include "../Response/Response.hpp"
#include "../Checker/checker.hpp"
#include "../Request/utils/function_utils.hpp"
#define CGIOUTPUT "/tmp/Cgi.txt"
#define IKHANERR "ikhanERR"
namespace ft
{
    class Response;
    class Cgi
    {
        public:
            Cgi(Checker &checker, const Request& req);
            bool executeCgi(Checker &checker, const Request& req);
            void parseCgiFile(Response& res);
            ~Cgi();
        private:
            void initCgi(Checker &checker, const Request& req);
            bool    CheckRequestBody(const Request & req) const;
        private:
            int outFile;
            int inputFile;
            char **argv;
    };
}

#endif