//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHKLogIDProvider, NSMutableDictionary, NSString;

@interface GHKLoggingManager : NSObject
{
    NSString *_logFileFullPath;
    struct unique_ptr<harmony::FileLogSink, std::__1::default_delete<harmony::FileLogSink>> _logSink;
    NSString *_gaiaID;
    unsigned long long _maxLogSize;
    NSMutableDictionary *_properties;
    _Bool _bufferingEnabled;
    GHKLogIDProvider *_logIDProvider;
}

+ (void)deleteInactiveLoggingSessionsExceptMostRecentOneForGaiaID:(id)arg1 mostRecentLogPath:(id *)arg2 logType:(unsigned long long)arg3;
+ (void)deleteInactiveLoggingSessionsExceptMostRecentOneForGaiaID:(id)arg1 logType:(unsigned long long)arg2;
+ (_Bool)isLogFile:(id)arg1 olderThan:(id)arg2;
+ (id)cleanUpAndGetPathToMostRecentLogForGaiaID:(id)arg1 noOlderThan:(id)arg2 logType:(unsigned long long)arg3;
+ (id)mostRecentRTCEventLogContentsForGaiaID:(id)arg1;
+ (id)mostRecentDiagnosticLogContentsForGaiaID:(id)arg1 noOlderThan:(id)arg2;
+ (id)uniqueRTCEventLogFilenameForGaiaID:(id)arg1;
+ (id)mostRecentDiagnosticPropertiesForGaiaID:(id)arg1 noOlderThan:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleHangoutIDUpdated:(id)arg1;
- (void)handleActiveSessionInfoUpdatedEvent:(id)arg1;
- (void)savePersistentProperties;
- (void)deactivateLogFileWithoutFlush;
- (void)deactivateLogFileWithFlush;
- (_Bool)cancelAndDeleteDiagnosticLoggingSession;
- (void)logPropertyWithName:(id)arg1 value:(id)arg2;
- (id)diagnosticLogContents;
- (_Bool)stopAndSaveDiagnosticLoggingSession;
- (_Bool)startDiagnosticLoggingSession;
- (void)dealloc;
- (id)initWithGaiaID:(id)arg1 bufferingEnabled:(_Bool)arg2 logIDProvider:(id)arg3;
- (id)initWithGaiaID:(id)arg1 logIDProvider:(id)arg2;
- (id)initWithGaiaID:(id)arg1 maxLogSize:(unsigned long long)arg2 bufferingEnabled:(_Bool)arg3 logIDProvider:(id)arg4;

@end

