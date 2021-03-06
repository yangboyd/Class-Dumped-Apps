//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBPayViewStyleConfiguring-Protocol.h>

@class IGUserSession, NSString;

@interface IGFBPayViewStyleConfiguration : NSObject <FBPayViewStyleConfiguring>
{
    IGUserSession *_session;
}

- (void).cxx_destruct;
- (void)registerImageDownloader:(id)arg1;
- (void)loadIcon:(long long)arg1 tintColor:(id)arg2 size:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldShowShopPay;
- (_Bool)shouldEnableUXConsistency;
- (_Bool)shouldShowLegalName;
- (id)session;
- (void)registerSession:(id)arg1;
- (void)showLoadingErrorViewInView:(id)arg1 retryBlock:(CDUnknownBlockType)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
- (void)dismissLoadingViewInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showLoadingViewInView:(id)arg1 isPlatformSpecific:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createRadioButtonWithSelectionState:(_Bool)arg1;
- (id)bannerViewWithViewModel:(id)arg1;
- (void)fetchNetworkImageForView:(id)arg1 request:(id)arg2;
- (id)createAndFetchNetworkImageViewWithFrame:(struct CGRect)arg1 shouldBackgroundDecode:(_Bool)arg2 shouldUseProgressiveJPEG:(_Bool)arg3 request:(id)arg4;
- (id)createNetworkImageViewWithFrame:(struct CGRect)arg1 shouldBackgroundDecode:(_Bool)arg2 shouldUseProgressiveJPEG:(_Bool)arg3;
- (void)showAlertViewFromController:(id)arg1 title:(id)arg2 description:(id)arg3 actions:(id)arg4;
- (id)richTextView:(id)arg1;
- (id)loadingIndicatorView;
- (id)formButtonCellFont;
- (id)formToggleCellFont;
- (double)formLineSpacing;
- (double)formButtonHeight;
- (double)formCellHeight;
- (struct UIEdgeInsets)safeInsets;
- (void)configureNavigationBarWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 viewController:(id)arg4;
- (id)bottomSheetControllerWithHostingVC:(id)arg1;
- (void)openUrl:(id)arg1 presentingVC:(id)arg2;
- (id)webControllerWithURL:(id)arg1 source:(id)arg2 session:(id)arg3;
- (id)webViewControllerWithURL:(id)arg1 source:(id)arg2 session:(id)arg3;
- (double)secondaryFontSize;
- (double)primaryFontSize;
- (id)headerFont;
- (id)lightFontWithSize:(double)arg1;
- (id)semiboldFontWithSize:(double)arg1;
- (id)boldFontWithSize:(double)arg1;
- (id)mediumFontWithSize:(double)arg1;
- (id)regularFontWithSize:(double)arg1;
- (id)transparentOverlayColor;
- (id)successColor;
- (id)buttonTextOnColor;
- (id)emphasizedAction;
- (id)mediaBorderColor;
- (id)cardBackgroundColor;
- (id)footerButtonTextColor;
- (id)footerButtonSeparatorColor;
- (id)footerButtonBackgroundColor;
- (id)placeholderIconColor;
- (id)secondaryIconColor;
- (id)primaryIconColor;
- (id)primaryTextOnMedia;
- (id)disabledButtonBackgroundColor;
- (id)deemphasizedButtonBackgroundColor;
- (id)secondaryButtonPressedColor;
- (id)secondaryButtonColor;
- (id)primaryButtonColor;
- (id)placeholderTextColor;
- (id)disabledTextColor;
- (id)highlightTextColor;
- (id)secondaryTextColor;
- (id)primaryTextColor;
- (id)linkColor;
- (id)separatorColor;
- (id)errorColor;
- (id)accentColor;
- (id)secondaryBackgroundColor;
- (id)backgroundColor;
- (id)fbpayBrandingCTATextColor;
- (id)fbpayBrandingCTABackgroundColor;
- (id)fbpayBrandingLogo;
- (long long)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

