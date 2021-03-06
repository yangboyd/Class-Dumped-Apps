//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMBaseProcessor.h>

#import <Funny/IMSafariViewControllerDelegate-Protocol.h>

@class NSString;

@interface IMViewProcessor : IMBaseProcessor <IMSafariViewControllerDelegate>
{
}

- (void)setCloseEndCardTracker:(id)arg1;
- (void)imSafariViewControllerDidDismissScreen:(id)arg1;
- (void)imSafariViewControllerWillDismissScreen:(id)arg1;
- (void)skipwithScheme:(id)arg1;
- (void)readyFailedCallBackToRenderView;
- (void)readySuccessCallbackToRenderView;
- (void)hideStatusBar;
- (void)disableCloseRegion:(id)arg1;
- (void)useCustomClose:(id)arg1;
- (void)closeWithScheme:(id)arg1;
- (void)setOrientationProperties:(id)arg1 withScheme:(id)arg2;
- (void)setResizeProperties:(id)arg1 withScheme:(id)arg2;
- (void)setExpandProperties:(id)arg1 withScheme:(id)arg2;
- (void)resizeWithScheme:(id)arg1;
- (void)expand:(id)arg1 withScheme:(id)arg2;
- (void)openFallback:(id)arg1 withScheme:(id)arg2;
- (void)openExternal:(id)arg1 withScheme:(id)arg2;
- (_Bool)openEmbedded:(id)arg1 withScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

