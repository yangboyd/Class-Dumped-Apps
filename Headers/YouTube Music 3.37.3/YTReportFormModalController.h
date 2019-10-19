//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTFormattedStringLabelDelegate-Protocol.h"

@class GIMMe, NSString, YTConfirmDialogController, YTIReportFormModalRenderer, YTReportFormModalAlertView;
@protocol YTResponder;

@interface YTReportFormModalController : NSObject <YTFormattedStringLabelDelegate>
{
    id _entry;
    YTIReportFormModalRenderer *_renderer;
    GIMMe *_gimme;
    YTReportFormModalAlertView *_alertView;
    YTConfirmDialogController *_confirmDialogController;
    id <YTResponder> _firstResponder;
}

@property(nonatomic) __weak id <YTResponder> firstResponder; // @synthesize firstResponder=_firstResponder;
@property(retain, nonatomic) YTConfirmDialogController *confirmDialogController; // @synthesize confirmDialogController=_confirmDialogController;
@property(retain, nonatomic) YTReportFormModalAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)showConfirmDialogFromOptionSelectableItemRenderer:(id)arg1;
- (void)cleanup;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)showWithRenderer:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

