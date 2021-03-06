//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class AcquisitionWebViewController, NSString, NativeNMHPViewController;
@protocol _TtP8ArgoCore8ACFModel_;

@interface AcquisitionNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    AcquisitionWebViewController *_acquisitionWebViewController;
    NativeNMHPViewController *_acqusitionNativeHomeViewController;
    id <_TtP8ArgoCore8ACFModel_> _falcorModel;
}

+ (void)setDebugLocale;
+ (id)acquisitionNavigationControllerWithFalcorModel:(id)arg1;
@property(retain, nonatomic) id <_TtP8ArgoCore8ACFModel_> falcorModel; // @synthesize falcorModel=_falcorModel;
@property(retain, nonatomic) NativeNMHPViewController *acqusitionNativeHomeViewController; // @synthesize acqusitionNativeHomeViewController=_acqusitionNativeHomeViewController;
@property(retain, nonatomic) AcquisitionWebViewController *acquisitionWebViewController; // @synthesize acquisitionWebViewController=_acquisitionWebViewController;
- (void).cxx_destruct;
- (void)goBackToSignUp;
- (void)refreshNativeHomepage;
- (void)refreshWebView:(id)arg1;
- (void)refreshWebView;
- (void)setDeepLinkVideo:(id)arg1;
- (void)setInitialPath:(id)arg1;
- (void)setInitialFlow:(id)arg1;
- (void)setNetflixId:(id)arg1 secureNetflixId:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

