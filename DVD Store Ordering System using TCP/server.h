

#ifndef _SERVER_H_
#define _SERVER_H_

/**
 * The server command line arguments.
 */
typedef struct ServerArgs {
    unsigned short listenPort;
} ServerArgs;

void ParseArgs(int argc, char *argv[], ServerArgs *svrArgs);
void Server(int sd, const char *cliName);
void PrintServerStats(void);

#endif

