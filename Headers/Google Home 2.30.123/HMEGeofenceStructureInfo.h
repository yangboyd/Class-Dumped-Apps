//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMEGeofenceStructureInfo : NSObject
{
    NSString *_structureID;
    NSString *_addressID;
    struct CLLocationCoordinate2D _locationCoordinate;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(copy, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(copy, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
- (id)initWithStructureID:(id)arg1 addressID:(id)arg2 locationCoordinate:(struct CLLocationCoordinate2D)arg3;

@end

