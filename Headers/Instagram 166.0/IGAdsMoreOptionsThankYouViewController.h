//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGAdsMoreOptionsThankYouViewDelegate-Protocol.h>

@class IGAdsMoreOptionsActionModel, IGAdsMoreOptionsThankYouView, NSString;
@protocol IGAdsMoreOptionsThankYouViewControllerDelegate;

@interface IGAdsMoreOptionsThankYouViewController : IGViewController <IGAdsMoreOptionsThankYouViewDelegate>
{
    IGAdsMoreOptionsActionModel *_adsAction;
    IGAdsMoreOptionsThankYouView *_thankYouView;
    id <IGAdsMoreOptionsThankYouViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAdsMoreOptionsThankYouViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)adsMoreOptionsThankYouView:(id)arg1 didTapAboutAdsButton:(id)arg2;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAdsAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

