//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCaptionLogger-Protocol.h"
#import "SCStickerContainerLogger-Protocol.h"

@class NSArray, NSDictionary, NSString, SCPreviewEphemeralMediaList, SCSnapCommonLoggingParameters;
@protocol SCGeoFilterLogger, SCPreviewAggregateLatencyLogging, SCPreviewLatencyLogging, SCPreviewUserInteractionStateLogging, SCStickerProtocol;

@protocol SCPreviewLogging <SCStickerContainerLogger, SCCaptionLogger>
+ (void)logAttemptToSaveSnapEvent:(SCSnapCommonLoggingParameters *)arg1 savingSessionId:(NSString *)arg2 saveToGallery:(_Bool)arg3 saveToCameraRoll:(_Bool)arg4;
+ (void)logSnapSaveEvents:(SCSnapCommonLoggingParameters *)arg1 snapIdInSnapchatGallery:(NSString *)arg2 mediaIdInSnapchatGallery:(NSString *)arg3 entryIdInSnapchatGallery:(NSString *)arg4 savingSessionId:(NSString *)arg5 saveToCameraRoll:(_Bool)arg6;
@property(readonly, nonatomic) long long pickerOpenedCount;
@property(copy, nonatomic) NSString *context;
@property(retain, nonatomic) id <SCPreviewAggregateLatencyLogging> aggregateLatencyLogger;
@property(retain, nonatomic) id <SCPreviewLatencyLogging> latencyLogger;
@property(retain, nonatomic) id <SCPreviewUserInteractionStateLogging> interactionStateLogger;
- (void)logPreviewPageViewFromPreviousPage:(long long)arg1 loggingParameters:(SCSnapCommonLoggingParameters *)arg2;
- (void)logDependencyLoadingEnded:(_Bool)arg1;
- (void)dependencyLoadingStarted;
- (NSArray *)blizzardEventsForSendingSharedMessage:(SCSnapCommonLoggingParameters *)arg1 isFromSnapchatGallery:(_Bool)arg2 playerVersion:(long long)arg3;
- (void)updateCaptionMetricsInSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (void)updateDrawingMetricsInSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (void)logDrawingMetricStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (void)updateStickerMetricsInSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (void)closedStickerPickerWithSearchCount:(long long)arg1 pretypeStickerTagSelectCount:(long long)arg2 prefixMatchStickerTagSelectCount:(long long)arg3;
- (void)closedStickerPicker:(long long)arg1;
- (void)openedStickerPicker;
- (void)logStickerRemoved:(id <SCStickerProtocol>)arg1 isFromRecents:(_Bool)arg2 isCreatedCustomSticker:(_Bool)arg3 snapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg4;
- (void)logStickerTracked:(id <SCStickerProtocol>)arg1;
- (void)logStickerPickerEvent:(SCSnapCommonLoggingParameters *)arg1;
- (NSDictionary *)stickerPickerLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (double)viewingTime;
- (void)viewingEnded;
- (void)viewingStarted;
- (void)logSnapPreviewActionForBatchCapture:(SCSnapCommonLoggingParameters *)arg1 ephemeralMediaList:(SCPreviewEphemeralMediaList *)arg2 geofilterLogger:(id <SCGeoFilterLogger>)arg3 withBatchCaptureSessionID:(NSString *)arg4 uniqueSnapCreationCount:(unsigned long long)arg5 deletedSegmentCaptureSessionIDs:(NSArray *)arg6;
- (void)logSnapPreviewAction:(SCSnapCommonLoggingParameters *)arg1 ephemeralMediaList:(SCPreviewEphemeralMediaList *)arg2 geofilterLogger:(id <SCGeoFilterLogger>)arg3;
- (void)logDirectSnapEdit:(NSString *)arg1;
- (void)logDirectSnapCreateForBatchCapture:(SCSnapCommonLoggingParameters *)arg1 withBatchCaptureSessionID:(NSString *)arg2;
- (void)logDirectSnapCreate:(SCSnapCommonLoggingParameters *)arg1 cellViewPosition:(long long)arg2;

@optional
- (void)logDirectSnapShareWithActivityType:(NSString *)arg1 isSnapWithLens:(_Bool)arg2;
@end

