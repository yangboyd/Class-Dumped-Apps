//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ReverseGeocoderDataSource-Protocol.h"

@class CLGeocoder;

@interface AppleReverseGeocoderDataSource : NSObject <ReverseGeocoderDataSource>
{
    CLGeocoder *_geocoder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
- (void)requestPlacesForLocation:(id)arg1 limit:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

