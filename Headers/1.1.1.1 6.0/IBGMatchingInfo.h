//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBGMatchingInfo : NSObject
{
    long long _value;
    long long _angle;
    double _probability;
    double _averageProbability;
    double _rectPaddingPercent;
    double _pathNotConsumedPercent;
    double _refPathNotConsumedPercent;
    long long _leftWeight;
    long long _topWeight;
    long long _rightWeight;
    long long _bottomWeight;
    double _pathLength;
    struct CGRect _matchRect;
}

@property(nonatomic) struct CGRect matchRect; // @synthesize matchRect=_matchRect;
@property(nonatomic) double pathLength; // @synthesize pathLength=_pathLength;
@property(nonatomic) long long bottomWeight; // @synthesize bottomWeight=_bottomWeight;
@property(nonatomic) long long rightWeight; // @synthesize rightWeight=_rightWeight;
@property(nonatomic) long long topWeight; // @synthesize topWeight=_topWeight;
@property(nonatomic) long long leftWeight; // @synthesize leftWeight=_leftWeight;
@property(nonatomic) double refPathNotConsumedPercent; // @synthesize refPathNotConsumedPercent=_refPathNotConsumedPercent;
@property(nonatomic) double pathNotConsumedPercent; // @synthesize pathNotConsumedPercent=_pathNotConsumedPercent;
@property(nonatomic) double rectPaddingPercent; // @synthesize rectPaddingPercent=_rectPaddingPercent;
@property(nonatomic) double averageProbability; // @synthesize averageProbability=_averageProbability;
@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(nonatomic) long long angle; // @synthesize angle=_angle;
@property(nonatomic) long long value; // @synthesize value=_value;
- (id)init;

@end

