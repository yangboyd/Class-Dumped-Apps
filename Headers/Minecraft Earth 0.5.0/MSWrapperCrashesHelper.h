//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSWrapperCrashesHelper : NSObject
{
    id <MSCrashHandlerSetupDelegate> _crashHandlerSetupDelegate;
}

+ (void)sendErrorAttachments:(id)arg1 withIncidentIdentifier:(id)arg2;
+ (_Bool)sendCrashReportsOrAwaitUserConfirmationForFilteredIds:(id)arg1;
+ (id)unprocessedCrashReports;
+ (void)setAutomaticProcessing:(_Bool)arg1;
+ (id)getCrashHandlerSetupDelegate;
+ (void)setCrashHandlerSetupDelegate:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) __weak id <MSCrashHandlerSetupDelegate> crashHandlerSetupDelegate; // @synthesize crashHandlerSetupDelegate=_crashHandlerSetupDelegate;
- (void).cxx_destruct;

@end

