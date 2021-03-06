//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSNumber, NSString;

@interface AWSIoTDeleteJobExecutionRequest : AWSRequest
{
    NSNumber *_executionNumber;
    NSNumber *_force;
    NSString *_jobId;
    NSString *_thingName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *thingName; // @synthesize thingName=_thingName;
@property(retain, nonatomic) NSString *jobId; // @synthesize jobId=_jobId;
@property(retain, nonatomic) NSNumber *force; // @synthesize force=_force;
@property(retain, nonatomic) NSNumber *executionNumber; // @synthesize executionNumber=_executionNumber;
- (void).cxx_destruct;

@end

