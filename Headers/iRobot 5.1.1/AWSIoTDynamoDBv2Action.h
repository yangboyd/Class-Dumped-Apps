//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSIoTPutItemInput, NSString;

@interface AWSIoTDynamoDBv2Action : AWSModel
{
    AWSIoTPutItemInput *_putItem;
    NSString *_roleArn;
}

+ (id)putItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *roleArn; // @synthesize roleArn=_roleArn;
@property(retain, nonatomic) AWSIoTPutItemInput *putItem; // @synthesize putItem=_putItem;
- (void).cxx_destruct;

@end

