//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTImageProcessorResultImageData, NSNumber;

@interface ASTImageProcessorResult : NSObject
{
    NSNumber *_yawAngle;
    NSNumber *_pitchAngle;
    double _timestamp;
    ASTImageProcessorResultImageData *_imageData;
    struct CGRect _featureBounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASTImageProcessorResultImageData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property(retain, nonatomic) NSNumber *yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) struct CGRect featureBounds; // @synthesize featureBounds=_featureBounds;
- (id)debugDescription;
@property(readonly, nonatomic) _Bool hasFeatureBounds;
- (id)initWithImageData:(struct ASTImageData *)arg1;

@end

