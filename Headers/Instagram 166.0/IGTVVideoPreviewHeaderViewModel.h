//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString, UIColor;

@interface IGTVVideoPreviewHeaderViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _icon_showDuration;
    double _icon_totalDuration;
    UIColor *_info_backgroundColor;
    NSString *_info_title;
    double _progress_seenDuration;
    double _progress_totalDuration;
}

+ (id)progressWithSeenDuration:(double)arg1 totalDuration:(double)arg2;
+ (id)none;
+ (id)infoWithBackgroundColor:(id)arg1 title:(id)arg2;
+ (id)iconWithShowDuration:(_Bool)arg1 totalDuration:(double)arg2;
- (void).cxx_destruct;
- (void)matchIcon:(CDUnknownBlockType)arg1 info:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 none:(CDUnknownBlockType)arg4;

@end

