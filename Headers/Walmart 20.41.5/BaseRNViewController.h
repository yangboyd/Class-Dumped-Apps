//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WalmartCore/ERNFeatureViewModelDelegate-Protocol.h>
#import <WalmartCore/LaunchCaptchaPerimieterXDelegate-Protocol.h>
#import <WalmartCore/WalmartLocationAPIDelegate-Protocol.h>
#import <WalmartCore/WalmartNavigationProtocol-Protocol.h>

@class NSDictionary, NSString, UIView;
@protocol _TtP11FeatureAPIs25ERNFeatureHeaderViewModel_;

@interface BaseRNViewController : UIViewController <ERNFeatureViewModelDelegate, WalmartLocationAPIDelegate, WalmartNavigationProtocol, LaunchCaptchaPerimieterXDelegate>
{
    NSString *_miniAppName;
    CDUnknownBlockType _finishedCallback;
    UIView *_rnView;
    NSDictionary *_properties;
    NSString *_rightIdentifier;
    NSString *_leftIdentifier;
    id <_TtP11FeatureAPIs25ERNFeatureHeaderViewModel_> _viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP11FeatureAPIs25ERNFeatureHeaderViewModel_> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *leftIdentifier; // @synthesize leftIdentifier=_leftIdentifier;
@property(retain, nonatomic) NSString *rightIdentifier; // @synthesize rightIdentifier=_rightIdentifier;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) __weak UIView *rnView; // @synthesize rnView=_rnView;
@property(copy, nonatomic) CDUnknownBlockType finishedCallback; // @synthesize finishedCallback=_finishedCallback;
@property(retain, nonatomic) NSString *miniAppName; // @synthesize miniAppName=_miniAppName;
- (void)launchCaptcha:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)handleNavigationRequestWithPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)handleFinishFlow:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateNavigationItem;
- (void)didResetNavBar;
- (void)navBarUpdated;
- (void)barButtonItemsUpdated;
- (void)headerTitleUpdated;
- (void)onBackButtonClick;
- (void)launchLocationViewWithOptions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)convertDictionaryToJSONString:(id)arg1;
- (void)emitQuimbyCCMModel;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithProperties:(id)arg1 withMiniAppName:(id)arg2;
- (id)initWithProperties:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

