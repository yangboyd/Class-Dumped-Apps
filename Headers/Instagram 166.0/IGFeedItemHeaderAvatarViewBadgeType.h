//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, UIColor;

@interface IGFeedItemHeaderAvatarViewBadgeType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSArray *_status_emojis;
    double _status_emojiFontSize;
    UIColor *_status_badgeBackgroundColor;
}

+ (id)statusWithEmojis:(id)arg1 emojiFontSize:(double)arg2 badgeBackgroundColor:(id)arg3;
+ (id)pbia;
+ (id)none;
+ (id)location;
+ (id)hashtag;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 hashtag:(CDUnknownBlockType)arg2 location:(CDUnknownBlockType)arg3 pbia:(CDUnknownBlockType)arg4 status:(CDUnknownBlockType)arg5;

@end

