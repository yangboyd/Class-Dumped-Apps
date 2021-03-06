//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FKFeedbackServiceCrashData, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIImage;

@interface GFBFeedbackReport : NSObject
{
    unsigned long long _reportType;
    _Bool _isSilent;
    NSMutableArray *_feedbackExperimentDataArray;
    NSMutableDictionary *_productSpecificData;
    NSMutableDictionary *_productSpecificBinaryData;
    NSMutableDictionary *_productSpecificBinaryDataMimeTypes;
    _Bool _shouldIncludeScreenshot;
    _Bool _shouldIncludeSystemLogsAndProductSpecificData;
    _Bool _disableSystemLogsAndProductSpecificData;
    _Bool _shouldIncludeEmailPSD;
    _Bool _suggestionShown;
    float _batteryLevel;
    int _feedbackVersion;
    NSString *_userDescription;
    UIImage *_screenshot;
    NSArray *_screenshotHighlightAnnotationFrames;
    NSString *_context;
    NSString *_metricsSessionID;
    NSString *_logContents;
    NSArray *_experimentIDs;
    FKFeedbackServiceCrashData *_crashData;
    NSString *_categoryTag;
    NSString *_userEmail;
    NSString *_deviceModel;
    NSString *_deviceCategory;
    NSString *_osVersion;
    NSString *_executableName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSDate *_timestamp;
    long long _batteryState;
    NSString *_uiLanguage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suggestionShown; // @synthesize suggestionShown=_suggestionShown;
@property(nonatomic) int feedbackVersion; // @synthesize feedbackVersion=_feedbackVersion;
@property(readonly, copy, nonatomic) NSString *uiLanguage; // @synthesize uiLanguage=_uiLanguage;
@property(readonly, nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(readonly, nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *executableName; // @synthesize executableName=_executableName;
@property(readonly, copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, copy, nonatomic) NSString *deviceCategory; // @synthesize deviceCategory=_deviceCategory;
@property(readonly, copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(copy, nonatomic) NSString *categoryTag; // @synthesize categoryTag=_categoryTag;
@property(retain, nonatomic) FKFeedbackServiceCrashData *crashData; // @synthesize crashData=_crashData;
@property(nonatomic) _Bool shouldIncludeEmailPSD; // @synthesize shouldIncludeEmailPSD=_shouldIncludeEmailPSD;
@property(nonatomic) _Bool disableSystemLogsAndProductSpecificData; // @synthesize disableSystemLogsAndProductSpecificData=_disableSystemLogsAndProductSpecificData;
@property(nonatomic) _Bool shouldIncludeSystemLogsAndProductSpecificData; // @synthesize shouldIncludeSystemLogsAndProductSpecificData=_shouldIncludeSystemLogsAndProductSpecificData;
@property(nonatomic) _Bool shouldIncludeScreenshot; // @synthesize shouldIncludeScreenshot=_shouldIncludeScreenshot;
@property(readonly, nonatomic) NSArray *feedbackExperimentDataArray; // @synthesize feedbackExperimentDataArray=_feedbackExperimentDataArray;
@property(copy, nonatomic) NSArray *experimentIDs; // @synthesize experimentIDs=_experimentIDs;
@property(readonly, nonatomic) NSDictionary *productSpecificBinaryData; // @synthesize productSpecificBinaryData=_productSpecificBinaryData;
@property(readonly, nonatomic) NSDictionary *productSpecificData; // @synthesize productSpecificData=_productSpecificData;
@property(copy, nonatomic) NSString *logContents; // @synthesize logContents=_logContents;
@property(copy, nonatomic) NSString *metricsSessionID; // @synthesize metricsSessionID=_metricsSessionID;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *screenshotHighlightAnnotationFrames; // @synthesize screenshotHighlightAnnotationFrames=_screenshotHighlightAnnotationFrames;
@property(retain, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
- (id)exportProto;
- (int)protoReportType;
- (_Bool)hasLogContentsOrProductSpecificData;
- (_Bool)hasProductSpecificData;
- (_Bool)hasLogContents;
- (void)addFeedbackExperimentData:(id)arg1;
- (void)setProductSpecificBinaryData:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3;
- (void)setProductSpecificBinaryData:(id)arg1 forKey:(id)arg2;
- (void)setProductSpecificValue:(id)arg1 forKey:(id)arg2;
- (id)initWithReportType:(unsigned long long)arg1 isSilent:(_Bool)arg2;

@end

