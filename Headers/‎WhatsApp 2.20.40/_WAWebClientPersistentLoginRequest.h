//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, WAWebClientSession;

@interface _WAWebClientPersistentLoginRequest : NSObject
{
    NSString *_webRef;
    NSString *_browserID;
    NSString *_clientToken;
    NSString *_syncType;
    NSString *_syncKind;
    WAWebClientSession *_session;
    NSData *_serverChallenge;
}

@property(copy, nonatomic) NSData *serverChallenge; // @synthesize serverChallenge=_serverChallenge;
@property(readonly, nonatomic) WAWebClientSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *syncKind; // @synthesize syncKind=_syncKind;
@property(readonly, copy, nonatomic) NSString *syncType; // @synthesize syncType=_syncType;
@property(readonly, copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
@property(readonly, copy, nonatomic) NSString *browserID; // @synthesize browserID=_browserID;
@property(readonly, copy, nonatomic) NSString *webRef; // @synthesize webRef=_webRef;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStanzaElement:(id)arg1;

@end

