//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, UACustomModel, UIActivityIndicatorView;

@interface UAWebViewController : UIViewController <WKUIDelegate, WKNavigationDelegate>
{
    NSString *_webUrlStr;
    NSString *_name;
    UACustomModel *_customModel;
    UIActivityIndicatorView *_activityV;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityV; // @synthesize activityV=_activityV;
@property(retain, nonatomic) UACustomModel *customModel; // @synthesize customModel=_customModel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *webUrlStr; // @synthesize webUrlStr=_webUrlStr;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)dealloc;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)clickNavBack:(id)arg1;
- (void)customBodyView;
- (void)customNavView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

