//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_RouteAbsoluteCalloutRenderer.h>

@class GMSDDistanceFormatter;

@interface GMSx_RouteAbsoluteDistanceCalloutRenderer : GMSx_RouteAbsoluteCalloutRenderer
{
    GMSDDistanceFormatter *_distanceFormatter;
}

- (void).cxx_destruct;
- (void)updateWithCalloutModel:(id)arg1 routeState:(id)arg2 location:(id)arg3;
- (id)initWithScreenInfo:(id)arg1 nightMode:(_Bool)arg2 useLocation:(_Bool)arg3 distanceFormatter:(id)arg4;

@end

