//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IGPromoteBottomNotificationView;

@interface IGPromoteBottomNotificationViewController : UIViewController
{
    IGPromoteBottomNotificationView *_bottomNotificationView;
    double _bottomOffset;
}

- (void).cxx_destruct;
- (void)_animateWithEndingAlpha:(double)arg1 endingY:(double)arg2;
- (void)hideBottomNotificationView;
- (void)showBottomNotificationView;
- (void)configureWithImage:(id)arg1 styledBody:(id)arg2 bottomOffset:(double)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

