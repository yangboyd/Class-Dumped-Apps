//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnalyticsEvent.h"

@class AriEventExtension;

@interface AuditAnalyticsEvent : AnalyticsEvent
{
    AriEventExtension *_ARIExtension;
}

@property(readonly, nonatomic) AriEventExtension *ARIExtension; // @synthesize ARIExtension=_ARIExtension;
- (void).cxx_destruct;
- (id)createChromecastAppLog;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int auditContextID;
@property(nonatomic) int auditEventName;
- (id)init;

@end

