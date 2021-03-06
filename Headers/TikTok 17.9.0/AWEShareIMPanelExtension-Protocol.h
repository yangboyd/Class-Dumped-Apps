//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareView-Protocol.h"

@class AWEShareContext, UIView, UIViewController;
@protocol AWEShareIMPanel, AWEShareTask;

@protocol AWEShareIMPanelExtension <AWEShareView>
@property(readonly, nonatomic) UIView *shareView;
@property(readonly, nonatomic) AWEShareContext *context;
@property(readonly, nonatomic) id <AWEShareTask> task;
- (void)addDismissedHandler:(void (^)(void))arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;

@optional
- (void)shareIMPanelDidDisappear:(UIViewController<AWEShareIMPanel> *)arg1;
- (void)shareIMPanelWillDisappear:(UIViewController<AWEShareIMPanel> *)arg1;
- (void)shareIMPanelDidAppear:(UIViewController<AWEShareIMPanel> *)arg1;
- (void)shareIMPanelWillAppear:(UIViewController<AWEShareIMPanel> *)arg1;
@end

