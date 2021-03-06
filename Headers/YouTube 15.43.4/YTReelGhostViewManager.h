//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, YTIReelPlayerOverlayRenderer;
@protocol YTReelGhostViewManagerDelegate;

@interface YTReelGhostViewManager : NSObject
{
    NSMapTable *_viewToGhostViewMapTable;
    _Bool _isLoading;
    _Bool _didPlaybackBegin;
    _Bool _hasReceivedFullOverlayRenderer;
    id <YTReelGhostViewManagerDelegate> _delegate;
    YTIReelPlayerOverlayRenderer *_overlayRenderer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasReceivedFullOverlayRenderer; // @synthesize hasReceivedFullOverlayRenderer=_hasReceivedFullOverlayRenderer;
@property(nonatomic) _Bool didPlaybackBegin; // @synthesize didPlaybackBegin=_didPlaybackBegin;
@property(retain, nonatomic) YTIReelPlayerOverlayRenderer *overlayRenderer; // @synthesize overlayRenderer=_overlayRenderer;
@property(nonatomic) __weak id <YTReelGhostViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)maybeUpdatePlayerOverlayRenderer;
- (void)hideGhostViews;
- (void)layoutGhostViews;
- (void)setGhostableViews:(id)arg1;
- (id)init;

@end

