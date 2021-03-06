//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPUniqueID, NSString, NSTimer;
@protocol BDPOnlineTimeReportedNotifyDelegate;

@interface BDPOnlineTimeReportedTask : NSObject
{
    _Bool _needAuthenticationGuide;
    _Bool _isLogin;
    _Bool _isReporting;
    _Bool _isFirstReported;
    id <BDPOnlineTimeReportedNotifyDelegate> _notifyDelegate;
    NSString *_appId;
    NSString *_userId;
    NSString *_deviceId;
    BDPUniqueID *_uniqueId;
    long long _hostType;
    double _period;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isFirstReported; // @synthesize isFirstReported=_isFirstReported;
@property(nonatomic) _Bool isReporting; // @synthesize isReporting=_isReporting;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(nonatomic) double period; // @synthesize period=_period;
@property(nonatomic) long long hostType; // @synthesize hostType=_hostType;
@property(retain, nonatomic) BDPUniqueID *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <BDPOnlineTimeReportedNotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) _Bool needAuthenticationGuide; // @synthesize needAuthenticationGuide=_needAuthenticationGuide;
- (void).cxx_destruct;
- (void)_monitorServiceWithStatus:(long long)arg1;
- (void)_updateUserId;
- (_Bool)_checkUserLoginStatusIsChanged;
- (void)_updateOnlineTimeWithReportedType:(unsigned long long)arg1;
- (void)stop;
- (void)start;
- (id)initWithUnique:(id)arg1 appId:(id)arg2 hostType:(long long)arg3 deviceId:(id)arg4 period:(double)arg5;

@end

