//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPickerLogger-Protocol.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, SCSnapCommonLoggingParameters;

@interface SCMainAppStickerPickerLogger : NSObject <SCStickerPickerLogger>
{
    unsigned long long _sourceType;
    NSDate *_startTime;
    NSString *_stickerSessionId;
    long long _searchSequenceId;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    NSMutableSet *_indexPathsViewed;
    NSMutableSet *_superCategoriesViewed;
    NSMutableDictionary *_tabToStickerPreviewEvent;
    NSMutableDictionary *_tabToStickerPackPreviewEvent;
    NSMutableSet *_expandedPackIds;
}

+ (void)logFriendmojiPickerCloseWithSourceType:(long long)arg1 stickerId:(id)arg2 friendmojiType:(long long)arg3 snapSessionId:(id)arg4 mischiefId:(id)arg5;
- (void).cxx_destruct;
- (void)logDidSaveStickerPackId:(id)arg1 sourceTab:(long long)arg2;
- (void)didExpandStickerPackId:(id)arg1;
- (void)didUpdateVisibleItemsWithStickers:(id)arg1 stickerPacks:(id)arg2 sourceTab:(long long)arg3;
- (id)_sanitizeSearchTerm:(id)arg1;
- (void)_fireEvent:(id)arg1;
- (_Bool)_isActive;
- (void)_logStickerSearchStickerPickerEvents:(id)arg1 categoryCell:(id)arg2 query:(id)arg3 index:(unsigned long long)arg4 sourceTab:(long long)arg5 stickerPickerType:(long long)arg6;
- (void)_logStickerPickerStickerPickEvent:(id)arg1 sticker:(id)arg2 categoryCell:(id)arg3 searchQuery:(id)arg4 index:(unsigned long long)arg5 sourceTab:(long long)arg6 stickerPickerType:(long long)arg7 captureSessionId:(id)arg8;
- (void)_logStickerPickerStickerPick:(id)arg1 categoryCell:(id)arg2 searchQuery:(id)arg3 index:(unsigned long long)arg4 sourceTab:(long long)arg5 stickerPickerType:(long long)arg6 captureSessionId:(id)arg7;
- (void)_logStickerPickerSearch:(id)arg1 results:(id)arg2;
- (void)_logStickerPickerSessionWithSticker:(id)arg1 fromSearch:(_Bool)arg2 searchQuery:(id)arg3 bitmojiTabVisible:(_Bool)arg4 sourceTab:(long long)arg5 stickerPickerType:(long long)arg6 captureSessionId:(id)arg7;
- (void)viewStickerCategoryAtIndex:(id)arg1 type:(long long)arg2;
- (void)logStickerPickerSearchEvent:(id)arg1 results:(id)arg2;
- (void)logStickerPickerSessionEnded:(id)arg1 categoryCell:(id)arg2 searchQuery:(id)arg3 index:(unsigned long long)arg4 bitmojiTabVisible:(_Bool)arg5 tabSource:(long long)arg6 stickerPickerType:(long long)arg7 captureSessionId:(id)arg8;
- (void)resetStickerSession;
- (id)initWithSourceType:(unsigned long long)arg1 commonLoggingParameters:(id)arg2;

@end

