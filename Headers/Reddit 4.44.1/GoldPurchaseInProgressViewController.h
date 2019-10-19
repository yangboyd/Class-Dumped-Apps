//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PopupViewController.h"

#import "RequestToNavigateView-Protocol.h"

@class BaseView, NSString, UIImageView, UILabel;

@interface GoldPurchaseInProgressViewController : PopupViewController <RequestToNavigateView>
{
    UIImageView *_headerImageView;
    UILabel *_loadingTitleLabel;
    UILabel *_loadingMessageLabel;
    BaseView *_dialogContentView;
    NSString *_loadingTitle;
    NSString *_loadingMessage;
    NSString *_headerImageName;
}

+ (id)viewControllerForPremiumMembershipPurchase;
+ (id)viewControllerForCoinPurchase;
@property(copy, nonatomic) NSString *headerImageName; // @synthesize headerImageName=_headerImageName;
@property(copy, nonatomic) NSString *loadingMessage; // @synthesize loadingMessage=_loadingMessage;
@property(copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property(retain, nonatomic) BaseView *dialogContentView; // @synthesize dialogContentView=_dialogContentView;
@property(retain, nonatomic) UILabel *loadingMessageLabel; // @synthesize loadingMessageLabel=_loadingMessageLabel;
@property(retain, nonatomic) UILabel *loadingTitleLabel; // @synthesize loadingTitleLabel=_loadingTitleLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void).cxx_destruct;
- (void)requestToNavigateAwayWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 headerImageName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

