//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMTwoStepVerificationSelectTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface TMTwoStepVerificationEditTableViewCell : TMTwoStepVerificationSelectTableViewCell
{
    UIImageView *_rightImageView;
    UIView *_defaultLabelContainer;
    UILabel *_defaultLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) UIView *defaultLabelContainer; // @synthesize defaultLabelContainer=_defaultLabelContainer;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)rightViewTapped;
- (void)setCellModel:(id)arg1;

@end

