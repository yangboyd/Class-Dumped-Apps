//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class EKOTransform, NSMutableArray, NSString;

@interface XUITransformCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasToDatastore; // @dynamic hasToDatastore;
@property(nonatomic) _Bool hasTransform; // @dynamic hasTransform;
@property(retain, nonatomic) NSMutableArray *sourcesArray; // @dynamic sourcesArray;
@property(readonly, nonatomic) unsigned long long sourcesArray_Count; // @dynamic sourcesArray_Count;
@property(copy, nonatomic) NSString *toDatastore; // @dynamic toDatastore;
@property(retain, nonatomic) EKOTransform *transform; // @dynamic transform;

@end

