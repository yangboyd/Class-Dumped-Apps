//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC9Qualtrics19QualtricsProperties;

@interface _TtC9Qualtrics9Qualtrics : NSObject
{
    // Error parsing type: , name: properties
    // Error parsing type: , name: interceptManager
}

+ (id)shared;
- (void).cxx_destruct;
- (void)resetViewCounter;
- (void)resetTimer;
- (void)registerViewVisitWithViewName:(id)arg1;
- (_Bool)hide;
- (void)displayTargetWithTargetViewController:(id)arg1 targetUrl:(id)arg2;
- (_Bool)displayWithViewController:(id)arg1;
- (_Bool)handleLocalNotification:(id)arg1 displayOn:(id)arg2;
- (_Bool)handleLocalNotificationWithResponse:(id)arg1 displayOn:(id)arg2;
- (void)evaluateTargetingLogicWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeWithBrandId:(id)arg1 zoneId:(id)arg2 interceptId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
@property(nonatomic, readonly) _TtC9Qualtrics19QualtricsProperties *properties; // @synthesize properties;

@end

