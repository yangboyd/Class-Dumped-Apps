//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView;

@interface IGLiveCommentsContainerMaskView : UIView
{
    UIView *_opaqueView;
    IGGradientView *_topGradient;
    IGGradientView *_bottomGradient;
    _Bool _topGradientVisible;
    _Bool _bottomGradientVisible;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bottomGradientVisible; // @synthesize bottomGradientVisible=_bottomGradientVisible;
@property(nonatomic) _Bool topGradientVisible; // @synthesize topGradientVisible=_topGradientVisible;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

