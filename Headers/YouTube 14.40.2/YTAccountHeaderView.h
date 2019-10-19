//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"
#import "YTVariableHeightHeaderForwardingTouches.h"

@class CALayer, NSArray, NSString, QTMButton, UIControl, UIImageView, YTCollectionSeparatorView, YTFormattedStringLabel, YTImageView, YTViewGroup;

@interface YTAccountHeaderView : UIView <YTVariableHeightHeaderForwardingTouches, YTPageStyling>
{
    UIView *_backgroundView;
    YTViewGroup *_nameAndEmailViewGroup;
    CALayer *_avatarImageViewTintLayer;
    YTFormattedStringLabel *_titleLabel;
    UIImageView *_arrowExpandImageView;
    UIControl *_titleArrowHitTarget;
    YTCollectionSeparatorView *_hairlineBorder;
    QTMButton *_uploadButton;
    YTFormattedStringLabel *_membershipStatusLabel;
    UIView *_membershipStatusContainer;
    YTFormattedStringLabel *_emailLabel;
    YTFormattedStringLabel *_manageAccountLabel;
    double _backgroundHeight;
    NSArray *_avatarAndManageAccountsViews;
    YTImageView *_avatarImageView;
}

@property(readonly, nonatomic) YTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)titleTouchUp;
- (void)titleTouchDown;
- (void)avatarTouchUp;
- (void)avatarTouchDown;
- (void)resetTapManageAccountTarget;
- (void)resetTapAvatarTarget;
- (void)setTapUploadTarget:(id)arg1 action:(SEL)arg2;
- (void)sizeViewsForWidth:(double)arg1;
- (double)backgroundHeight;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) NSArray *touchForwardingViews;
- (id)accessibilityElements;
- (void)setMembershipStatus:(id)arg1;
- (void)setHeaderFabModel:(id)arg1;
- (void)setTapManageAccountTarget:(id)arg1 action:(SEL)arg2;
- (void)setTapTitleTarget:(id)arg1 action:(SEL)arg2;
- (void)setTapAvatarTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)setManageAccountText:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;
- (double)avatarImageSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

