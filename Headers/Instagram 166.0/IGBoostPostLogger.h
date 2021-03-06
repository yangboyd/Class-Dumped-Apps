//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGBoostPostLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_entryPoint;
    NSString *_mediaId;
    NSString *_waterfallID;
}

+ (id)loggerWithEntryPoint:(id)arg1 mediaId:(id)arg2 userSession:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void)_logEvent:(id)arg1 atStep:(id)arg2 additionalFields:(id)arg3;
- (void)_logEvent:(id)arg1 additionalFields:(id)arg2;
- (id)_configurations:(id)arg1;
- (id)_fbUserId;
- (void)didValidateBUATWithStep:(id)arg1 action:(id)arg2 configurations:(id)arg3;
- (void)willViewIntegrityDisapprovalMessage:(id)arg1;
- (void)didFetchPaymentRelatedErrorWithStep:(id)arg1 errorIdentifier:(id)arg2 errorLevel:(id)arg3 errorMessage:(id)arg4;
- (void)didSubmitErrorWithStep:(id)arg1 errorMessage:(id)arg2;
- (void)didSubmitSuccessWithStep:(id)arg1 configurations:(id)arg2;
- (void)didActionErrorWithStep:(id)arg1 action:(id)arg2 selectedValues:(id)arg3 errorMessage:(id)arg4;
- (void)didActionSuccessWithStep:(id)arg1 action:(id)arg2 selectedValues:(id)arg3;
- (void)didActionErrorWithStep:(id)arg1 action:(id)arg2 configurations:(id)arg3 errorMessage:(id)arg4;
- (void)didActionSuccessWithStep:(id)arg1 action:(id)arg2 configurations:(id)arg3;
- (void)didActionErrorWithStep:(id)arg1 action:(id)arg2 errorMessage:(id)arg3;
- (void)didActionSuccessWithStep:(id)arg1 action:(id)arg2;
- (void)didTapComponentWithStep:(id)arg1 component:(id)arg2 configurations:(id)arg3;
- (void)didViewComponentWithStep:(id)arg1 component:(id)arg2 configurations:(id)arg3;
- (void)didFinishStepWithStep:(id)arg1 selectedValues:(id)arg2;
- (void)didFinishStepErrorWithStep:(id)arg1 configurations:(id)arg2 errorMessage:(id)arg3;
- (void)didFinishStepErrorWithStep:(id)arg1 errorMessage:(id)arg2;
- (void)didFinishStepWithStep:(id)arg1 configurations:(id)arg2;
- (void)didFinishStepWithStep:(id)arg1;
- (void)didStartStepWithStep:(id)arg1 configurations:(id)arg2;
- (void)didFetchDataErrorWithStep:(id)arg1 action:(id)arg2 errorMessage:(id)arg3;
- (void)didFetchDataSuccessWithStep:(id)arg1 action:(id)arg2 configurations:(id)arg3;
- (void)didEnterErrorWithStep:(id)arg1 errorIdentifier:(id)arg2 errorMessage:(id)arg3;
- (void)didEnterSuccessWithStep:(id)arg1;
- (void)didLoadNexusLandingScreen:(_Bool)arg1 errorMessage:(id)arg2;
- (void)didTapCreateStory;
- (void)didTapCreatePost;
- (void)didTapFilterWithActionState:(id)arg1 parentUnit:(id)arg2 unit:(id)arg3;
- (void)didLongPressMediaThumbnail:(id)arg1;
- (void)didSelectMediaTab:(id)arg1;
- (void)didSelectMedia:(id)arg1 withEligiblity:(_Bool)arg2;
- (void)failToFetchDataMediaSelectionViewWithErrorMessage:(id)arg1;
- (void)didFetchDataSuccessMediaSelectionView;
- (void)failToLoadMediaSelectionViewWithErrorMessage:(id)arg1;
- (void)didEnterMediaSelectionViewWithNoMedia:(id)arg1 mediaGridType:(id)arg2;
- (void)didEnterMediaSelectionView;
- (void)didFinishMediaSelectionWithMediaGridType:(id)arg1;
- (void)didFinishMediaSelectionWithMediaId:(id)arg1 atIndex:(long long)arg2 mediaGridType:(id)arg3;
- (void)didCancelMediaSelection;
- (void)didTapClose;
- (void)didViewLinkAccountLogIntoAnotherAccountWithStep:(id)arg1;
- (void)didTapLinkAccountLogIntoAnotherAccountWithStep:(id)arg1;
- (void)didViewLinkAccountFBConnectWithStep:(id)arg1;
- (void)didTapLinkAccountFBConnectWithStep:(id)arg1;
- (void)didStartLinkAccountStepWithMediaId:(id)arg1 step:(id)arg2 fbUserId:(id)arg3 configurations:(id)arg4;
- (void)didFinishFBLoginStepWithMediaId:(id)arg1 isSuccess:(_Bool)arg2;
- (void)didStartFBLoginStepWithMediaId:(id)arg1;
- (void)didTapEntryPointWithMedia:(id)arg1 couponOfferId:(id)arg2 netegoId:(id)arg3 trackingToken:(id)arg4;
- (void)didTapAdsManagerEntryPointWithStep:(id)arg1;
- (void)didTapEntryPoint;
- (void)promotionManagerDidFetchDataErrorWithStep:(id)arg1 action:(id)arg2 mediaId:(id)arg3 errorMessage:(id)arg4;
- (void)promotionManagerDidFetchDataSuccessWithStep:(id)arg1 action:(id)arg2 mediaId:(id)arg3;
- (void)promotionManagerDidTapComponentWithStep:(id)arg1 component:(id)arg2 mediaId:(id)arg3 configurations:(id)arg4;
- (void)promotionManagerDidTapComponentWithStep:(id)arg1 component:(id)arg2;
- (void)promotionManagerDidActionErrorWithStep:(id)arg1 action:(id)arg2 mediaId:(id)arg3 errorMessage:(id)arg4;
- (void)promotionManagerDidActionErrorWithStep:(id)arg1 action:(id)arg2 errorMessage:(id)arg3;
- (void)promotionManagerDidActionSuccessWithStep:(id)arg1 action:(id)arg2 mediaId:(id)arg3;
- (void)promotionManagerDidActionSuccessWithStep:(id)arg1 action:(id)arg2;
- (void)promotionManagerDidEnterSuccessWithStep:(id)arg1 mediaId:(id)arg2;
- (void)promotionManagerDidEnterErrorWithStep:(id)arg1 errorMessage:(id)arg2;
- (void)promotionManagerDidEnterSuccessWithStep:(id)arg1;
- (void)injectMediaIdIfNeeded:(id)arg1;
- (id)_initWithEntryPoint:(id)arg1 mediaId:(id)arg2 userSession:(id)arg3;

@end

