//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWSkinnableButton, CBILogger, UIButton, UILabel;
@protocol AMIMarketplace;

@interface CrossBorderInterstitialVC : UIViewController
{
    id <AMIMarketplace> _switchingMarketplace;
    CDUnknownBlockType _completion;
    CBILogger *_cbiLogger;
    AWSkinnableButton *_gotoMarketplaceButton;
    AWSkinnableButton *_stayOnAmazonButton;
    UIButton *_cancelButton;
    UIButton *_dontShowMeCheckBoxButton;
    UILabel *_localMarketplaceLabel;
    UILabel *_aisMarketplaceLabel;
    UILabel *_welcomeLabel;
    UILabel *_orLabel;
    UILabel *_dontShowMeLabel;
}

@property(nonatomic) __weak UILabel *dontShowMeLabel; // @synthesize dontShowMeLabel=_dontShowMeLabel;
@property(nonatomic) __weak UILabel *orLabel; // @synthesize orLabel=_orLabel;
@property(nonatomic) __weak UILabel *welcomeLabel; // @synthesize welcomeLabel=_welcomeLabel;
@property(nonatomic) __weak UILabel *aisMarketplaceLabel; // @synthesize aisMarketplaceLabel=_aisMarketplaceLabel;
@property(nonatomic) __weak UILabel *localMarketplaceLabel; // @synthesize localMarketplaceLabel=_localMarketplaceLabel;
@property(nonatomic) __weak UIButton *dontShowMeCheckBoxButton; // @synthesize dontShowMeCheckBoxButton=_dontShowMeCheckBoxButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak AWSkinnableButton *stayOnAmazonButton; // @synthesize stayOnAmazonButton=_stayOnAmazonButton;
@property(nonatomic) __weak AWSkinnableButton *gotoMarketplaceButton; // @synthesize gotoMarketplaceButton=_gotoMarketplaceButton;
@property(retain, nonatomic) CBILogger *cbiLogger; // @synthesize cbiLogger=_cbiLogger;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak id <AMIMarketplace> switchingMarketplace; // @synthesize switchingMarketplace=_switchingMarketplace;
- (void).cxx_destruct;
- (void)toggleDontShowMeAction;
- (void)cancelAction;
- (void)stayOnAmazonAction;
- (void)gotoMarketplaceAction;
- (void)setCountryFlag:(id)arg1 forButton:(id)arg2;
- (void)viewDidLoad;
- (id)initWithSwitchingMarketplace:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

