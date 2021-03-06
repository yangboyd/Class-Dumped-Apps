//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface IGLiveBroadcastActionMenuView : UIView
{
    NSMutableArray *_actions;
    NSMutableArray *_actionButtons;
    struct UIEdgeInsets _actionButtonTapPadding;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets actionButtonTapPadding; // @synthesize actionButtonTapPadding=_actionButtonTapPadding;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)_didTapButton:(id)arg1;
- (void)updateAction:(id)arg1 image:(id)arg2;
- (void)updateAction:(id)arg1 status:(id)arg2;
- (void)updateAction:(id)arg1;
- (void)removeAllActions;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithActions:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

