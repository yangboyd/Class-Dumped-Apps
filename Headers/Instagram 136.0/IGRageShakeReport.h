//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGRageShakeReport : NSObject
{
    NSArray *_rawDataAttachments;
    NSArray *_stringAttachments;
    NSArray *_metadataAttachments;
    NSArray *_imageAttachments;
    NSArray *_screenshotAttachments;
    NSArray *_videoAttachments;
}

@property(readonly, copy, nonatomic) NSArray *videoAttachments; // @synthesize videoAttachments=_videoAttachments;
@property(readonly, copy, nonatomic) NSArray *screenshotAttachments; // @synthesize screenshotAttachments=_screenshotAttachments;
@property(readonly, copy, nonatomic) NSArray *imageAttachments; // @synthesize imageAttachments=_imageAttachments;
@property(readonly, copy, nonatomic) NSArray *metadataAttachments; // @synthesize metadataAttachments=_metadataAttachments;
@property(readonly, copy, nonatomic) NSArray *stringAttachments; // @synthesize stringAttachments=_stringAttachments;
@property(readonly, copy, nonatomic) NSArray *rawDataAttachments; // @synthesize rawDataAttachments=_rawDataAttachments;
- (void).cxx_destruct;
- (void)removeVideoAttachmentWithFileURL:(id)arg1;
- (void)addVideoAttachmentWithFileURL:(id)arg1;
- (void)removeScreenshotAttachment:(id)arg1;
- (void)addScreenshotAttachment:(id)arg1;
- (void)updateScreenshotAttachmentWithNewAttachment:(id)arg1 oldAttachment:(id)arg2;
- (void)addImageAttachment:(id)arg1;
- (void)addMetadataAttachment:(id)arg1;
- (void)addStringAttachment:(id)arg1;
- (void)addRawDataAttachment:(id)arg1;
- (id)init;
- (void)addFBDebugDataLogs;
- (void)addThermalStateLogsWithMonitor:(id)arg1;
- (void)addLigerLogs;
- (void)addBreakpadLogsForReportType:(long long)arg1 lastViewControllerName:(id)arg2;
- (void)addMostRecentFileLogs;
- (void)addGenericCacheableRankingServiceLogsAttachmentWithUserSession:(id)arg1;
- (void)addDirectMutationLogsAttachmentWithUserSession:(id)arg1;
- (void)addDirectMsysAttachmentWithUserSession:(id)arg1;
- (void)addDirectCacheAttachmentWithUserSession:(id)arg1;
- (void)addViewControllerStackAttachment;
- (void)addActiveExperimentSettingsAttachments:(id)arg1;

@end

