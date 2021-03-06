//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class MSAStringCodeErrorParser, MSAStsError, NSString;

@interface MSADeviceProvisionResponseParser : MSABaseXmlParser
{
    MSAStringCodeErrorParser *_errorParser;
    _Bool _isDevicePasswordless;
    MSAStsError *_stsError;
    NSString *_puid;
    NSString *_serverPublicEcKey;
}

- (void).cxx_destruct;
@property(readonly) NSString *serverPublicEcKey; // @synthesize serverPublicEcKey=_serverPublicEcKey;
@property(readonly) NSString *puid; // @synthesize puid=_puid;
@property(readonly) MSAStsError *stsError; // @synthesize stsError=_stsError;
- (void)onParserFinished;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;
- (id)initWithData:(id)arg1 isDevicePasswordless:(_Bool)arg2;

@end

