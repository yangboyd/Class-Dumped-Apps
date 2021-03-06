//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APIState, NSData, NSNumber, NSString;

@interface SecureInvalidationRequest : NSObject
{
    NSString *_uniqueId;
    APIState *_apiState;
    NSData *_key;
    NSData *_challenge;
    NSData *_spc;
    NSData *_appCert;
    NSNumber *_downloadComplete;
    NSNumber *_tryCount;
}

@property(retain) NSNumber *tryCount; // @synthesize tryCount=_tryCount;
@property(retain) NSNumber *downloadComplete; // @synthesize downloadComplete=_downloadComplete;
@property(retain) NSData *appCert; // @synthesize appCert=_appCert;
@property(retain) NSData *spc; // @synthesize spc=_spc;
@property(retain) NSData *challenge; // @synthesize challenge=_challenge;
@property(retain) NSData *key; // @synthesize key=_key;
@property(retain) APIState *apiState; // @synthesize apiState=_apiState;
@property(retain) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (id)initWithUniqueId:(id)arg1 apiState:(id)arg2 key:(id)arg3 appCert:(id)arg4 spc:(id)arg5 downloadComplete:(id)arg6 tryCount:(id)arg7;

@end

