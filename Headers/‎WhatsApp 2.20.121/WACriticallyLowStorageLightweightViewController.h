//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WACriticallyLowStorageViewControllerProtocol-Protocol.h"

@class UIButton, UILabel, WAGradientView;

@interface WACriticallyLowStorageLightweightViewController : UIViewController <WACriticallyLowStorageViewControllerProtocol>
{
    UILabel *_labelTitle;
    UILabel *_labelBody;
    UILabel *_labelItem1;
    UILabel *_labelItem2;
    UILabel *_labelItem3;
    UILabel *_labelDescription1;
    UILabel *_labelDescription2;
    UILabel *_labelDescription3;
    UIButton *_exitButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(nonatomic) __weak UILabel *labelDescription3; // @synthesize labelDescription3=_labelDescription3;
@property(nonatomic) __weak UILabel *labelDescription2; // @synthesize labelDescription2=_labelDescription2;
@property(nonatomic) __weak UILabel *labelDescription1; // @synthesize labelDescription1=_labelDescription1;
@property(nonatomic) __weak UILabel *labelItem3; // @synthesize labelItem3=_labelItem3;
@property(nonatomic) __weak UILabel *labelItem2; // @synthesize labelItem2=_labelItem2;
@property(nonatomic) __weak UILabel *labelItem1; // @synthesize labelItem1=_labelItem1;
@property(nonatomic) __weak UILabel *labelBody; // @synthesize labelBody=_labelBody;
@property(nonatomic) __weak UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(readonly, nonatomic) __weak WAGradientView *backgroundView;
- (void)dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)init;

@end

