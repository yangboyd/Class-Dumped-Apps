//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CarouselBuilder : NSObject
{
}

+ (unsigned long long)unitTypeForDiscoveryUnitType:(unsigned long long)arg1;
+ (void)updateOptionsFromLegacyConfig:(id)arg1 discoveryUnit:(id)arg2;
+ (id)createCarouselWithIdentifier:(id)arg1 discoveryUnit:(id)arg2 templateContext:(id)arg3 dataSource:(id)arg4;
+ (id)createCarouselWithIdentifier:(id)arg1 discoveryUnit:(id)arg2 templateContext:(id)arg3;
+ (id)createCarouselFromDiscoveryUnit:(id)arg1 templateContext:(id)arg2;
+ (_Bool)updateDiscoveryUnitViewModel:(id)arg1 discoveryUnit:(id)arg2 nestedContext:(id)arg3;

@end

