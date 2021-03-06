//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEE911BottomDrawerContentViewControllerDelegate-Protocol.h"
#import "HMEE911Coordinator-Protocol.h"

@class NSString, NSTimer, UIViewController;
@protocol HMEE911NetworkService, HMELinkOpener, HMEStructureData, HMEUserData;

@interface HMEE911Coordinator : NSObject <HMEE911BottomDrawerContentViewControllerDelegate, HMEE911Coordinator>
{
    _Bool _isE911ActionInProgress;
    NSString *_structureID;
    id <HMEE911NetworkService> _networkService;
    id <HMEStructureData> _structureData;
    id <HMEUserData> _userData;
    NSTimer *_e911Timer;
    UIViewController *_bottomSheet;
    id <HMELinkOpener> _linkOpener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
@property(retain, nonatomic) UIViewController *bottomSheet; // @synthesize bottomSheet=_bottomSheet;
@property(retain, nonatomic) NSTimer *e911Timer; // @synthesize e911Timer=_e911Timer;
@property(nonatomic) _Bool isE911ActionInProgress; // @synthesize isE911ActionInProgress=_isE911ActionInProgress;
@property(readonly, nonatomic) id <HMEUserData> userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) id <HMEE911NetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
- (void)callPhoneNumber:(id)arg1;
- (void)e911BottomDrawerContentViewController:(id)arg1 shouldPresentSafetyTips:(long long)arg2;
- (void)e911BottomDrawerContentViewController:(id)arg1 shouldCallProxyNumber:(id)arg2;
- (void)callTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissE911BottomSheet;
- (void)presentE911BottomSheetWithAddress:(id)arg1 proxyNumber:(id)arg2 expiration:(id)arg3 safetyTipsKind:(long long)arg4 presentingViewController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showE911BottomSheetInViewController:(id)arg1 proxyPhoneNumberTarget:(long long)arg2 safetyTipsKind:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)disableFeatureWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFeatureStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)addEnterForegroundObserver;
- (id)initWithStructureID:(id)arg1 linkOpener:(id)arg2 networkService:(id)arg3 structureData:(id)arg4 userData:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

