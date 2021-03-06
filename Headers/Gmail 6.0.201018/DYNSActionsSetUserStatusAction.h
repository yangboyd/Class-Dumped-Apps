//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNSCommonDynamiteClock, DYNSStatusApiAccountOwnerStatusManager;

@interface DYNSActionsSetUserStatusAction : NSObject
{
    id <DYNSStatusApiAccountOwnerStatusManager> accountOwnerStatusManager_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
}

+ (void)initialize;
- (void)dealloc;
- (id)setPresenceSharedWithBoolean:(_Bool)arg1;
- (id)executeTurnOffCustomStatus;
- (id)executeSetCustomStatusExpiryOptionWithNSString:(id)arg1 withNSString:(id)arg2 withDYNSUIModelsCustomStatusExpiryOption:(id)arg3;
- (id)executeCustomStatusUpdateRemainingDurationWithNSString:(id)arg1 withJavaUtilOptional:(id)arg2 withLong:(long long)arg3;
- (id)executeCustomStatusUpdateExpiryTimestampWithNSString:(id)arg1 withJavaUtilOptional:(id)arg2 withLong:(long long)arg3;

@end

