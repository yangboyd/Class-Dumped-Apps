//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSSet, NSString;

@interface AIRListingRoom : AIRModel
{
    NSString *_listingRoomID;
    NSSet *_beds;
    NSSet *_hostingAmenities;
    long long _roomNumber;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long roomNumber; // @synthesize roomNumber=_roomNumber;
@property(readonly, copy, nonatomic) NSSet *hostingAmenities; // @synthesize hostingAmenities=_hostingAmenities;
@property(readonly, copy, nonatomic) NSSet *beds; // @synthesize beds=_beds;
@property(readonly, copy, nonatomic) NSString *listingRoomID; // @synthesize listingRoomID=_listingRoomID;
- (id)initWithListingRoomID:(id)arg1 beds:(id)arg2 roomNumber:(long long)arg3;

@end

