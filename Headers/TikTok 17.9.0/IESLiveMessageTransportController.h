//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMessageTransport-Protocol.h"
#import "IESLiveMessageTransportDelegate-Protocol.h"

@class IESLiveMessageDecoder, IESLiveMessageHTTPTransport, IESLiveWSmessageFetcher, NSDictionary, NSString;
@protocol IESLiveAppInfo, IESLiveHTTPClient, IESLiveLanguageService, IESLiveMessageReciever, OS_dispatch_queue;

@interface IESLiveMessageTransportController : NSObject <IESLiveMessageTransportDelegate, IESLiveMessageTransport>
{
    _Bool _disableSwitchWS;
    _Bool _switchToWS;
    id <IESLiveMessageReciever> messageReciever;
    NSDictionary *parameter;
    NSObject<OS_dispatch_queue> *messageParseQueue;
    IESLiveMessageHTTPTransport *_httpTransport;
    IESLiveWSmessageFetcher *_wsTransport;
    IESLiveMessageDecoder *_decoder;
    id <IESLiveHTTPClient> _httpClient;
    id <IESLiveAppInfo> _appInfo;
    id <IESLiveLanguageService> _languageService;
    long long _switchLimitCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long switchLimitCount; // @synthesize switchLimitCount=_switchLimitCount;
@property(nonatomic) _Bool switchToWS; // @synthesize switchToWS=_switchToWS;
@property(nonatomic) _Bool disableSwitchWS; // @synthesize disableSwitchWS=_disableSwitchWS;
@property(retain, nonatomic) id <IESLiveLanguageService> languageService; // @synthesize languageService=_languageService;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <IESLiveHTTPClient> httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) IESLiveMessageDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) IESLiveWSmessageFetcher *wsTransport; // @synthesize wsTransport=_wsTransport;
@property(retain, nonatomic) IESLiveMessageHTTPTransport *httpTransport; // @synthesize httpTransport=_httpTransport;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageParseQueue; // @synthesize messageParseQueue;
@property(retain) NSDictionary *parameter; // @synthesize parameter;
@property(nonatomic) __weak id <IESLiveMessageReciever> messageReciever; // @synthesize messageReciever;
- (void)messageSend:(id)arg1;
- (void)p_decodePBMessage:(id)arg1;
- (void)p_addQueryToParams:(id)arg1 fromParams:(id)arg2;
- (void)p_getStrategyFromHTTP:(id)arg1;
- (void)reconnectWS;
- (void)closeWsConnect;
- (void)decodePBMessageFromWS:(id)arg1;
- (void)decodePBMessageFromHttp:(id)arg1;
- (void)fetchMessageTime:(double)arg1;
- (void)disconnect;
- (void)connect;
- (id)initWithConfigure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

