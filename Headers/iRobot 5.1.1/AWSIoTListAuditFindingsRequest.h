//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSIoTResourceIdentifier, NSDate, NSNumber, NSString;

@interface AWSIoTListAuditFindingsRequest : AWSRequest
{
    NSString *_checkName;
    NSDate *_endTime;
    NSNumber *_maxResults;
    NSString *_nextToken;
    AWSIoTResourceIdentifier *_resourceIdentifier;
    NSDate *_startTime;
    NSString *_taskId;
}

+ (id)startTimeJSONTransformer;
+ (id)resourceIdentifierJSONTransformer;
+ (id)endTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AWSIoTResourceIdentifier *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
@property(retain, nonatomic) NSString *nextToken; // @synthesize nextToken=_nextToken;
@property(retain, nonatomic) NSNumber *maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *checkName; // @synthesize checkName=_checkName;
- (void).cxx_destruct;

@end

