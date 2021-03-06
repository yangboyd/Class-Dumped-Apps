//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GIMMe;
@protocol YTUploadLocationPermissionsViewControllerDelegate;

@interface YTUploadLocationPermissionsViewController : UIViewController
{
    GIMMe *_gimme;
    id <YTUploadLocationPermissionsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTUploadLocationPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)didTapCloseButton;
- (void)didChangePermissionsStatus;
- (void)openSettings;
- (void)requestLocationAccess;
- (void)updatePermissionsView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;

@end

