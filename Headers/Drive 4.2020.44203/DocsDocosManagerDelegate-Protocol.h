//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DocsDocosManager, NSString;

@protocol DocsDocosManagerDelegate <NSObject>
- (void)deleteDraftWithAnchorId:(NSString *)arg1;
- (void)insertDraftWithAnchorId:(NSString *)arg1;
- (NSString *)unresolvedAnchorIdForSelection;

@optional
- (void)triggerRejectSuggestionAction:(NSString *)arg1;
- (void)triggerAcceptSuggestionAction:(NSString *)arg1;
- (void)docosManagerIsInitialized:(DocsDocosManager *)arg1;
@end

