//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UIButton;
@protocol IGLiveCommentTextFieldButtonsContainerViewDelegate;

@interface IGLiveCommentTextFieldButtonsContainerView : UIView
{
    UIButton *_moreButton;
    IGTapButton *_postButton;
    id <IGLiveCommentTextFieldButtonsContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveCommentTextFieldButtonsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_postButtonTapped;
- (void)_moreButtonTapped;
- (void)showMoreButton:(_Bool)arg1;
- (void)showPostButton:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

