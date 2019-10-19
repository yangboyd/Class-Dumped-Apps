//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class MSAUserProperties, MSAUserPropertiesParser, NSSet, NSString;

@interface MSAPassportParser : MSABaseXmlParser
{
    _Bool _shouldIgnoreFirstStartNode;
    NSString *_authStateString;
    NSString *_reqStateString;
    NSString *_flightsList;
    MSAUserPropertiesParser *_propertiesParser;
    int _authState;
    int _reqStatus;
    NSString *_inlineAuthUrl;
    NSString *_configVersion;
    NSString *_puid;
    MSAUserProperties *_userProperties;
    NSSet *_flights;
}

@property(readonly) NSSet *flights; // @synthesize flights=_flights;
@property(readonly) MSAUserProperties *userProperties; // @synthesize userProperties=_userProperties;
@property(readonly) NSString *puid; // @synthesize puid=_puid;
@property(readonly) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(readonly) NSString *inlineAuthUrl; // @synthesize inlineAuthUrl=_inlineAuthUrl;
@property(readonly) int reqStatus; // @synthesize reqStatus=_reqStatus;
@property(readonly) int authState; // @synthesize authState=_authState;
- (void).cxx_destruct;
- (void)onParserFinished;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;
- (id)initWithData:(id)arg1;

@end

