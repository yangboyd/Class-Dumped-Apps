//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface YTAppStateInfo : NSObject <NSCoding>
{
    _Bool _appDidTerminate;
    _Bool _appCalledExit;
    _Bool _appRunningBackgroundTask;
    _Bool _stallDetected;
    unsigned long long _previousAppState;
    NSDate *_previousAppStateDate;
    NSDate *_appDidTerminateDate;
    NSString *_previousOSVersion;
    NSString *_previousAppVersion;
    NSDate *_stallDetectedDate;
}

@property(retain) NSDate *stallDetectedDate; // @synthesize stallDetectedDate=_stallDetectedDate;
@property _Bool stallDetected; // @synthesize stallDetected=_stallDetected;
@property(nonatomic) _Bool appRunningBackgroundTask; // @synthesize appRunningBackgroundTask=_appRunningBackgroundTask;
@property(nonatomic) _Bool appCalledExit; // @synthesize appCalledExit=_appCalledExit;
@property(retain, nonatomic) NSString *previousAppVersion; // @synthesize previousAppVersion=_previousAppVersion;
@property(retain, nonatomic) NSString *previousOSVersion; // @synthesize previousOSVersion=_previousOSVersion;
@property(retain, nonatomic) NSDate *appDidTerminateDate; // @synthesize appDidTerminateDate=_appDidTerminateDate;
@property(nonatomic) _Bool appDidTerminate; // @synthesize appDidTerminate=_appDidTerminate;
@property(retain, nonatomic) NSDate *previousAppStateDate; // @synthesize previousAppStateDate=_previousAppStateDate;
@property(nonatomic) unsigned long long previousAppState; // @synthesize previousAppState=_previousAppState;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

