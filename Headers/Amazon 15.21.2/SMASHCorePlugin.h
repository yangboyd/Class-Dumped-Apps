//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDVPlugin.h"

@class SCPContactPicker, SCPEasyActionSheet;

@interface SMASHCorePlugin : CDVPlugin
{
    SCPEasyActionSheet *_actionSheet;
    SCPContactPicker *_contactPicker;
}

@property(retain, nonatomic) SCPContactPicker *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) SCPEasyActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (_Bool)isNonemptyNSString:(id)arg1;
- (id)createActionSheet;
- (id)getRootViewControllerView;
- (void)notifyPopState:(id)arg1;
- (void)notifyHashChange:(id)arg1;
- (void)updateDocumentTitle:(id)arg1;
- (void)openFileChooser:(id)arg1;
- (void)videoDidFinish:(id)arg1;
- (void)playVideoURL:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (void)exitEmbeddedBrowser:(id)arg1;
- (void)showEmbeddedBrowser:(id)arg1;
- (void)canLaunchIntentURL:(id)arg1;
- (void)launchIntentURL:(id)arg1;
- (void)addEventListener:(id)arg1;
- (void)showContactPicker:(id)arg1;
- (void)goBack:(id)arg1;
- (void)navigate:(id)arg1;
- (void)openInExternalBrowser:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)showChooser:(id)arg1;
- (id)embeddedBrowser;
- (id)viewController;
- (void)handleEventDispatched:(id)arg1;
- (void)dealloc;
- (id)init;

@end

