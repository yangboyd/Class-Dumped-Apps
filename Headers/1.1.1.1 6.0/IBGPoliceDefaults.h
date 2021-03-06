//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface IBGPoliceDefaults : NSObject
{
    _Bool _isDebuggerAttached;
    _Bool _didSendLogsInCurrentSession;
    long long _internalLoggingLevel;
    long long _retentionDays;
    long long _totalSizeLimit;
    long long _uploadInterval;
    NSDictionary *_targetedUUIDs;
    NSDictionary *_targetedEmails;
    NSString *_currentEmail;
    NSString *_currentUUID;
    NSDate *_lastLogsUpload;
    NSDate *_lastRetentionCheck;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didSendLogsInCurrentSession; // @synthesize didSendLogsInCurrentSession=_didSendLogsInCurrentSession;
@property(nonatomic) _Bool isDebuggerAttached; // @synthesize isDebuggerAttached=_isDebuggerAttached;
@property(retain, nonatomic) NSDate *lastRetentionCheck; // @synthesize lastRetentionCheck=_lastRetentionCheck;
@property(retain, nonatomic) NSDate *lastLogsUpload; // @synthesize lastLogsUpload=_lastLogsUpload;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentUUID; // @synthesize currentUUID=_currentUUID;
@property(retain, nonatomic) NSString *currentEmail; // @synthesize currentEmail=_currentEmail;
@property(retain, nonatomic) NSDictionary *targetedUUIDs; // @synthesize targetedUUIDs=_targetedUUIDs;
@property(retain, nonatomic) NSDictionary *targetedEmails; // @synthesize targetedEmails=_targetedEmails;
@property(nonatomic) long long uploadInterval; // @synthesize uploadInterval=_uploadInterval;
@property(nonatomic) long long totalSizeLimit; // @synthesize totalSizeLimit=_totalSizeLimit;
@property(nonatomic) long long retentionDays; // @synthesize retentionDays=_retentionDays;
@property(nonatomic) long long internalLoggingLevel; // @synthesize internalLoggingLevel=_internalLoggingLevel;
- (void)defaultsChanged;
- (void)saveCurrentUserEmail:(id)arg1 andUUID:(id)arg2;
- (_Bool)shouldLogToFileWithLogLevel:(long long)arg1;
- (void)setSDKLoggingFeatureWithDictionary:(id)arg1;
- (id)init;

@end

