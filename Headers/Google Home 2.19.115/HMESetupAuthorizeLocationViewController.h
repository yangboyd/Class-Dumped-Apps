//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupAnimationLayoutViewController.h"

@protocol HMESetupAuthorizeLocationViewControllerDelegate;

@interface HMESetupAuthorizeLocationViewController : HMESetupAnimationLayoutViewController
{
    id <HMESetupAuthorizeLocationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HMESetupAuthorizeLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openSettings;
- (void)viewDidLoad;
- (id)init;

@end

