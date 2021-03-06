//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRGooglePlaceGeometry, NSArray, NSString;

@interface AIRGooglePlace : AIRModel
{
    NSArray *_addressComponents;
    AIRGooglePlaceGeometry *_geometry;
    NSArray *_types;
    NSString *_formattedAddress;
    NSString *_placeID;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(readonly, copy, nonatomic) NSString *formattedAddress; // @synthesize formattedAddress=_formattedAddress;
@property(readonly, copy, nonatomic) NSArray *types; // @synthesize types=_types;
@property(readonly, copy, nonatomic) AIRGooglePlaceGeometry *geometry; // @synthesize geometry=_geometry;
@property(readonly, copy, nonatomic) NSArray *addressComponents; // @synthesize addressComponents=_addressComponents;

@end

