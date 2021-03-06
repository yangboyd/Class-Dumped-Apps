//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRStaticDestination : AIRModel
{
    NSString *_destinationID;
    NSString *_headline;
    NSString *_subheadline;
    NSString *_queryName;
    NSString *_displayLocation;
    NSURL *_imageUrl;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSString *displayLocation; // @synthesize displayLocation=_displayLocation;
@property(readonly, copy, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
@property(readonly, copy, nonatomic) NSString *subheadline; // @synthesize subheadline=_subheadline;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;

@end

