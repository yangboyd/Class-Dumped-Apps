//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString;

@interface TFNDirectMessageMarkAsSeenOperation : TFNDirectMessageAPICommandOperation
{
    NSString *_accountID;
    long long _lastSeenEventID;
    long long _trustedLastSeenEventID;
    long long _untrustedLastSeenEventID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long untrustedLastSeenEventID; // @synthesize untrustedLastSeenEventID=_untrustedLastSeenEventID;
@property(readonly, nonatomic) long long trustedLastSeenEventID; // @synthesize trustedLastSeenEventID=_trustedLastSeenEventID;
@property(readonly, nonatomic) long long lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)failedWithError:(id)arg1;
- (id)makeCommandWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 trustedLastSeenEventID:(long long)arg3 untrustedLastSeenEventID:(long long)arg4 commandService:(id)arg5 context:(id)arg6;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 untrustedLastSeenEventID:(long long)arg3 commandService:(id)arg4 context:(id)arg5;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 trustedLastSeenEventID:(long long)arg3 commandService:(id)arg4 context:(id)arg5;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 commandService:(id)arg3 context:(id)arg4;

@end

