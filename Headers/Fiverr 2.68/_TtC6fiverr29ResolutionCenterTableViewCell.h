//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel, UITextView;
@protocol _TtP6fiverr37ResolutionCenterTableViewCellDelegate_;

@interface _TtC6fiverr29ResolutionCenterTableViewCell : UITableViewCell
{
    // Error parsing type: , name: solutionTitleLabel
    // Error parsing type: , name: solutionSubTitleLabel
    // Error parsing type: , name: textViewHeightConstraint
    // Error parsing type: , name: resolutionItem
    // Error parsing type: , name: delegate
    // Error parsing type: , name: textViewDefaultHeight
    // Error parsing type: , name: maxMessageCharCount
    // Error parsing type: , name: solutionWithdrawButton
    // Error parsing type: , name: solutionDeclineButton
    // Error parsing type: , name: solutionAcceptButton
    // Error parsing type: , name: solutionReplyTextView
    // Error parsing type: , name: solutionReplyPlaceHolderLabel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)acceptButtonClicked:(id)arg1;
- (void)declineButtonClicked:(id)arg1;
- (void)withdrawButtonClicked:(id)arg1;
- (void)configureWithResolutionItem:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(nonatomic, retain) UILabel *solutionReplyPlaceHolderLabel; // @synthesize solutionReplyPlaceHolderLabel;
@property(nonatomic, retain) UITextView *solutionReplyTextView; // @synthesize solutionReplyTextView;
@property(nonatomic, retain) UIButton *solutionAcceptButton; // @synthesize solutionAcceptButton;
@property(nonatomic, retain) UIButton *solutionDeclineButton; // @synthesize solutionDeclineButton;
@property(nonatomic, retain) UIButton *solutionWithdrawButton; // @synthesize solutionWithdrawButton;
@property(nonatomic) __weak id <_TtP6fiverr37ResolutionCenterTableViewCellDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak NSLayoutConstraint *textViewHeightConstraint; // @synthesize textViewHeightConstraint;
@property(nonatomic) __weak UILabel *solutionSubTitleLabel; // @synthesize solutionSubTitleLabel;
@property(nonatomic) __weak UILabel *solutionTitleLabel; // @synthesize solutionTitleLabel;

@end

