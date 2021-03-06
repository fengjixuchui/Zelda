//
// Created by Zheng on 2018/4/15.
//

#import "ZeldaHTTPRequest.h"
#import "ZeldaAuthenticationAgent.h"
#import "ZeldaFilterAgent.h"

class ZeldaHTTPTunnel: public ZeldaHTTPRequest {
public:
    ZeldaHTTPTunnel();
    ~ZeldaHTTPTunnel() override;
    void processChuck(char **inOut, size_t *len) override;

    std::string description() override;

    void SetAuthenticationAgent(ZeldaAuthenticationAgent *agent);
    void SetFilterAgent(ZeldaFilterAgent *agent);

private:
    ZeldaAuthenticationAgent *authenticationAgent = nullptr;
    ZeldaFilterAgent *filterAgent = nullptr;
};
