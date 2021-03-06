//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@protocol BDMVideoPlacementBuilder <NSObject>
@property(readonly, nonatomic) id placement;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendLinearity;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendMaxbitr;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendMinbitr;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendMindur;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendMaxdur;
- (id <BDMVideoPlacementBuilder> (^)(NSArray *))appendMimes;
- (id <BDMVideoPlacementBuilder> (^)(float))appendHeight;
- (id <BDMVideoPlacementBuilder> (^)(float))appendWidth;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendUnit;
- (id <BDMVideoPlacementBuilder> (^)(NSArray *))appendCType;
- (id <BDMVideoPlacementBuilder> (^)(_Bool))appendskip;
- (id <BDMVideoPlacementBuilder> (^)(unsigned int))appendPos;
@end

