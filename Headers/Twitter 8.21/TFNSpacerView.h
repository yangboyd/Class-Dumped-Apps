//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TFNSpacerView : UIView
{
    UIView *_contentView;
    struct CGSize _contentSize;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)tfn_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

