//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class LoadingViewController;
@protocol LoginViewDelegate;

@interface BaseLoginViewController : UIViewController
{
    id <LoginViewDelegate> _delegate;
    LoadingViewController *_loadingViewController;
}

@property(retain, nonatomic) LoadingViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(nonatomic) __weak id <LoginViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

