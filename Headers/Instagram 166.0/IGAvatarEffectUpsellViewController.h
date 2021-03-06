//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>

@class IGBottomButtonsView, NSString, UIImageView, UILabel, UIScrollView, UITextView;

@interface IGAvatarEffectUpsellViewController : UIViewController <IGGestureHandler>
{
    IGBottomButtonsView *_bottomButtonsView;
    UIScrollView *_scrollView;
    UIImageView *_headerImageView;
    UILabel *_headerLabel;
    UITextView *_descriptionTextView;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_updateHeaderImageView;
- (void)_makeYourAvatarButtonTapped;
- (void)_notNowButtonTapped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

