#pragma once
#include <netinet/in.h>
#include <string>

using namespace std;

class Socket
{
private:
  const int BACKLOG = 10;
  struct sockaddr_in6 socketAddress;

public:
  Socket();
  int createSocket(int);
  int acceptConnection(int);
  string readSocket(int);
};