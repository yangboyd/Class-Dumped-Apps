//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGFeedSectionPlaceholderProviding-Protocol.h>
#import <InstagramAppCoreFramework/IGGuideChangeListener-Protocol.h>

@class IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;
@protocol IGGuidesGridSectionControllerDelegate;

@interface IGGuidesGridSectionController : IGListGenericSectionController <IGGuideChangeListener, IGFeedSectionPlaceholderProviding>
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    NSString *_shoppingSessionId;
    _Bool _shouldShowUserAttribution;
    _Bool _useSmallerTopInset;
    id <IGGuidesGridSectionControllerDelegate> _delegate;
    long long _selectionState;
}

+ (id)defaultPlaceholderSpecWithContext:(id)arg1;
+ (id)placeholderSpecForObject:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic) __weak id <IGGuidesGridSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReportGuide:(id)arg1;
- (void)didUpdateGuide:(id)arg1;
- (void)didDeleteGuide:(id)arg1;
- (void)didPublishGuide:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)_logThumbnailImpression;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 shouldShowUserAttribution:(_Bool)arg3 useSmallerTopInset:(_Bool)arg4 priorModule:(id)arg5 priorSubmodule:(id)arg6 shoppingSessionId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

