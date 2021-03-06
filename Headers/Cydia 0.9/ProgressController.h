//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CydiaWebViewController.h"

#import "ProgressDelegate-Protocol.h"

@class Database;

@interface ProgressController : CydiaWebViewController <ProgressDelegate>
{
    Database *database_;
    struct MenesObjectHandle<CydiaProgressData, 1> progress_;
    unsigned int cancel_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setProgressStatus:(id)arg1;
- (void)setProgressPercent:(id)arg1;
- (void)setProgressCancellable:(id)arg1;
- (void)setCancellable:(_Bool)arg1;
- (void)cancel;
- (_Bool)isProgressCancelled;
- (void)addProgressEvent:(id)arg1;
- (void)invoke:(id)arg1 withTitle:(id)arg2;
- (id)rightButton;
- (void)setTitle:(id)arg1;
- (void)close;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateProgress;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (id)initWithDatabase:(id)arg1 delegate:(id)arg2;
- (void)updateCancel;
- (id)leftButton;
- (void)dealloc;

@end

