//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGFollowControllerLoggingProvider-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGImageView, IGProfileActionBarView, IGStackLayout, IGTabControl, IGUser, NSString, UIButton, UILabel;
@protocol IGDiscoveryMapLocationDetailHeaderViewDelegate;

@interface IGDiscoveryMapLocationDetailHeaderView : UIView <IGFollowControllerLoggingProvider, UIGestureRecognizerDelegate>
{
    IGImageView *_lowResImageView;
    IGImageView *_fullResImageView;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UILabel *_priceAndHoursLabel;
    UIButton *_viewInformationButton;
    UIButton *_sendButton;
    UIButton *_overflowButton;
    IGStackLayout *_buttonLayout;
    IGStackLayout *_textLayout;
    double _imageOffset;
    IGUser *_businessUser;
    _Bool _shouldLayoutForPartialReveal;
    id <IGDiscoveryMapLocationDetailHeaderViewDelegate> _delegate;
    IGTabControl *_tabControl;
    IGProfileActionBarView *_compactActionBar;
}

+ (double)heightForPartialModalSheet;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldLayoutForPartialReveal; // @synthesize shouldLayoutForPartialReveal=_shouldLayoutForPartialReveal;
@property(readonly, nonatomic) IGProfileActionBarView *compactActionBar; // @synthesize compactActionBar=_compactActionBar;
@property(readonly, nonatomic) IGTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(nonatomic) __weak id <IGDiscoveryMapLocationDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupTextLayoutChildren;
- (id)analyticsExtras;
- (void)_didTapViewInformationButton;
- (void)_imageTapped:(id)arg1;
- (void)_overflowButtonTapped;
- (void)_sendButtonTapped;
- (void)updateWithSize:(struct CGSize)arg1;
- (double)minHeightForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithLocationInfo:(id)arg1 businessUser:(id)arg2 distanceString:(id)arg3 compactActionBarModel:(id)arg4 lowResImageSpecifier:(id)arg5 fullResImageSpecifier:(id)arg6 imageOffset:(double)arg7 followController:(id)arg8 userSession:(id)arg9 analyticsModule:(id)arg10;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

