//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@protocol AppsFlyerTrackerDelegate <NSObject>

@optional
- (void)onAppOpenAttributionFailure:(NSError *)arg1;
- (void)onAppOpenAttribution:(NSDictionary *)arg1;
- (void)onConversionDataRequestFailure:(NSError *)arg1;
- (void)onConversionDataReceived:(NSDictionary *)arg1;
@end

