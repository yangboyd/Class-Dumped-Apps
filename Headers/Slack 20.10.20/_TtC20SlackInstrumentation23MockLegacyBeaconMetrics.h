//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <SlackInstrumentation/_TtP20SlackInstrumentation19PRQMetricsInterface_-Protocol.h>

@protocol _TtP20SlackInstrumentation27TimeToUsableMetricInterface_, _TtP20SlackInstrumentation28TimeToVisibleMetricInterface_;

@interface _TtC20SlackInstrumentation23MockLegacyBeaconMetrics : _TtCs12_SwiftObject <_TtP20SlackInstrumentation19PRQMetricsInterface_>
{
    // Error parsing type: , name: timeToVisible
    // Error parsing type: , name: timeToUsable
    // Error parsing type: , name: lifecycleObserver
    // Error parsing type: , name: metricReporter
    // Error parsing type: , name: telemetryReporter
    // Error parsing type: , name: metrics
    // Error parsing type: , name: disposables
    // Error parsing type: , name: startChannelSwitchTimingCalled
    // Error parsing type: , name: willSwitchWorkspacesBlock
}

- (void)track:(id)arg1 properties:(id)arg2;
- (void)track:(id)arg1;
- (void)willSwitchWorkspaces;
- (void)startChannelSwitchTimingWithTargetChannelId:(id)arg1;
@property(nonatomic, retain) id <_TtP20SlackInstrumentation27TimeToUsableMetricInterface_> timeToUsable; // @synthesize timeToUsable;
@property(nonatomic, retain) id <_TtP20SlackInstrumentation28TimeToVisibleMetricInterface_> timeToVisible; // @synthesize timeToVisible;

@end

