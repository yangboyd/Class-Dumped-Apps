//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABloksViewController.h"

#import "WAShopsPrivacyNoticeDelegate-Protocol.h"

@class WAOverlayView, WAShopsTOSManager;

@interface WAShopsTOSViewController : WABloksViewController <WAShopsPrivacyNoticeDelegate>
{
    CDUnknownBlockType _onTOSCompletion;
    WAShopsTOSManager *_manager;
    WAOverlayView *_overlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) WAShopsTOSManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType onTOSCompletion; // @synthesize onTOSCompletion=_onTOSCompletion;
- (void)hideOverlay;
- (void)showOverlay;
- (void)userDidAcceptPrivacyNoticeVersion:(id)arg1;
- (id)createBloksContext;
- (id)initWithStorage:(id)arg1;

@end

