//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class BaseButton, BaseLabel;

@interface EmptyCustomFeedView : UIStackView
{
    CDUnknownBlockType _onActionButtonPress;
    BaseLabel *_titleLabel;
    BaseLabel *_bodyLabel;
    BaseButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) BaseLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onActionButtonPress; // @synthesize onActionButtonPress=_onActionButtonPress;
- (void)didTapActionButton:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

