//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIVisualEffectView;

@interface AWEUICellMaskView : UIView
{
    UIVisualEffectView *_effectView;
    UIImageView *_logoImageView;
}

@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
- (void).cxx_destruct;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

