//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSString;

@interface AWSIoTListPrincipalPoliciesResponse : AWSModel
{
    NSString *_nextMarker;
    NSArray *_policies;
}

+ (id)policiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property(retain, nonatomic) NSString *nextMarker; // @synthesize nextMarker=_nextMarker;
- (void).cxx_destruct;

@end

