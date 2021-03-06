//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GBTFilledButton, NSObject, NSString, UILabel, UIView;
@protocol GBTGM2DialogViewControllerDelegate, GBTGM2DismissalDialogViewControllerDelegate;

@interface GBTGM2DialogViewController : UIViewController
{
    UIView *_contentView;
    UIView *_descriptionView;
    GBTFilledButton *_acknowledgeButton;
    NSString *_acknowledgeButtonTitle;
    NSString *_dialogTitle;
    UILabel *_dialogTitleLabel;
    NSObject<GBTGM2DialogViewControllerDelegate> *_dialogViewControllerDelegate;
    NSObject<GBTGM2DismissalDialogViewControllerDelegate> *_dismissalDelegate;
}

+ (id)dialogWithDelegate:(id)arg1 dismissalDelegate:(id)arg2;
- (void).cxx_destruct;
- (void)layoutViewsForPortrait;
- (void)layoutViewsForLandscape;
- (void)acknowledgeButtonTapped;
- (void)cleanup;
- (id)initWithDelegate:(id)arg1 dismissalDelegate:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

