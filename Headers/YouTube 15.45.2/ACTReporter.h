//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACTReporterPrivate;

@interface ACTReporter : NSObject
{
    ACTReporterPrivate *_reporter;
}

+ (void)trackUsageWithReporter:(id)arg1;
+ (id)SDKVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) ACTReporterPrivate *reporter; // @synthesize reporter=_reporter;
- (_Bool)report;
- (id)initWithReporter:(id)arg1;
- (id)init;

@end

