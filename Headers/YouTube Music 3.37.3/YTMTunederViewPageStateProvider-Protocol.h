//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTIMusicTunederBreakPageStateRenderer, YTIMusicTunederEducationPageStateRenderer, YTMTunederView;

@protocol YTMTunederViewPageStateProvider <NSObject>
- (void)tunederView:(YTMTunederView *)arg1 showBreakPageState:(YTIMusicTunederBreakPageStateRenderer *)arg2;
- (void)hideEducationPageStateWithTunederView:(YTMTunederView *)arg1;
- (void)tunederView:(YTMTunederView *)arg1 showEducationPageState:(YTIMusicTunederEducationPageStateRenderer *)arg2;
@end

