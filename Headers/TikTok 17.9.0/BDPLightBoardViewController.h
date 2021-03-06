//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BDPLightBoardWebView;
@protocol BDPBaseVCProtocol;

@interface BDPLightBoardViewController : UIViewController
{
    unsigned long long _loadResultType;
    BDPLightBoardWebView *_webView;
    UIViewController<BDPBaseVCProtocol> *_baseVC;
}

@property(nonatomic) __weak UIViewController<BDPBaseVCProtocol> *baseVC; // @synthesize baseVC=_baseVC;
@property(retain) BDPLightBoardWebView *webView; // @synthesize webView=_webView;
@property unsigned long long loadResultType; // @synthesize loadResultType=_loadResultType;
- (void).cxx_destruct;
- (id)urlAddLangAndMainOperateColor:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithBaseVC:(id)arg1 loadResultType:(unsigned long long)arg2;

@end

