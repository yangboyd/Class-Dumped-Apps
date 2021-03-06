//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TikTokOAuthViewModel.h"

@class NSString, TikTokOAuthByQRCodeDataController;

@interface TikTokOAuthByQRCodeViewModel : TikTokOAuthViewModel
{
    _Bool _isAuthorized;
    TikTokOAuthByQRCodeDataController *_dataController;
    NSString *_consumerKey;
    NSString *_token;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(retain, nonatomic) TikTokOAuthByQRCodeDataController *dataController; // @synthesize dataController=_dataController;
- (id)callbackUserInfo;
- (void)hideAlertView;
- (void)dismissSelf;
- (void)failedWithError:(id)arg1 type:(int)arg2;
- (void)doFinish;
- (void)confirmQRCode;
- (void)fetchUserInfo;
- (void)notifyQRCodeIsScannedIfNeed;
- (void)fetchTicket;
- (void)didClickResultAlertInfo:(id)arg1;
- (void)didClickCheckResultAlertView:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)cancelButtonClicked;
- (void)authButtonClicked;
- (void)fetchData;
- (void)viewDidAppear;
- (id)initWithConsumerKey:(id)arg1 token:(id)arg2 scope:(id)arg3 authType:(long long)arg4;

@end

