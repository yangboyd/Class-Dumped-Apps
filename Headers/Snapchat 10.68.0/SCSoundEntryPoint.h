//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContentDeliveryServices, SCServicesExposer;

@interface SCSoundEntryPoint : SCEntryPoint
{
    SCContentDeliveryServices *_contentDeliveryServices;
    SCServicesExposer *_soundServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *soundServicesExposer; // @synthesize soundServicesExposer=_soundServicesExposer;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
- (void).cxx_destruct;
- (void)begin;

@end

