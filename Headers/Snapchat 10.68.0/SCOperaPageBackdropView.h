//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, SCQueuePerformer, UIImageView, UIVisualEffectView;

@interface SCOperaPageBackdropView : UIView
{
    UIImageView *_backdropImageView;
    UIVisualEffectView *_backdropBlurView;
    CAGradientLayer *_backdropGradientLayer;
    SCQueuePerformer *_performer;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setBackdropImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

