//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSDictionary, NSString, WAActivityIndicatorView, WABloksFallbackHandler, WABloksHostingView, WABloksNavigationBarConfiguration, WABloksXMPPIQHandler, WADropDownAlertView;

@interface WABloksViewController : WAViewController
{
    _Bool _cancelEnabled;
    WABloksFallbackHandler *_fallbackHandler;
    WAActivityIndicatorView *_activityIndicator;
    NSString *_appID;
    WABloksXMPPIQHandler *_iqHandler;
    NSDictionary *_params;
    WABloksHostingView *_bloksView;
    WABloksNavigationBarConfiguration *_navBarConfig;
    WADropDownAlertView *_errorBannerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WADropDownAlertView *errorBannerView; // @synthesize errorBannerView=_errorBannerView;
@property(retain, nonatomic) WABloksNavigationBarConfiguration *navBarConfig; // @synthesize navBarConfig=_navBarConfig;
@property(retain, nonatomic) WABloksHostingView *bloksView; // @synthesize bloksView=_bloksView;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) WABloksXMPPIQHandler *iqHandler; // @synthesize iqHandler=_iqHandler;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) WAActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) WABloksFallbackHandler *fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(nonatomic) _Bool cancelEnabled; // @synthesize cancelEnabled=_cancelEnabled;
- (void)close;
- (void)handleErrorWithMessage:(id)arg1;
- (id)createBloksContext;
- (void)renderWithBloksLayoutModel:(id)arg1;
- (void)displayContentController:(id)arg1;
- (void)hideContentController:(id)arg1;
- (void)showPrivacyNotice;
- (void)refreshViewData;
- (void)viewDidLoad;
- (id)initWithAppID:(id)arg1 params:(id)arg2 navigationBarConfiguration:(id)arg3;

@end

