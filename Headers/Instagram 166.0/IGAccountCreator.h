//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAccountCreating-Protocol.h>

@class NSString;
@protocol IGAPIClient, IGLoginManaging;

@interface IGAccountCreator : NSObject <IGAccountCreating>
{
    id <IGAPIClient> _loggedOutNetworker;
    id <IGLoginManaging> _loginManager;
}

- (void).cxx_destruct;
- (void)createAndSwitchToPageAccountWithRequest:(id)arg1 pageID:(id)arg2 pageName:(id)arg3 pageAccessToken:(id)arg4 facebookAccessToken:(id)arg5 errorParser:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (id)initWithLoggedOutNetworker:(id)arg1 loginManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

