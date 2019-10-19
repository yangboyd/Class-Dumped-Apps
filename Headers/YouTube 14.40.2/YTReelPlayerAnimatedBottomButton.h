//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTReelPlayerBottomButton.h"

@class LOTAnimationView, LOTComposition;

@interface YTReelPlayerAnimatedBottomButton : YTReelPlayerBottomButton
{
    LOTAnimationView *_animationView;
    LOTComposition *_selectingComposition;
    LOTComposition *_deselectingComposition;
}

+ (id)buttonWithSelectingAnimation:(id)arg1 deselectingAnimation:(id)arg2;
- (void).cxx_destruct;
- (void)setAnimationView:(id)arg1;
- (void)layoutSubviews;
- (id)imageOrAnimationView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

