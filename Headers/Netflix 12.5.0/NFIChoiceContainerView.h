//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface NFIChoiceContainerView : UIView
{
    UIButton *_button;
    UILabel *_label;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)titleLabelWithLabel:(CDStruct_84bf8c3a)arg1 ratio:(double)arg2;
- (void)renderLabel:(CDStruct_84bf8c3a)arg1 ratio:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

