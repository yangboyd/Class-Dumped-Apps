//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, UIApplication;
@protocol GMSSDKUncleanTerminationDetectorDelegate;

@interface GMSSDKUncleanTerminationDetector : NSObject
{
    NSString *_SDKIdentifier;
    NSUserDefaults *_uncleanStartUpDetectorDataStorage;
    UIApplication *_application;
    _Bool _detectorHasStarted;
    _Bool _hasUncleanTermination;
    id <GMSSDKUncleanTerminationDetectorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasUncleanTermination; // @synthesize hasUncleanTermination=_hasUncleanTermination;
@property(nonatomic) __weak id <GMSSDKUncleanTerminationDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reset;
- (void)checkForUncleanTermination;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)markSDKUsageEnded;
- (void)markSDKUsageStarted;
- (id)init;
- (id)initWithSDKIdentifier:(id)arg1 application:(id)arg2;

@end

