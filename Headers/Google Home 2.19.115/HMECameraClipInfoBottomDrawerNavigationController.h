//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCBottomDrawerViewController.h"

@class MDCAppBarViewController, NSString, UIImageView;
@protocol HMECameraClipInfoBottomDrawerNavigationControllerDelegate;

@interface HMECameraClipInfoBottomDrawerNavigationController : MDCBottomDrawerViewController
{
    id <HMECameraClipInfoBottomDrawerNavigationControllerDelegate> _navigationDelegate;
    MDCAppBarViewController *_appBarViewController;
    UIImageView *_partnerAttributionImageView;
    NSString *_partnerIconURLString;
}

+ (id)navigationDrawerWithContentViewController:(id)arg1 partnerIconURLString:(id)arg2;
@property(copy, nonatomic) NSString *partnerIconURLString; // @synthesize partnerIconURLString=_partnerIconURLString;
@property(retain, nonatomic) UIImageView *partnerAttributionImageView; // @synthesize partnerAttributionImageView=_partnerAttributionImageView;
@property(retain, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
@property(nonatomic) __weak id <HMECameraClipInfoBottomDrawerNavigationControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void).cxx_destruct;
- (void)didTapPartnerAttributionBarButton;
- (void)didTapOverflowBarButton;
- (void)didTapDismissButton;
- (void)bottomDrawerTopDidChangeYOffset:(id)arg1 yOffset:(double)arg2;
- (void)buildPartnerAttributionButtonWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setupNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPartnerIconURLString:(id)arg1;

@end

