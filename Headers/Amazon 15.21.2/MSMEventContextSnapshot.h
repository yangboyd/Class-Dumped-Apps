//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSMEventContextSnapshot : NSObject
{
    NSString *_operatingSystemName;
    NSString *_operatingSystemVersion;
    NSString *_marketplaceId;
    NSString *_deviceId;
    NSString *_deviceType;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_directedCustomerId;
    NSString *_sessionId;
    NSString *_timestamp;
    NSString *_messageId;
    NSString *_userAgent;
}

@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *directedCustomerId; // @synthesize directedCustomerId=_directedCustomerId;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemName; // @synthesize operatingSystemName=_operatingSystemName;
- (void).cxx_destruct;
- (id)initWithOperatingSystemName:(id)arg1 andOperatingSystemVersion:(id)arg2 andMarketplaceId:(id)arg3 andDeviceId:(id)arg4 andDeviceType:(id)arg5 andAppName:(id)arg6 andAppVersion:(id)arg7 andDirectedCustomerId:(id)arg8 andSessionId:(id)arg9 andTimestamp:(id)arg10 andMessageId:(id)arg11 andUserAgent:(id)arg12;

@end

