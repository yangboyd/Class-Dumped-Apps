//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol GIPGaiaAccountID;

@interface GALStreamlinedFlowParams : NSObject
{
    NSURL *_flowURL;
    id <GIPGaiaAccountID> _accountID;
    long long _sessionID;
    NSString *_providerID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, nonatomic) long long sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) id <GIPGaiaAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSURL *flowURL; // @synthesize flowURL=_flowURL;
- (id)initWithFlowURL:(id)arg1 accountID:(id)arg2 sessionID:(long long)arg3 providerID:(id)arg4;

@end

