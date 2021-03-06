//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface AWECutSameFragmentModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_videoWidth;
    NSNumber *_videoHeight;
    NSNumber *_duration;
    NSString *_materialId;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSNumber *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(copy, nonatomic) NSNumber *videoWidth; // @synthesize videoWidth=_videoWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

