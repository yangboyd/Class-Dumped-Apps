//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryCameraModeSwitcherView;
@protocol IGSelectorModeType;

@protocol IGStoryCameraModeSwitcherViewDelegate <NSObject>
- (void)cameraModeSwitcherViewDidEndScrollOnMode:(id <IGSelectorModeType>)arg1;
- (void)cameraModeSwitcherViewDidSelectMode:(id <IGSelectorModeType>)arg1;
- (void)cameraModeSwitcherView:(IGStoryCameraModeSwitcherView *)arg1 didSwitchFromMode:(id <IGSelectorModeType>)arg2 toMode:(id <IGSelectorModeType>)arg3;
- (_Bool)cameraModeSwitcherView:(IGStoryCameraModeSwitcherView *)arg1 shouldBeginDraggingFromMode:(id <IGSelectorModeType>)arg2;
@end

