//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTModerationLegacyReportAbuseManager, SPTModerationReportActionFactory;
@protocol SPContextMenuActionsFactory;

@interface SPTModerationActionRegistrar : NSObject
{
    SPTModerationReportActionFactory *_reportActionFactory;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    SPTModerationLegacyReportAbuseManager *_legacyReportAbuseManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTModerationLegacyReportAbuseManager *legacyReportAbuseManager; // @synthesize legacyReportAbuseManager=_legacyReportAbuseManager;
@property(readonly, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(readonly, nonatomic) SPTModerationReportActionFactory *reportActionFactory; // @synthesize reportActionFactory=_reportActionFactory;
- (void)registerReportAction;
- (void)registerLegacyReportAbuseAction;
- (id)initWithReportActionFactory:(id)arg1 contextMenuActionsFactory:(id)arg2 legacyReportAbuseManager:(id)arg3;

@end

