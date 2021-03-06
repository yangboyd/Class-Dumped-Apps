//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGBadgeValue : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    long long _badgeWithCount;
}

+ (id)noBadge;
+ (id)badgeWithErrorDot;
+ (id)badgeWithDot;
+ (id)badgeWithCount:(long long)arg1;
- (void)matchNoBadge:(CDUnknownBlockType)arg1 badgeWithDot:(CDUnknownBlockType)arg2 badgeWithCount:(CDUnknownBlockType)arg3 badgeWithErrorDot:(CDUnknownBlockType)arg4;
- (long long)matchIntegerNoBadge:(CDUnknownBlockType)arg1 badgeWithDot:(CDUnknownBlockType)arg2 badgeWithCount:(CDUnknownBlockType)arg3 badgeWithErrorDot:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanNoBadge:(CDUnknownBlockType)arg1 badgeWithDot:(CDUnknownBlockType)arg2 badgeWithCount:(CDUnknownBlockType)arg3 badgeWithErrorDot:(CDUnknownBlockType)arg4;

@end

