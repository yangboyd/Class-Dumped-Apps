//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDABaseActionTracker.h"

@interface GDAPriorityActionTracker : GDABaseActionTracker
{
}

- (id)detailsForOtherInteractionWithUserInfo:(id)arg1;
- (id)detailsForSmartActionInteractionWithUserInfo:(id)arg1;
- (id)detailsForOpenCardWithUserInfo:(id)arg1;
- (id)detailsForCardDisplayWithDetails:(id)arg1;
- (id)detailsForDisplayWithSource:(int)arg1 displayed:(_Bool)arg2 sessionID:(id)arg3;
- (id)detailsForResponseWithErrorDetails:(id)arg1;
- (id)detailsForRequestWithReason:(int)arg1;
- (void)subscribe;

@end

