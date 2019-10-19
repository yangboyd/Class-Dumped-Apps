//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCUnifiedProfileIdentifierForLogging;
@protocol SCUnifiedProfileUsageLoggerDelegate;

@interface SCUnifiedProfileUsageLogger : NSObject
{
    double _openTime;
    unsigned long long _profileType;
    NSString *_sourcePageType;
    NSString *_profileSessionId;
    SCUnifiedProfileIdentifierForLogging *_profileIdentifier;
    _Bool _hasLoggedCloseUnifiedProfile;
    _Bool _isOnProfileSettings;
    _Bool _shouldIgnoreNextActionMenuCloseEvent;
    _Bool _shouldIgnoreNextActionMenuOpenEvent;
    id <SCUnifiedProfileUsageLoggerDelegate> _delegate;
}

+ (void)logProfileActivityCardWithActionType:(long long)arg1 cardType:(long long)arg2;
@property(nonatomic) __weak id <SCUnifiedProfileUsageLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setFriendshipStatusForEvent:(id)arg1;
- (void)logActionMenuActionWithActionModel:(id)arg1;
- (void)_logGroupProfileActionMenuWithActionModel:(id)arg1;
- (void)_logGroupProfileActionMenuAction:(id)arg1;
- (void)_logFriendProfileActionMenuWithActionModel:(id)arg1;
- (void)_logFriendProfileActionMenuAction:(id)arg1;
- (void)_logMyProfileActionWithUnifiedProfileMetric:(id)arg1;
- (void)_logMyProfileAction:(id)arg1;
- (void)_logGroupProfileActionWithActionModel:(id)arg1;
- (void)_logGroupProfileAction:(id)arg1;
- (void)_logFriendProfileActionWithActionModel:(id)arg1;
- (void)_logFriendProfileAction:(id)arg1;
- (void)logActionWithActionModel:(id)arg1;
- (void)logCloseActionMenu;
- (void)logOpenActionMenu:(id)arg1;
- (void)logCloseUnifiedProfile;
- (void)logOpenUnifiedProfile;
- (id)initWithProfileType:(unsigned long long)arg1 sourcePageType:(id)arg2 sessionId:(id)arg3 profileIdentifier:(id)arg4;

@end

