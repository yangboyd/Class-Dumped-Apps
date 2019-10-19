//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GRWMessagingDisplayPresentation-Protocol.h"

@class GRWTooltipController, NSString;

@interface GRWMessagingDisplayTooltip : UIViewController <GRWMessagingDisplayPresentation>
{
    GRWTooltipController *_tooltipController;
}

@property(retain, nonatomic) GRWTooltipController *tooltipController; // @synthesize tooltipController=_tooltipController;
- (void).cxx_destruct;
- (id)tooltipViewForTooltipUI:(id)arg1;
- (void)handleAccessibilityVoiceOverStatusChanged:(id)arg1;
- (void)registerNotifications;
@property(readonly, nonatomic) _Bool shouldDismissInBackground;
- (_Bool)canPresentMessage:(id)arg1;
- (void)dismissIfNeeded;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentMessage:(id)arg1 withActionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

