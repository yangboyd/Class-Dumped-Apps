//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/GMSNavArrivalListener-Protocol.h>
#import <NavigationFramework/GMSNavProgressionListener-Protocol.h>
#import <NavigationFramework/GMSNavRouteChangeListener-Protocol.h>
#import <NavigationFramework/GMSNavViaPointManager-Protocol.h>

@class NSArray, NSString;

@interface GMSx_StrictAlongRouteViaPointConsumer : NSObject <GMSNavArrivalListener, GMSNavProgressionListener, GMSNavRouteChangeListener, GMSNavViaPointManager>
{
    NSArray *_viaPoints;
    unsigned long long _nextViaPointIndex;
    vector_b67dfe3a _viaPointOffsetsAlongRoute;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)navGuidanceManager:(id)arg1 didReceiveGuidanceEvent:(id)arg2 metersToStep:(int)arg3;
- (void)navGuidanceManager:(id)arg1 isApproachingGuidanceEvent:(id)arg2 metersFromGuidanceEventToStep:(int)arg3;
- (void)navGuidanceManager:(id)arg1 didChangeStepWithState:(id)arg2 metadata:(id)arg3;
- (void)navGuidanceManager:(id)arg1 didProgressWithState:(id)arg2;
- (void)navGuidanceManager:(id)arg1 didCancelRoute:(id)arg2;
- (void)navGuidanceManager:(id)arg1 didCompleteRouteSuccessfully:(id)arg2;
- (void)navGuidanceManager:(id)arg1 didFailRerouteWithState:(id)arg2 metadata:(id)arg3;
- (id)viaPointsForReroute;
- (void)navGuidanceManager:(id)arg1 didRequestRerouteWithState:(id)arg2 metadata:(id)arg3;
- (void)navGuidanceManager:(id)arg1 didChangeRouteWithState:(id)arg2 metadata:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

