//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSDictionary, NSString;

@interface AWSIoTThingGroupDocument : AWSModel
{
    NSDictionary *_attributes;
    NSArray *_parentGroupNames;
    NSString *_thingGroupDescription;
    NSString *_thingGroupId;
    NSString *_thingGroupName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *thingGroupName; // @synthesize thingGroupName=_thingGroupName;
@property(retain, nonatomic) NSString *thingGroupId; // @synthesize thingGroupId=_thingGroupId;
@property(retain, nonatomic) NSString *thingGroupDescription; // @synthesize thingGroupDescription=_thingGroupDescription;
@property(retain, nonatomic) NSArray *parentGroupNames; // @synthesize parentGroupNames=_parentGroupNames;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;

@end

