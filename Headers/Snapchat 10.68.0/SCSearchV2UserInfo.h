//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCSearchV2Location;

@interface SCSearchV2UserInfo : SCComposerMarshallableObject
{
    double _age;
    NSString *_countryCode;
    SCSearchV2Location *_location;
    NSString *_bitmojiAvatarId;
}

@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) SCSearchV2Location *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) double age; // @synthesize age=_age;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithAge:(double)arg1 countryCode:(id)arg2 location:(id)arg3 bitmojiAvatarId:(id)arg4;

@end

