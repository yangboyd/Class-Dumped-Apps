//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSNumber;

@interface MPFCheckEligibilityForTopicSubscriptionsResponse : CoralModel <NSCoding, NSCopying>
{
    NSNumber *_totalEligibleTargets;
    NSNumber *_currentSubscriptions;
    NSArray *_eligibleDevicesMetadataList;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSArray *eligibleDevicesMetadataList; // @synthesize eligibleDevicesMetadataList=_eligibleDevicesMetadataList;
@property(retain, nonatomic) NSNumber *currentSubscriptions; // @synthesize currentSubscriptions=_currentSubscriptions;
@property(retain, nonatomic) NSNumber *totalEligibleTargets; // @synthesize totalEligibleTargets=_totalEligibleTargets;
- (void).cxx_destruct;

@end

