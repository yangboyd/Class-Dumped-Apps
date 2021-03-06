//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BDPSubContainerVCProtocol-Protocol.h"

@class BDPToolBarView, NSString;
@protocol BDPBaseVCProtocol;

@interface BDPBaseSubContainerViewController : UIViewController <BDPSubContainerVCProtocol>
{
    UIViewController<BDPBaseVCProtocol> *_baseVC;
    BDPToolBarView *_toolBarView;
}

+ (void)bootstrapLaunch;
@property(retain, nonatomic) BDPToolBarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(nonatomic) __weak UIViewController<BDPBaseVCProtocol> *baseVC; // @synthesize baseVC=_baseVC;
- (void).cxx_destruct;
- (id)topView;
- (_Bool)getMoreButtonFrame:(struct CGRect *)arg1 navigationBarFrame:(struct CGRect *)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)innerWebViewAndVisibleRect:(struct CGRect *)arg1;
- (void)forceStopRunning;
- (void)updateSchema:(id)arg1;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)setToolBarMoreButtonCustomMenu:(id)arg1;
- (id)jsBridgeEngine;
- (void)observeWindowResize:(id)arg1;
- (void)setupChildViewController:(id)arg1;
- (void)setupSubNav:(id)arg1 isColdBoot:(_Bool)arg2;
- (id)subNavi;
- (void)viewDidLoad;
- (id)initWithBaseVC:(id)arg1;
- (id)uniqueID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

