//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface _TtC4Hulu26NetworkErrorViewController : UIViewController
{
    // Error parsing type: , name: retryHandler
    // Error parsing type: , name: logoutHandler
    // Error parsing type: , name: cancelHandler
    // Error parsing type: , name: shouldShowLogoutButton
    // Error parsing type: , name: hasDownloadCapability
    // Error parsing type: , name: shouldShowDownloadsButton
    // Error parsing type: , name: shouldShowProfileSelectionButton
    // Error parsing type: , name: shouldShowRetryButton
    // Error parsing type: , name: shouldShowCancelButton
    // Error parsing type: , name: error
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: networkErrorView
    // Error parsing type: , name: keyboardObserver
    // Error parsing type: , name: appDelegate
    // Error parsing type: , name: serviceManager
    // Error parsing type: , name: keyboardHeight
}

- (void).cxx_destruct;
- (void)dismissKeyboard;
- (void)cancelButtonTapped:(id)arg1;
- (void)profileSelectionButtonTapped:(id)arg1;
- (void)downloadsButtonTapped:(id)arg1;
- (void)logoutButtonTapped:(id)arg1;
- (void)retryButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

