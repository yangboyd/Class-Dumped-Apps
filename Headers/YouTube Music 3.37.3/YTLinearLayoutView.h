//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, YTILinearLayoutRenderer;

@interface YTLinearLayoutView : UIView
{
    YTILinearLayoutRenderer *_renderer;
    _Bool _isHorizontal;
    NSArray *_views;
}

@property(retain, nonatomic) NSArray *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 fillSubviewSizes:(struct CGSize *)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithRenderer:(id)arg1;

@end

