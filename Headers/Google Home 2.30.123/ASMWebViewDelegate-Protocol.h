//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL, UIScrollView;

@protocol ASMWebViewDelegate
- (void)locationHistoryChanged;
- (void)resizeDidFinish;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)verifyActualAccountID:(NSString *)arg1;
- (void)openNewViewControllerWithURL:(NSURL *)arg1;
- (void)goBackOrClose;
- (void)setBackStop;
- (void)close;
- (_Bool)showsNativeUIToOpenURL:(NSURL *)arg1;
- (void)openURLInWebBrowser:(NSURL *)arg1;
- (void)openURL:(NSURL *)arg1;
- (void)hideKeyboard;
- (void)hideAppBarWithDuration:(double)arg1;
- (void)showAppBarWithDuration:(double)arg1;
- (void)resetAppBar;
- (void)setHelpURL:(NSURL *)arg1;
- (void)setAccountDisplay:(long long)arg1;
- (void)setTitleType:(long long)arg1;
- (void)setTitleText:(NSString *)arg1;
- (void)setUpButtonActon:(long long)arg1;
@end

