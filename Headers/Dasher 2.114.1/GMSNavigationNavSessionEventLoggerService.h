//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_NavSessionEventLoggerService.h>

@class GMSNavigationSessionCabrioEventStore;

@interface GMSNavigationNavSessionEventLoggerService : GMSx_NavSessionEventLoggerService
{
    GMSNavigationSessionCabrioEventStore *_cabrioEventStore;
}

- (void).cxx_destruct;
- (id)maybeBuildCustomClientEvents;
- (void)sendViaULRNavigationSessionLocations:(id)arg1;
- (id)maybeBuildUlrMetadata;
- (void)start3PRecordingSessionWithParameters:(id)arg1 forwardingTripAndTrafficVersions:(id)arg2 loggingTripAndTrafficVersions:(id)arg3 guiderStateTracker:(id)arg4;
- (id)initWithConnection:(id)arg1 cabrioEventStore:(id)arg2 clock:(id)arg3 audioSessionManager:(id)arg4;

@end

