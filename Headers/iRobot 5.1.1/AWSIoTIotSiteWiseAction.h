//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSString;

@interface AWSIoTIotSiteWiseAction : AWSModel
{
    NSArray *_putAssetPropertyValueEntries;
    NSString *_roleArn;
}

+ (id)putAssetPropertyValueEntriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *roleArn; // @synthesize roleArn=_roleArn;
@property(retain, nonatomic) NSArray *putAssetPropertyValueEntries; // @synthesize putAssetPropertyValueEntries=_putAssetPropertyValueEntries;
- (void).cxx_destruct;

@end

