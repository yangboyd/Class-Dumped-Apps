//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightSectionController.h"

@class YTMLightweightSingleItemShelfCell;

@interface YTMLightweightSingleItemSectionController : YTLightweightSectionController
{
    YTMLightweightSingleItemShelfCell *_singleItemShelfCell;
    _Bool _hasAnimatedThumbnail;
    _Bool _requiresFocusUpdates;
}

+ (_Bool)animatedThumbnailExistsInRenderer:(id)arg1;
- (_Bool)requiresFocusUpdates;
- (void).cxx_destruct;
- (_Bool)shouldLoadAnimatedThumbnailForLightweightCell:(id)arg1;
- (void)setFocused:(_Bool)arg1;
- (void)didEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 cellFactory:(id)arg3 sectionRenderer:(id)arg4;

@end

