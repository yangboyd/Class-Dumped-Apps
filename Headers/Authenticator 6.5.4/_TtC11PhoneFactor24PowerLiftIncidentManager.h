//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PowerLiftLogger-Protocol.h"

@interface _TtC11PhoneFactor24PowerLiftIncidentManager : NSObject <PowerLiftLogger>
{
}

+ (id)logFileType;
+ (id)autofillExtensionLogFileName;
+ (id)ssoExtensionLogFileName;
+ (id)watchLogFileName;
+ (id)logFileName;
+ (id)PowerLiftDomain;
- (void).cxx_destruct;
- (void)powerLiftLogger:(id)arg1 shouldLogMessage:(id)arg2 atLevel:(long long)arg3;
- (void)uploadLogsForIncident:(id)arg1 partnerPowerliftApiKey:(id)arg2 logData:(id)arg3 logFileName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)postIncident:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

