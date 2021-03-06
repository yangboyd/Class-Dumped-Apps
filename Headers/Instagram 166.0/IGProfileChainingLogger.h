//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFollowPeopleLoggerProtocol-Protocol.h>

@class IGUser, IGUserSession, NSMutableSet, NSString;

@interface IGProfileChainingLogger : NSObject <IGFollowPeopleLoggerProtocol>
{
    NSString *_module;
    NSString *_view;
    NSMutableSet *_set;
    unsigned long long _offset;
    IGUser *_chainingUser;
    NSString *_chainingUserPK;
    long long _similarAccountSource;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) long long similarAccountSource; // @synthesize similarAccountSource=_similarAccountSource;
@property(readonly, copy, nonatomic) NSString *chainingUserPK; // @synthesize chainingUserPK=_chainingUserPK;
@property(readonly, nonatomic) IGUser *chainingUser; // @synthesize chainingUser=_chainingUser;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
- (id)_viewStringForSource:(long long)arg1;
- (void)logUnblockWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDeclineFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logAcceptFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logViewpointImpressionWithUserInfo:(id)arg1;
- (void)logFollowWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logClickWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logImpressionWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (id)initWithModule:(id)arg1 source:(long long)arg2 chainingUser:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

