//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAuthHeaderManaging-Protocol.h>

@class IGAuthHeaderStore, NSString;

@interface IGUserAuthHeaderManager : NSObject <IGAuthHeaderManaging>
{
    NSString *_userPk;
    IGAuthHeaderStore *_authHeaderStore;
    IGAuthHeaderStore *_loggingClaimStore;
}

- (void).cxx_destruct;
- (void)updateLoggingClaimHeader:(id)arg1;
- (id)loggingClaimHeader;
- (void)updateAuthHeader:(id)arg1;
- (id)joinedAuthHeaderForOtherUsers:(id)arg1;
- (_Bool)hasAuthHeader;
- (id)authHeader;
- (id)initWithUserPk:(id)arg1 authHeaderStore:(id)arg2 loggingClaimStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

