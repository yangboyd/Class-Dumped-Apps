//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData;

@interface SCCStoryPlayerBusinessInfo : SCComposerMarshallableObject
{
    NSData *_encodedBusinessProfile;
}

@property(copy, nonatomic) NSData *encodedBusinessProfile; // @synthesize encodedBusinessProfile=_encodedBusinessProfile;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithEncodedBusinessProfile:(id)arg1;

@end

