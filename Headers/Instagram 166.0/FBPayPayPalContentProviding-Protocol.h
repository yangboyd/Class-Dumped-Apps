//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSString;

@protocol FBPayPayPalContentProviding <NSObject>
- (NSString *)viewControllerDismissalAlertCloseText;
- (NSString *)viewControllerDismissalAlertStayText;
- (NSString *)viewControllerDismissalAlertMessageText;
- (NSString *)viewControllerDismissalAlertTitleText;
- (NSString *)viewControllerActionButtonText;
- (NSString *)viewControllerTermsUrl;
- (NSString *)viewControllerTerms;
- (NSString *)viewControllerDescriptionText;
- (NSString *)viewControllerSubtitleText;
- (NSString *)viewControllerTitleText;
- (void)reloadContentWithScreenType:(long long)arg1 completion:(void (^)(void))arg2;
@end

