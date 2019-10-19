//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AcquisitionMessageResponder-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class NSString, WKWebView;
@protocol AcquisitionControllerProtocol;

@interface AcquisitionBridge : NSObject <WKScriptMessageHandler, AcquisitionMessageResponder>
{
    id <AcquisitionControllerProtocol> _acquisitionController;
    WKWebView *_webView;
}

@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)sendResponseToWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createResponseWithData:(id)arg1 rid:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
@property(readonly, nonatomic) id <AcquisitionControllerProtocol> acquisitionController; // @synthesize acquisitionController=_acquisitionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

